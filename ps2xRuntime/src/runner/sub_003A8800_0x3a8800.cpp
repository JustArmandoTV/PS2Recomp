#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A8800
// Address: 0x3a8800 - 0x3a8a90
void sub_003A8800_0x3a8800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8800_0x3a8800");
#endif

    switch (ctx->pc) {
        case 0x3a8800u: goto label_3a8800;
        case 0x3a8804u: goto label_3a8804;
        case 0x3a8808u: goto label_3a8808;
        case 0x3a880cu: goto label_3a880c;
        case 0x3a8810u: goto label_3a8810;
        case 0x3a8814u: goto label_3a8814;
        case 0x3a8818u: goto label_3a8818;
        case 0x3a881cu: goto label_3a881c;
        case 0x3a8820u: goto label_3a8820;
        case 0x3a8824u: goto label_3a8824;
        case 0x3a8828u: goto label_3a8828;
        case 0x3a882cu: goto label_3a882c;
        case 0x3a8830u: goto label_3a8830;
        case 0x3a8834u: goto label_3a8834;
        case 0x3a8838u: goto label_3a8838;
        case 0x3a883cu: goto label_3a883c;
        case 0x3a8840u: goto label_3a8840;
        case 0x3a8844u: goto label_3a8844;
        case 0x3a8848u: goto label_3a8848;
        case 0x3a884cu: goto label_3a884c;
        case 0x3a8850u: goto label_3a8850;
        case 0x3a8854u: goto label_3a8854;
        case 0x3a8858u: goto label_3a8858;
        case 0x3a885cu: goto label_3a885c;
        case 0x3a8860u: goto label_3a8860;
        case 0x3a8864u: goto label_3a8864;
        case 0x3a8868u: goto label_3a8868;
        case 0x3a886cu: goto label_3a886c;
        case 0x3a8870u: goto label_3a8870;
        case 0x3a8874u: goto label_3a8874;
        case 0x3a8878u: goto label_3a8878;
        case 0x3a887cu: goto label_3a887c;
        case 0x3a8880u: goto label_3a8880;
        case 0x3a8884u: goto label_3a8884;
        case 0x3a8888u: goto label_3a8888;
        case 0x3a888cu: goto label_3a888c;
        case 0x3a8890u: goto label_3a8890;
        case 0x3a8894u: goto label_3a8894;
        case 0x3a8898u: goto label_3a8898;
        case 0x3a889cu: goto label_3a889c;
        case 0x3a88a0u: goto label_3a88a0;
        case 0x3a88a4u: goto label_3a88a4;
        case 0x3a88a8u: goto label_3a88a8;
        case 0x3a88acu: goto label_3a88ac;
        case 0x3a88b0u: goto label_3a88b0;
        case 0x3a88b4u: goto label_3a88b4;
        case 0x3a88b8u: goto label_3a88b8;
        case 0x3a88bcu: goto label_3a88bc;
        case 0x3a88c0u: goto label_3a88c0;
        case 0x3a88c4u: goto label_3a88c4;
        case 0x3a88c8u: goto label_3a88c8;
        case 0x3a88ccu: goto label_3a88cc;
        case 0x3a88d0u: goto label_3a88d0;
        case 0x3a88d4u: goto label_3a88d4;
        case 0x3a88d8u: goto label_3a88d8;
        case 0x3a88dcu: goto label_3a88dc;
        case 0x3a88e0u: goto label_3a88e0;
        case 0x3a88e4u: goto label_3a88e4;
        case 0x3a88e8u: goto label_3a88e8;
        case 0x3a88ecu: goto label_3a88ec;
        case 0x3a88f0u: goto label_3a88f0;
        case 0x3a88f4u: goto label_3a88f4;
        case 0x3a88f8u: goto label_3a88f8;
        case 0x3a88fcu: goto label_3a88fc;
        case 0x3a8900u: goto label_3a8900;
        case 0x3a8904u: goto label_3a8904;
        case 0x3a8908u: goto label_3a8908;
        case 0x3a890cu: goto label_3a890c;
        case 0x3a8910u: goto label_3a8910;
        case 0x3a8914u: goto label_3a8914;
        case 0x3a8918u: goto label_3a8918;
        case 0x3a891cu: goto label_3a891c;
        case 0x3a8920u: goto label_3a8920;
        case 0x3a8924u: goto label_3a8924;
        case 0x3a8928u: goto label_3a8928;
        case 0x3a892cu: goto label_3a892c;
        case 0x3a8930u: goto label_3a8930;
        case 0x3a8934u: goto label_3a8934;
        case 0x3a8938u: goto label_3a8938;
        case 0x3a893cu: goto label_3a893c;
        case 0x3a8940u: goto label_3a8940;
        case 0x3a8944u: goto label_3a8944;
        case 0x3a8948u: goto label_3a8948;
        case 0x3a894cu: goto label_3a894c;
        case 0x3a8950u: goto label_3a8950;
        case 0x3a8954u: goto label_3a8954;
        case 0x3a8958u: goto label_3a8958;
        case 0x3a895cu: goto label_3a895c;
        case 0x3a8960u: goto label_3a8960;
        case 0x3a8964u: goto label_3a8964;
        case 0x3a8968u: goto label_3a8968;
        case 0x3a896cu: goto label_3a896c;
        case 0x3a8970u: goto label_3a8970;
        case 0x3a8974u: goto label_3a8974;
        case 0x3a8978u: goto label_3a8978;
        case 0x3a897cu: goto label_3a897c;
        case 0x3a8980u: goto label_3a8980;
        case 0x3a8984u: goto label_3a8984;
        case 0x3a8988u: goto label_3a8988;
        case 0x3a898cu: goto label_3a898c;
        case 0x3a8990u: goto label_3a8990;
        case 0x3a8994u: goto label_3a8994;
        case 0x3a8998u: goto label_3a8998;
        case 0x3a899cu: goto label_3a899c;
        case 0x3a89a0u: goto label_3a89a0;
        case 0x3a89a4u: goto label_3a89a4;
        case 0x3a89a8u: goto label_3a89a8;
        case 0x3a89acu: goto label_3a89ac;
        case 0x3a89b0u: goto label_3a89b0;
        case 0x3a89b4u: goto label_3a89b4;
        case 0x3a89b8u: goto label_3a89b8;
        case 0x3a89bcu: goto label_3a89bc;
        case 0x3a89c0u: goto label_3a89c0;
        case 0x3a89c4u: goto label_3a89c4;
        case 0x3a89c8u: goto label_3a89c8;
        case 0x3a89ccu: goto label_3a89cc;
        case 0x3a89d0u: goto label_3a89d0;
        case 0x3a89d4u: goto label_3a89d4;
        case 0x3a89d8u: goto label_3a89d8;
        case 0x3a89dcu: goto label_3a89dc;
        case 0x3a89e0u: goto label_3a89e0;
        case 0x3a89e4u: goto label_3a89e4;
        case 0x3a89e8u: goto label_3a89e8;
        case 0x3a89ecu: goto label_3a89ec;
        case 0x3a89f0u: goto label_3a89f0;
        case 0x3a89f4u: goto label_3a89f4;
        case 0x3a89f8u: goto label_3a89f8;
        case 0x3a89fcu: goto label_3a89fc;
        case 0x3a8a00u: goto label_3a8a00;
        case 0x3a8a04u: goto label_3a8a04;
        case 0x3a8a08u: goto label_3a8a08;
        case 0x3a8a0cu: goto label_3a8a0c;
        case 0x3a8a10u: goto label_3a8a10;
        case 0x3a8a14u: goto label_3a8a14;
        case 0x3a8a18u: goto label_3a8a18;
        case 0x3a8a1cu: goto label_3a8a1c;
        case 0x3a8a20u: goto label_3a8a20;
        case 0x3a8a24u: goto label_3a8a24;
        case 0x3a8a28u: goto label_3a8a28;
        case 0x3a8a2cu: goto label_3a8a2c;
        case 0x3a8a30u: goto label_3a8a30;
        case 0x3a8a34u: goto label_3a8a34;
        case 0x3a8a38u: goto label_3a8a38;
        case 0x3a8a3cu: goto label_3a8a3c;
        case 0x3a8a40u: goto label_3a8a40;
        case 0x3a8a44u: goto label_3a8a44;
        case 0x3a8a48u: goto label_3a8a48;
        case 0x3a8a4cu: goto label_3a8a4c;
        case 0x3a8a50u: goto label_3a8a50;
        case 0x3a8a54u: goto label_3a8a54;
        case 0x3a8a58u: goto label_3a8a58;
        case 0x3a8a5cu: goto label_3a8a5c;
        case 0x3a8a60u: goto label_3a8a60;
        case 0x3a8a64u: goto label_3a8a64;
        case 0x3a8a68u: goto label_3a8a68;
        case 0x3a8a6cu: goto label_3a8a6c;
        case 0x3a8a70u: goto label_3a8a70;
        case 0x3a8a74u: goto label_3a8a74;
        case 0x3a8a78u: goto label_3a8a78;
        case 0x3a8a7cu: goto label_3a8a7c;
        case 0x3a8a80u: goto label_3a8a80;
        case 0x3a8a84u: goto label_3a8a84;
        case 0x3a8a88u: goto label_3a8a88;
        case 0x3a8a8cu: goto label_3a8a8c;
        default: break;
    }

    ctx->pc = 0x3a8800u;

label_3a8800:
    // 0x3a8800: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a8800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3a8804:
    // 0x3a8804: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3a8804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3a8808:
    // 0x3a8808: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a8808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3a880c:
    // 0x3a880c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3a880cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a8810:
    // 0x3a8810: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a8810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3a8814:
    // 0x3a8814: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3a8814u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3a8818:
    // 0x3a8818: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a8818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a881c:
    // 0x3a881c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a881cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8820:
    // 0x3a8820: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a8820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a8824:
    // 0x3a8824: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3a8824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3a8828:
    // 0x3a8828: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a8828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a882c:
    // 0x3a882c: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x3a882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_3a8830:
    // 0x3a8830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a8830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a8834:
    // 0x3a8834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a8838:
    // 0x3a8838: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3a8838u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3a883c:
    // 0x3a883c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x3a883cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3a8840:
    // 0x3a8840: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3a8840u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a8844:
    // 0x3a8844: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3a8844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3a8848:
    // 0x3a8848: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3a8848u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a884c:
    // 0x3a884c: 0x24700038  addiu       $s0, $v1, 0x38
    ctx->pc = 0x3a884cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_3a8850:
    // 0x3a8850: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a8850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a8854:
    // 0x3a8854: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3a8854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a8858:
    // 0x3a8858: 0x90c311a1  lbu         $v1, 0x11A1($a2)
    ctx->pc = 0x3a8858u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4513)));
label_3a885c:
    // 0x3a885c: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_3a8860:
    if (ctx->pc == 0x3A8860u) {
        ctx->pc = 0x3A8860u;
            // 0x3a8860: 0x26910008  addiu       $s1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x3A8864u;
        goto label_3a8864;
    }
    ctx->pc = 0x3A885Cu;
    {
        const bool branch_taken_0x3a885c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A885Cu;
            // 0x3a8860: 0x26910008  addiu       $s1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a885c) {
            ctx->pc = 0x3A8A54u;
            goto label_3a8a54;
        }
    }
    ctx->pc = 0x3A8864u;
label_3a8864:
    // 0x3a8864: 0x8cc30da0  lw          $v1, 0xDA0($a2)
    ctx->pc = 0x3a8864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3488)));
label_3a8868:
    // 0x3a8868: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3a8868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3a886c:
    // 0x3a886c: 0x5460007a  bnel        $v1, $zero, . + 4 + (0x7A << 2)
label_3a8870:
    if (ctx->pc == 0x3A8870u) {
        ctx->pc = 0x3A8870u;
            // 0x3a8870: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3A8874u;
        goto label_3a8874;
    }
    ctx->pc = 0x3A886Cu;
    {
        const bool branch_taken_0x3a886c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a886c) {
            ctx->pc = 0x3A8870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A886Cu;
            // 0x3a8870: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A8A58u;
            goto label_3a8a58;
        }
    }
    ctx->pc = 0x3A8874u;
label_3a8874:
    // 0x3a8874: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3a8874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a8878:
    // 0x3a8878: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3a8878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3a887c:
    // 0x3a887c: 0x906300e4  lbu         $v1, 0xE4($v1)
    ctx->pc = 0x3a887cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3a8880:
    // 0x3a8880: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3a8880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3a8884:
    // 0x3a8884: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a8884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3a8888:
    // 0x3a8888: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
label_3a888c:
    if (ctx->pc == 0x3A888Cu) {
        ctx->pc = 0x3A8890u;
        goto label_3a8890;
    }
    ctx->pc = 0x3A8888u;
    {
        const bool branch_taken_0x3a8888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8888) {
            ctx->pc = 0x3A8A54u;
            goto label_3a8a54;
        }
    }
    ctx->pc = 0x3A8890u;
label_3a8890:
    // 0x3a8890: 0xc4d70a7c  lwc1        $f23, 0xA7C($a2)
    ctx->pc = 0x3a8890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3a8894:
    // 0x3a8894: 0xc4d60a84  lwc1        $f22, 0xA84($a2)
    ctx->pc = 0x3a8894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a8898:
    // 0x3a8898: 0xc6140024  lwc1        $f20, 0x24($s0)
    ctx->pc = 0x3a8898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a889c:
    // 0x3a889c: 0xc0754b4  jal         func_1D52D0
label_3a88a0:
    if (ctx->pc == 0x3A88A0u) {
        ctx->pc = 0x3A88A0u;
            // 0x3a88a0: 0x24c40440  addiu       $a0, $a2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
        ctx->pc = 0x3A88A4u;
        goto label_3a88a4;
    }
    ctx->pc = 0x3A889Cu;
    SET_GPR_U32(ctx, 31, 0x3A88A4u);
    ctx->pc = 0x3A88A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A889Cu;
            // 0x3a88a0: 0x24c40440  addiu       $a0, $a2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A88A4u; }
        if (ctx->pc != 0x3A88A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A88A4u; }
        if (ctx->pc != 0x3A88A4u) { return; }
    }
    ctx->pc = 0x3A88A4u;
label_3a88a4:
    // 0x3a88a4: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x3a88a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a88a8:
    // 0x3a88a8: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x3a88a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a88ac:
    // 0x3a88ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a88acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a88b0:
    // 0x3a88b0: 0x0  nop
    ctx->pc = 0x3a88b0u;
    // NOP
label_3a88b4:
    // 0x3a88b4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3a88b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a88b8:
    // 0x3a88b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3a88bc:
    if (ctx->pc == 0x3A88BCu) {
        ctx->pc = 0x3A88BCu;
            // 0x3a88bc: 0x46011541  sub.s       $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x3A88C0u;
        goto label_3a88c0;
    }
    ctx->pc = 0x3A88B8u;
    {
        const bool branch_taken_0x3a88b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A88BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A88B8u;
            // 0x3a88bc: 0x46011541  sub.s       $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a88b8) {
            ctx->pc = 0x3A88D0u;
            goto label_3a88d0;
        }
    }
    ctx->pc = 0x3A88C0u;
label_3a88c0:
    // 0x3a88c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a88c4:
    // 0x3a88c4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3a88c4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3a88c8:
    // 0x3a88c8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3a88c8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3a88cc:
    // 0x3a88cc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3a88ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a88d0:
    // 0x3a88d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a88d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a88d4:
    // 0x3a88d4: 0x0  nop
    ctx->pc = 0x3a88d4u;
    // NOP
label_3a88d8:
    // 0x3a88d8: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x3a88d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a88dc:
    // 0x3a88dc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3a88e0:
    if (ctx->pc == 0x3A88E0u) {
        ctx->pc = 0x3A88E0u;
            // 0x3a88e0: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->pc = 0x3A88E4u;
        goto label_3a88e4;
    }
    ctx->pc = 0x3A88DCu;
    {
        const bool branch_taken_0x3a88dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a88dc) {
            ctx->pc = 0x3A88E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A88DCu;
            // 0x3a88e0: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A88F0u;
            goto label_3a88f0;
        }
    }
    ctx->pc = 0x3A88E4u;
label_3a88e4:
    // 0x3a88e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3a88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3a88e8:
    // 0x3a88e8: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x3a88e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3a88ec:
    // 0x3a88ec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3a88ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3a88f0:
    // 0x3a88f0: 0x86130008  lh          $s3, 0x8($s0)
    ctx->pc = 0x3a88f0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_3a88f4:
    // 0x3a88f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a88f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a88f8:
    // 0x3a88f8: 0x8612000a  lh          $s2, 0xA($s0)
    ctx->pc = 0x3a88f8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_3a88fc:
    // 0x3a88fc: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x3a88fcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
label_3a8900:
    // 0x3a8900: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x3a8900u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
label_3a8904:
    // 0x3a8904: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x3a8904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8908:
    // 0x3a8908: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x3a8908u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a890c:
    // 0x3a890c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3a8910:
    if (ctx->pc == 0x3A8910u) {
        ctx->pc = 0x3A8910u;
            // 0x3a8910: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A8914u;
        goto label_3a8914;
    }
    ctx->pc = 0x3A890Cu;
    {
        const bool branch_taken_0x3a890c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A890Cu;
            // 0x3a8910: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a890c) {
            ctx->pc = 0x3A893Cu;
            goto label_3a893c;
        }
    }
    ctx->pc = 0x3A8914u;
label_3a8914:
    // 0x3a8914: 0xc05068c  jal         func_141A30
label_3a8918:
    if (ctx->pc == 0x3A8918u) {
        ctx->pc = 0x3A8918u;
            // 0x3a8918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A891Cu;
        goto label_3a891c;
    }
    ctx->pc = 0x3A8914u;
    SET_GPR_U32(ctx, 31, 0x3A891Cu);
    ctx->pc = 0x3A8918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8914u;
            // 0x3a8918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A891Cu; }
        if (ctx->pc != 0x3A891Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A891Cu; }
        if (ctx->pc != 0x3A891Cu) { return; }
    }
    ctx->pc = 0x3A891Cu;
label_3a891c:
    // 0x3a891c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a891cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a8920:
    // 0x3a8920: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3a8920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a8924:
    // 0x3a8924: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a8924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a8928:
    // 0x3a8928: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a8928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a892c:
    // 0x3a892c: 0x320f809  jalr        $t9
label_3a8930:
    if (ctx->pc == 0x3A8930u) {
        ctx->pc = 0x3A8930u;
            // 0x3a8930: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A8934u;
        goto label_3a8934;
    }
    ctx->pc = 0x3A892Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A8934u);
        ctx->pc = 0x3A8930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A892Cu;
            // 0x3a8930: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A8934u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A8934u; }
            if (ctx->pc != 0x3A8934u) { return; }
        }
        }
    }
    ctx->pc = 0x3A8934u;
label_3a8934:
    // 0x3a8934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a8938:
    // 0x3a8938: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x3a8938u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
label_3a893c:
    // 0x3a893c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a8940:
    // 0x3a8940: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a8940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a8944:
    // 0x3a8944: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a8944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a8948:
    // 0x3a8948: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a8948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a894c:
    // 0x3a894c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a894cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a8950:
    // 0x3a8950: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a8950u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3a8954:
    // 0x3a8954: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3a8954u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_3a8958:
    // 0x3a8958: 0xc0eaa84  jal         func_3AAA10
label_3a895c:
    if (ctx->pc == 0x3A895Cu) {
        ctx->pc = 0x3A895Cu;
            // 0x3a895c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3A8960u;
        goto label_3a8960;
    }
    ctx->pc = 0x3A8958u;
    SET_GPR_U32(ctx, 31, 0x3A8960u);
    ctx->pc = 0x3A895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8958u;
            // 0x3a895c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AAA10u;
    if (runtime->hasFunction(0x3AAA10u)) {
        auto targetFn = runtime->lookupFunction(0x3AAA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8960u; }
        if (ctx->pc != 0x3A8960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AAA10_0x3aaa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8960u; }
        if (ctx->pc != 0x3A8960u) { return; }
    }
    ctx->pc = 0x3A8960u;
label_3a8960:
    // 0x3a8960: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3a8960u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8964:
    // 0x3a8964: 0x8e880034  lw          $t0, 0x34($s4)
    ctx->pc = 0x3a8964u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_3a8968:
    // 0x3a8968: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x3a8968u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a896c:
    // 0x3a896c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3a896cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a8970:
    // 0x3a8970: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3a8970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a8974:
    // 0x3a8974: 0x92840029  lbu         $a0, 0x29($s4)
    ctx->pc = 0x3a8974u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 41)));
label_3a8978:
    // 0x3a8978: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3a8978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_3a897c:
    // 0x3a897c: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x3a897cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_3a8980:
    // 0x3a8980: 0x85020020  lh          $v0, 0x20($t0)
    ctx->pc = 0x3a8980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
label_3a8984:
    // 0x3a8984: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x3a8984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
label_3a8988:
    // 0x3a8988: 0x92090010  lbu         $t1, 0x10($s0)
    ctx->pc = 0x3a8988u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_3a898c:
    // 0x3a898c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3a898cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3a8990:
    // 0x3a8990: 0x90a60116  lbu         $a2, 0x116($a1)
    ctx->pc = 0x3a8990u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 278)));
label_3a8994:
    // 0x3a8994: 0x24e72100  addiu       $a3, $a3, 0x2100
    ctx->pc = 0x3a8994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8448));
label_3a8998:
    // 0x3a8998: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3a8998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3a899c:
    // 0x3a899c: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x3a899cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3a89a0:
    // 0x3a89a0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3a89a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a89a4:
    // 0x3a89a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a89a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a89a8:
    // 0x3a89a8: 0x0  nop
    ctx->pc = 0x3a89a8u;
    // NOP
label_3a89ac:
    // 0x3a89ac: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3a89acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_3a89b0:
    // 0x3a89b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a89b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a89b4:
    // 0x3a89b4: 0x0  nop
    ctx->pc = 0x3a89b4u;
    // NOP
label_3a89b8:
    // 0x3a89b8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3a89b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3a89bc:
    // 0x3a89bc: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x3a89bcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a89c0:
    // 0x3a89c0: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x3a89c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a89c4:
    // 0x3a89c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a89c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a89c8:
    // 0x3a89c8: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3a89c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a89cc:
    // 0x3a89cc: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x3a89ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3a89d0:
    // 0x3a89d0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a89d4:
    if (ctx->pc == 0x3A89D4u) {
        ctx->pc = 0x3A89D4u;
            // 0x3a89d4: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A89D8u;
        goto label_3a89d8;
    }
    ctx->pc = 0x3A89D0u;
    {
        const bool branch_taken_0x3a89d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A89D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A89D0u;
            // 0x3a89d4: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89d0) {
            ctx->pc = 0x3A89DCu;
            goto label_3a89dc;
        }
    }
    ctx->pc = 0x3A89D8u;
label_3a89d8:
    // 0x3a89d8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3a89d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a89dc:
    // 0x3a89dc: 0x312400ff  andi        $a0, $t1, 0xFF
    ctx->pc = 0x3a89dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_3a89e0:
    // 0x3a89e0: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3a89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3a89e4:
    // 0x3a89e4: 0x84e90000  lh          $t1, 0x0($a3)
    ctx->pc = 0x3a89e4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_3a89e8:
    // 0x3a89e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a89e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a89ec:
    // 0x3a89ec: 0x84e80002  lh          $t0, 0x2($a3)
    ctx->pc = 0x3a89ecu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_3a89f0:
    // 0x3a89f0: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3a89f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a89f4:
    // 0x3a89f4: 0x46051301  sub.s       $f12, $f2, $f5
    ctx->pc = 0x3a89f4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_3a89f8:
    // 0x3a89f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a89f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a89fc:
    // 0x3a89fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a89fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8a00:
    // 0x3a8a00: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a8a00u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8a04:
    // 0x3a8a04: 0x0  nop
    ctx->pc = 0x3a8a04u;
    // NOP
label_3a8a08:
    // 0x3a8a08: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a8a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a8a0c:
    // 0x3a8a0c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a8a0cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8a10:
    // 0x3a8a10: 0x0  nop
    ctx->pc = 0x3a8a10u;
    // NOP
label_3a8a14:
    // 0x3a8a14: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a8a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a8a18:
    // 0x3a8a18: 0x46051380  add.s       $f14, $f2, $f5
    ctx->pc = 0x3a8a18u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_3a8a1c:
    // 0x3a8a1c: 0x46050b41  sub.s       $f13, $f1, $f5
    ctx->pc = 0x3a8a1cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_3a8a20:
    // 0x3a8a20: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a8a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a8a24:
    // 0x3a8a24: 0xc0bc284  jal         func_2F0A10
label_3a8a28:
    if (ctx->pc == 0x3A8A28u) {
        ctx->pc = 0x3A8A28u;
            // 0x3a8a28: 0x46050bc0  add.s       $f15, $f1, $f5 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->pc = 0x3A8A2Cu;
        goto label_3a8a2c;
    }
    ctx->pc = 0x3A8A24u;
    SET_GPR_U32(ctx, 31, 0x3A8A2Cu);
    ctx->pc = 0x3A8A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8A24u;
            // 0x3a8a28: 0x46050bc0  add.s       $f15, $f1, $f5 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8A2Cu; }
        if (ctx->pc != 0x3A8A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8A2Cu; }
        if (ctx->pc != 0x3A8A2Cu) { return; }
    }
    ctx->pc = 0x3A8A2Cu;
label_3a8a2c:
    // 0x3a8a2c: 0x92080010  lbu         $t0, 0x10($s0)
    ctx->pc = 0x3a8a2cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_3a8a30:
    // 0x3a8a30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a8a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a8a34:
    // 0x3a8a34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a8a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a8a38:
    // 0x3a8a38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a8a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a8a3c:
    // 0x3a8a3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3a8a3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a8a40:
    // 0x3a8a40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a8a40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a8a44:
    // 0x3a8a44: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a8a44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3a8a48:
    // 0x3a8a48: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3a8a48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_3a8a4c:
    // 0x3a8a4c: 0xc0ea9f0  jal         func_3AA7C0
label_3a8a50:
    if (ctx->pc == 0x3A8A50u) {
        ctx->pc = 0x3A8A50u;
            // 0x3a8a50: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3A8A54u;
        goto label_3a8a54;
    }
    ctx->pc = 0x3A8A4Cu;
    SET_GPR_U32(ctx, 31, 0x3A8A54u);
    ctx->pc = 0x3A8A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8A4Cu;
            // 0x3a8a50: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AA7C0u;
    if (runtime->hasFunction(0x3AA7C0u)) {
        auto targetFn = runtime->lookupFunction(0x3AA7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8A54u; }
        if (ctx->pc != 0x3A8A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AA7C0_0x3aa7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A8A54u; }
        if (ctx->pc != 0x3A8A54u) { return; }
    }
    ctx->pc = 0x3A8A54u;
label_3a8a54:
    // 0x3a8a54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a8a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3a8a58:
    // 0x3a8a58: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3a8a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3a8a5c:
    // 0x3a8a5c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a8a5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a8a60:
    // 0x3a8a60: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3a8a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a8a64:
    // 0x3a8a64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a8a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a8a68:
    // 0x3a8a68: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3a8a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a8a6c:
    // 0x3a8a6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a8a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a8a70:
    // 0x3a8a70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a8a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a8a74:
    // 0x3a8a74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a8a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a8a78:
    // 0x3a8a78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a8a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a8a7c:
    // 0x3a8a7c: 0x3e00008  jr          $ra
label_3a8a80:
    if (ctx->pc == 0x3A8A80u) {
        ctx->pc = 0x3A8A80u;
            // 0x3a8a80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3A8A84u;
        goto label_3a8a84;
    }
    ctx->pc = 0x3A8A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A8A7Cu;
            // 0x3a8a80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A8A84u;
label_3a8a84:
    // 0x3a8a84: 0x0  nop
    ctx->pc = 0x3a8a84u;
    // NOP
label_3a8a88:
    // 0x3a8a88: 0x0  nop
    ctx->pc = 0x3a8a88u;
    // NOP
label_3a8a8c:
    // 0x3a8a8c: 0x0  nop
    ctx->pc = 0x3a8a8cu;
    // NOP
}
