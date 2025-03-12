#pragma once

#include <cstdint>
#include <cstddef>
#include <sdkconfig.h>

namespace chip {
    namespace ASN1 {
    
    enum OIDCategory
    {
        kOIDCategory_PubKeyAlgo = 0x0100,
        kOIDCategory_SigAlgo = 0x0200,
        kOIDCategory_AttributeType = 0x0300,
        kOIDCategory_EllipticCurve = 0x0400,
        kOIDCategory_Extension = 0x0500,
        kOIDCategory_KeyPurpose = 0x0600,
    
        kOIDCategory_NotSpecified = 0,
        kOIDCategory_Unknown = 0x0F00,
        kOIDCategory_Mask = 0x0F00
    };
    
    typedef uint16_t OID;
    
    enum
    {
        kOID_PubKeyAlgo_ECPublicKey = 0x0101,
    
        kOID_SigAlgo_ECDSAWithSHA256 = 0x0201,
    
        kOID_AttributeType_CommonName = 0x0301,
        kOID_AttributeType_Surname = 0x0302,
        kOID_AttributeType_SerialNumber = 0x0303,
        kOID_AttributeType_CountryName = 0x0304,
        kOID_AttributeType_LocalityName = 0x0305,
        kOID_AttributeType_StateOrProvinceName = 0x0306,
        kOID_AttributeType_OrganizationName = 0x0307,
        kOID_AttributeType_OrganizationalUnitName = 0x0308,
        kOID_AttributeType_Title = 0x0309,
        kOID_AttributeType_Name = 0x030A,
        kOID_AttributeType_GivenName = 0x030B,
        kOID_AttributeType_Initials = 0x030C,
        kOID_AttributeType_GenerationQualifier = 0x030D,
        kOID_AttributeType_DNQualifier = 0x030E,
        kOID_AttributeType_Pseudonym = 0x030F,
        kOID_AttributeType_DomainComponent = 0x0310,
        kOID_AttributeType_MatterNodeId = 0x0311,
        kOID_AttributeType_MatterFirmwareSigningId = 0x0312,
        kOID_AttributeType_MatterICACId = 0x0313,
        kOID_AttributeType_MatterRCACId = 0x0314,
        kOID_AttributeType_MatterFabricId = 0x0315,
        kOID_AttributeType_MatterCASEAuthTag = 0x0316,
    
        kOID_EllipticCurve_prime256v1 = 0x0401,
    
        kOID_Extension_BasicConstraints = 0x0501,
        kOID_Extension_KeyUsage = 0x0502,
        kOID_Extension_ExtendedKeyUsage = 0x0503,
        kOID_Extension_SubjectKeyIdentifier = 0x0504,
        kOID_Extension_AuthorityKeyIdentifier = 0x0505,
        kOID_Extension_CSRRequest = 0x0506,
    
        kOID_KeyPurpose_ServerAuth = 0x0601,
        kOID_KeyPurpose_ClientAuth = 0x0602,
        kOID_KeyPurpose_CodeSigning = 0x0603,
        kOID_KeyPurpose_EmailProtection = 0x0604,
        kOID_KeyPurpose_TimeStamping = 0x0605,
        kOID_KeyPurpose_OCSPSigning = 0x0606,
    
        kOID_NotSpecified = 0,
        kOID_Unknown = 0xFFFF,
        kOID_EnumMask = 0x00FF
    };
    
    struct OIDTableEntry
    {
        OID EnumVal;
        const uint8_t *EncodedOID;
        uint16_t EncodedOIDLen;
    };
    
    struct OIDNameTableEntry
    {
        OID EnumVal;
        const char *Name;
    };
    
    extern const OIDTableEntry sOIDTable[];
    extern const OIDNameTableEntry sOIDNameTable[];
    extern const size_t sOIDTableSize;
    
    #ifdef ASN1_DEFINE_OID_TABLE
    
    static const uint8_t sOID_PubKeyAlgo_ECPublicKey[] = { 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x02, 0x01 };
    static const uint8_t sOID_SigAlgo_ECDSAWithSHA256[] = { 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x04, 0x03, 0x02 };
    static const uint8_t sOID_AttributeType_CommonName[] = { 0x55, 0x04, 0x03 };
    static const uint8_t sOID_AttributeType_Surname[] = { 0x55, 0x04, 0x04 };
    static const uint8_t sOID_AttributeType_SerialNumber[] = { 0x55, 0x04, 0x05 };
    static const uint8_t sOID_AttributeType_CountryName[] = { 0x55, 0x04, 0x06 };
    static const uint8_t sOID_AttributeType_LocalityName[] = { 0x55, 0x04, 0x07 };
    static const uint8_t sOID_AttributeType_StateOrProvinceName[] = { 0x55, 0x04, 0x08 };
    static const uint8_t sOID_AttributeType_OrganizationName[] = { 0x55, 0x04, 0x0A };
    static const uint8_t sOID_AttributeType_OrganizationalUnitName[] = { 0x55, 0x04, 0x0B };
    static const uint8_t sOID_AttributeType_Title[] = { 0x55, 0x04, 0x0C };
    static const uint8_t sOID_AttributeType_Name[] = { 0x55, 0x04, 0x29 };
    static const uint8_t sOID_AttributeType_GivenName[] = { 0x55, 0x04, 0x2A };
    static const uint8_t sOID_AttributeType_Initials[] = { 0x55, 0x04, 0x2B };
    static const uint8_t sOID_AttributeType_GenerationQualifier[] = { 0x55, 0x04, 0x2C };
    static const uint8_t sOID_AttributeType_DNQualifier[] = { 0x55, 0x04, 0x2E };
    static const uint8_t sOID_AttributeType_Pseudonym[] = { 0x55, 0x04, 0x41 };
    static const uint8_t sOID_AttributeType_DomainComponent[] = { 0x09, 0x92, 0x26, 0x89, 0x93, 0xF2, 0x2C, 0x64, 0x01, 0x19 };
    static const uint8_t sOID_AttributeType_MatterNodeId[] = { 0x2B, 0x06, 0x01, 0x04, 0x01, 0x82, 0xA2, 0x7C, 0x01, 0x01 };
    static const uint8_t sOID_AttributeType_MatterFirmwareSigningId[] = { 0x2B, 0x06, 0x01, 0x04, 0x01, 0x82, 0xA2, 0x7C, 0x01, 0x02 };
    static const uint8_t sOID_AttributeType_MatterICACId[] = { 0x2B, 0x06, 0x01, 0x04, 0x01, 0x82, 0xA2, 0x7C, 0x01, 0x03 };
    static const uint8_t sOID_AttributeType_MatterRCACId[] = { 0x2B, 0x06, 0x01, 0x04, 0x01, 0x82, 0xA2, 0x7C, 0x01, 0x04 };
    static const uint8_t sOID_AttributeType_MatterFabricId[] = { 0x2B, 0x06, 0x01, 0x04, 0x01, 0x82, 0xA2, 0x7C, 0x01, 0x05 };
    static const uint8_t sOID_AttributeType_MatterCASEAuthTag[] = { 0x2B, 0x06, 0x01, 0x04, 0x01, 0x82, 0xA2, 0x7C, 0x01, 0x06 };
    static const uint8_t sOID_EllipticCurve_prime256v1[] = { 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x03, 0x01, 0x07 };
    static const uint8_t sOID_Extension_BasicConstraints[] = { 0x55, 0x1D, 0x13 };
    static const uint8_t sOID_Extension_KeyUsage[] = { 0x55, 0x1D, 0x0F };
    static const uint8_t sOID_Extension_ExtendedKeyUsage[] = { 0x55, 0x1D, 0x25 };
    static const uint8_t sOID_Extension_SubjectKeyIdentifier[] = { 0x55, 0x1D, 0x0E };
    static const uint8_t sOID_Extension_AuthorityKeyIdentifier[] = { 0x55, 0x1D, 0x23 };
    static const uint8_t sOID_Extension_CSRRequest[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01, 0x09, 0x0E };
    static const uint8_t sOID_KeyPurpose_ServerAuth[] = { 0x2B, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x01 };
    static const uint8_t sOID_KeyPurpose_ClientAuth[] = { 0x2B, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x02 };
    static const uint8_t sOID_KeyPurpose_CodeSigning[] = { 0x2B, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x03 };
    static const uint8_t sOID_KeyPurpose_EmailProtection[] = { 0x2B, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x04 };
    static const uint8_t sOID_KeyPurpose_TimeStamping[] = { 0x2B, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x08 };
    static const uint8_t sOID_KeyPurpose_OCSPSigning[] = { 0x2B, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x09 };
    
    
    const OIDTableEntry sOIDTable[] =
    {
        { kOID_PubKeyAlgo_ECPublicKey, sOID_PubKeyAlgo_ECPublicKey, sizeof(sOID_PubKeyAlgo_ECPublicKey) },
        { kOID_SigAlgo_ECDSAWithSHA256, sOID_SigAlgo_ECDSAWithSHA256, sizeof(sOID_SigAlgo_ECDSAWithSHA256) },
        { kOID_AttributeType_CommonName, sOID_AttributeType_CommonName, sizeof(sOID_AttributeType_CommonName) },
        { kOID_AttributeType_Surname, sOID_AttributeType_Surname, sizeof(sOID_AttributeType_Surname) },
        { kOID_AttributeType_SerialNumber, sOID_AttributeType_SerialNumber, sizeof(sOID_AttributeType_SerialNumber) },
        { kOID_AttributeType_CountryName, sOID_AttributeType_CountryName, sizeof(sOID_AttributeType_CountryName) },
        { kOID_AttributeType_LocalityName, sOID_AttributeType_LocalityName, sizeof(sOID_AttributeType_LocalityName) },
        { kOID_AttributeType_StateOrProvinceName, sOID_AttributeType_StateOrProvinceName, sizeof(sOID_AttributeType_StateOrProvinceName) },
        { kOID_AttributeType_OrganizationName, sOID_AttributeType_OrganizationName, sizeof(sOID_AttributeType_OrganizationName) },
        { kOID_AttributeType_OrganizationalUnitName, sOID_AttributeType_OrganizationalUnitName, sizeof(sOID_AttributeType_OrganizationalUnitName) },
        { kOID_AttributeType_Title, sOID_AttributeType_Title, sizeof(sOID_AttributeType_Title) },
        { kOID_AttributeType_Name, sOID_AttributeType_Name, sizeof(sOID_AttributeType_Name) },
        { kOID_AttributeType_GivenName, sOID_AttributeType_GivenName, sizeof(sOID_AttributeType_GivenName) },
        { kOID_AttributeType_Initials, sOID_AttributeType_Initials, sizeof(sOID_AttributeType_Initials) },
        { kOID_AttributeType_GenerationQualifier, sOID_AttributeType_GenerationQualifier, sizeof(sOID_AttributeType_GenerationQualifier) },
        { kOID_AttributeType_DNQualifier, sOID_AttributeType_DNQualifier, sizeof(sOID_AttributeType_DNQualifier) },
        { kOID_AttributeType_Pseudonym, sOID_AttributeType_Pseudonym, sizeof(sOID_AttributeType_Pseudonym) },
        { kOID_AttributeType_DomainComponent, sOID_AttributeType_DomainComponent, sizeof(sOID_AttributeType_DomainComponent) },
        { kOID_AttributeType_MatterNodeId, sOID_AttributeType_MatterNodeId, sizeof(sOID_AttributeType_MatterNodeId) },
        { kOID_AttributeType_MatterFirmwareSigningId, sOID_AttributeType_MatterFirmwareSigningId, sizeof(sOID_AttributeType_MatterFirmwareSigningId) },
        { kOID_AttributeType_MatterICACId, sOID_AttributeType_MatterICACId, sizeof(sOID_AttributeType_MatterICACId) },
        { kOID_AttributeType_MatterRCACId, sOID_AttributeType_MatterRCACId, sizeof(sOID_AttributeType_MatterRCACId) },
        { kOID_AttributeType_MatterFabricId, sOID_AttributeType_MatterFabricId, sizeof(sOID_AttributeType_MatterFabricId) },
        { kOID_AttributeType_MatterCASEAuthTag, sOID_AttributeType_MatterCASEAuthTag, sizeof(sOID_AttributeType_MatterCASEAuthTag) },
        { kOID_EllipticCurve_prime256v1, sOID_EllipticCurve_prime256v1, sizeof(sOID_EllipticCurve_prime256v1) },
        { kOID_Extension_BasicConstraints, sOID_Extension_BasicConstraints, sizeof(sOID_Extension_BasicConstraints) },
        { kOID_Extension_KeyUsage, sOID_Extension_KeyUsage, sizeof(sOID_Extension_KeyUsage) },
        { kOID_Extension_ExtendedKeyUsage, sOID_Extension_ExtendedKeyUsage, sizeof(sOID_Extension_ExtendedKeyUsage) },
        { kOID_Extension_SubjectKeyIdentifier, sOID_Extension_SubjectKeyIdentifier, sizeof(sOID_Extension_SubjectKeyIdentifier) },
        { kOID_Extension_AuthorityKeyIdentifier, sOID_Extension_AuthorityKeyIdentifier, sizeof(sOID_Extension_AuthorityKeyIdentifier) },
        { kOID_Extension_CSRRequest, sOID_Extension_CSRRequest, sizeof(sOID_Extension_CSRRequest) },
        { kOID_KeyPurpose_ServerAuth, sOID_KeyPurpose_ServerAuth, sizeof(sOID_KeyPurpose_ServerAuth) },
        { kOID_KeyPurpose_ClientAuth, sOID_KeyPurpose_ClientAuth, sizeof(sOID_KeyPurpose_ClientAuth) },
        { kOID_KeyPurpose_CodeSigning, sOID_KeyPurpose_CodeSigning, sizeof(sOID_KeyPurpose_CodeSigning) },
        { kOID_KeyPurpose_EmailProtection, sOID_KeyPurpose_EmailProtection, sizeof(sOID_KeyPurpose_EmailProtection) },
        { kOID_KeyPurpose_TimeStamping, sOID_KeyPurpose_TimeStamping, sizeof(sOID_KeyPurpose_TimeStamping) },
        { kOID_KeyPurpose_OCSPSigning, sOID_KeyPurpose_OCSPSigning, sizeof(sOID_KeyPurpose_OCSPSigning) },
        { kOID_NotSpecified, NULL, 0 }
    };
    
    const size_t sOIDTableSize = sizeof(sOIDTable) / sizeof(OIDTableEntry);
    
    #endif // ASN1_DEFINE_OID_TABLE
    
    #ifdef ASN1_DEFINE_OID_NAME_TABLE
    
    const OIDNameTableEntry sOIDNameTable[] =
    {
        { kOID_PubKeyAlgo_ECPublicKey, "ECPublicKey" },
        { kOID_SigAlgo_ECDSAWithSHA256, "ECDSAWithSHA256" },
        { kOID_AttributeType_CommonName, "CommonName" },
        { kOID_AttributeType_Surname, "Surname" },
        { kOID_AttributeType_SerialNumber, "SerialNumber" },
        { kOID_AttributeType_CountryName, "CountryName" },
        { kOID_AttributeType_LocalityName, "LocalityName" },
        { kOID_AttributeType_StateOrProvinceName, "StateOrProvinceName" },
        { kOID_AttributeType_OrganizationName, "OrganizationName" },
        { kOID_AttributeType_OrganizationalUnitName, "OrganizationalUnitName" },
        { kOID_AttributeType_Title, "Title" },
        { kOID_AttributeType_Name, "Name" },
        { kOID_AttributeType_GivenName, "GivenName" },
        { kOID_AttributeType_Initials, "Initials" },
        { kOID_AttributeType_GenerationQualifier, "GenerationQualifier" },
        { kOID_AttributeType_DNQualifier, "DNQualifier" },
        { kOID_AttributeType_Pseudonym, "Pseudonym" },
        { kOID_AttributeType_DomainComponent, "DomainComponent" },
        { kOID_AttributeType_MatterNodeId, "MatterNodeId" },
        { kOID_AttributeType_MatterFirmwareSigningId, "MatterFirmwareSigningId" },
        { kOID_AttributeType_MatterICACId, "MatterICACId" },
        { kOID_AttributeType_MatterRCACId, "MatterRCACId" },
        { kOID_AttributeType_MatterFabricId, "MatterFabricId" },
        { kOID_AttributeType_MatterCASEAuthTag, "MatterCASEAuthTag" },
        { kOID_EllipticCurve_prime256v1, "prime256v1" },
        { kOID_Extension_BasicConstraints, "BasicConstraints" },
        { kOID_Extension_KeyUsage, "KeyUsage" },
        { kOID_Extension_ExtendedKeyUsage, "ExtendedKeyUsage" },
        { kOID_Extension_SubjectKeyIdentifier, "SubjectKeyIdentifier" },
        { kOID_Extension_AuthorityKeyIdentifier, "AuthorityKeyIdentifier" },
        { kOID_Extension_CSRRequest, "CSRRequest" },
        { kOID_KeyPurpose_ServerAuth, "ServerAuth" },
        { kOID_KeyPurpose_ClientAuth, "ClientAuth" },
        { kOID_KeyPurpose_CodeSigning, "CodeSigning" },
        { kOID_KeyPurpose_EmailProtection, "EmailProtection" },
        { kOID_KeyPurpose_TimeStamping, "TimeStamping" },
        { kOID_KeyPurpose_OCSPSigning, "OCSPSigning" },
        { kOID_NotSpecified, NULL }
    };
    
    #endif // ASN1_DEFINE_OID_NAME_TABLE
    
    } // namespace ASN1
    } // namespace chip
