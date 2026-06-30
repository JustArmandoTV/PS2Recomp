#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039BDE0
// Address: 0x39bde0 - 0x39c2b0
void sub_0039BDE0_0x39bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BDE0_0x39bde0");
#endif

    switch (ctx->pc) {
        case 0x39bde0u: goto label_39bde0;
        case 0x39bde4u: goto label_39bde4;
        case 0x39bde8u: goto label_39bde8;
        case 0x39bdecu: goto label_39bdec;
        case 0x39bdf0u: goto label_39bdf0;
        case 0x39bdf4u: goto label_39bdf4;
        case 0x39bdf8u: goto label_39bdf8;
        case 0x39bdfcu: goto label_39bdfc;
        case 0x39be00u: goto label_39be00;
        case 0x39be04u: goto label_39be04;
        case 0x39be08u: goto label_39be08;
        case 0x39be0cu: goto label_39be0c;
        case 0x39be10u: goto label_39be10;
        case 0x39be14u: goto label_39be14;
        case 0x39be18u: goto label_39be18;
        case 0x39be1cu: goto label_39be1c;
        case 0x39be20u: goto label_39be20;
        case 0x39be24u: goto label_39be24;
        case 0x39be28u: goto label_39be28;
        case 0x39be2cu: goto label_39be2c;
        case 0x39be30u: goto label_39be30;
        case 0x39be34u: goto label_39be34;
        case 0x39be38u: goto label_39be38;
        case 0x39be3cu: goto label_39be3c;
        case 0x39be40u: goto label_39be40;
        case 0x39be44u: goto label_39be44;
        case 0x39be48u: goto label_39be48;
        case 0x39be4cu: goto label_39be4c;
        case 0x39be50u: goto label_39be50;
        case 0x39be54u: goto label_39be54;
        case 0x39be58u: goto label_39be58;
        case 0x39be5cu: goto label_39be5c;
        case 0x39be60u: goto label_39be60;
        case 0x39be64u: goto label_39be64;
        case 0x39be68u: goto label_39be68;
        case 0x39be6cu: goto label_39be6c;
        case 0x39be70u: goto label_39be70;
        case 0x39be74u: goto label_39be74;
        case 0x39be78u: goto label_39be78;
        case 0x39be7cu: goto label_39be7c;
        case 0x39be80u: goto label_39be80;
        case 0x39be84u: goto label_39be84;
        case 0x39be88u: goto label_39be88;
        case 0x39be8cu: goto label_39be8c;
        case 0x39be90u: goto label_39be90;
        case 0x39be94u: goto label_39be94;
        case 0x39be98u: goto label_39be98;
        case 0x39be9cu: goto label_39be9c;
        case 0x39bea0u: goto label_39bea0;
        case 0x39bea4u: goto label_39bea4;
        case 0x39bea8u: goto label_39bea8;
        case 0x39beacu: goto label_39beac;
        case 0x39beb0u: goto label_39beb0;
        case 0x39beb4u: goto label_39beb4;
        case 0x39beb8u: goto label_39beb8;
        case 0x39bebcu: goto label_39bebc;
        case 0x39bec0u: goto label_39bec0;
        case 0x39bec4u: goto label_39bec4;
        case 0x39bec8u: goto label_39bec8;
        case 0x39beccu: goto label_39becc;
        case 0x39bed0u: goto label_39bed0;
        case 0x39bed4u: goto label_39bed4;
        case 0x39bed8u: goto label_39bed8;
        case 0x39bedcu: goto label_39bedc;
        case 0x39bee0u: goto label_39bee0;
        case 0x39bee4u: goto label_39bee4;
        case 0x39bee8u: goto label_39bee8;
        case 0x39beecu: goto label_39beec;
        case 0x39bef0u: goto label_39bef0;
        case 0x39bef4u: goto label_39bef4;
        case 0x39bef8u: goto label_39bef8;
        case 0x39befcu: goto label_39befc;
        case 0x39bf00u: goto label_39bf00;
        case 0x39bf04u: goto label_39bf04;
        case 0x39bf08u: goto label_39bf08;
        case 0x39bf0cu: goto label_39bf0c;
        case 0x39bf10u: goto label_39bf10;
        case 0x39bf14u: goto label_39bf14;
        case 0x39bf18u: goto label_39bf18;
        case 0x39bf1cu: goto label_39bf1c;
        case 0x39bf20u: goto label_39bf20;
        case 0x39bf24u: goto label_39bf24;
        case 0x39bf28u: goto label_39bf28;
        case 0x39bf2cu: goto label_39bf2c;
        case 0x39bf30u: goto label_39bf30;
        case 0x39bf34u: goto label_39bf34;
        case 0x39bf38u: goto label_39bf38;
        case 0x39bf3cu: goto label_39bf3c;
        case 0x39bf40u: goto label_39bf40;
        case 0x39bf44u: goto label_39bf44;
        case 0x39bf48u: goto label_39bf48;
        case 0x39bf4cu: goto label_39bf4c;
        case 0x39bf50u: goto label_39bf50;
        case 0x39bf54u: goto label_39bf54;
        case 0x39bf58u: goto label_39bf58;
        case 0x39bf5cu: goto label_39bf5c;
        case 0x39bf60u: goto label_39bf60;
        case 0x39bf64u: goto label_39bf64;
        case 0x39bf68u: goto label_39bf68;
        case 0x39bf6cu: goto label_39bf6c;
        case 0x39bf70u: goto label_39bf70;
        case 0x39bf74u: goto label_39bf74;
        case 0x39bf78u: goto label_39bf78;
        case 0x39bf7cu: goto label_39bf7c;
        case 0x39bf80u: goto label_39bf80;
        case 0x39bf84u: goto label_39bf84;
        case 0x39bf88u: goto label_39bf88;
        case 0x39bf8cu: goto label_39bf8c;
        case 0x39bf90u: goto label_39bf90;
        case 0x39bf94u: goto label_39bf94;
        case 0x39bf98u: goto label_39bf98;
        case 0x39bf9cu: goto label_39bf9c;
        case 0x39bfa0u: goto label_39bfa0;
        case 0x39bfa4u: goto label_39bfa4;
        case 0x39bfa8u: goto label_39bfa8;
        case 0x39bfacu: goto label_39bfac;
        case 0x39bfb0u: goto label_39bfb0;
        case 0x39bfb4u: goto label_39bfb4;
        case 0x39bfb8u: goto label_39bfb8;
        case 0x39bfbcu: goto label_39bfbc;
        case 0x39bfc0u: goto label_39bfc0;
        case 0x39bfc4u: goto label_39bfc4;
        case 0x39bfc8u: goto label_39bfc8;
        case 0x39bfccu: goto label_39bfcc;
        case 0x39bfd0u: goto label_39bfd0;
        case 0x39bfd4u: goto label_39bfd4;
        case 0x39bfd8u: goto label_39bfd8;
        case 0x39bfdcu: goto label_39bfdc;
        case 0x39bfe0u: goto label_39bfe0;
        case 0x39bfe4u: goto label_39bfe4;
        case 0x39bfe8u: goto label_39bfe8;
        case 0x39bfecu: goto label_39bfec;
        case 0x39bff0u: goto label_39bff0;
        case 0x39bff4u: goto label_39bff4;
        case 0x39bff8u: goto label_39bff8;
        case 0x39bffcu: goto label_39bffc;
        case 0x39c000u: goto label_39c000;
        case 0x39c004u: goto label_39c004;
        case 0x39c008u: goto label_39c008;
        case 0x39c00cu: goto label_39c00c;
        case 0x39c010u: goto label_39c010;
        case 0x39c014u: goto label_39c014;
        case 0x39c018u: goto label_39c018;
        case 0x39c01cu: goto label_39c01c;
        case 0x39c020u: goto label_39c020;
        case 0x39c024u: goto label_39c024;
        case 0x39c028u: goto label_39c028;
        case 0x39c02cu: goto label_39c02c;
        case 0x39c030u: goto label_39c030;
        case 0x39c034u: goto label_39c034;
        case 0x39c038u: goto label_39c038;
        case 0x39c03cu: goto label_39c03c;
        case 0x39c040u: goto label_39c040;
        case 0x39c044u: goto label_39c044;
        case 0x39c048u: goto label_39c048;
        case 0x39c04cu: goto label_39c04c;
        case 0x39c050u: goto label_39c050;
        case 0x39c054u: goto label_39c054;
        case 0x39c058u: goto label_39c058;
        case 0x39c05cu: goto label_39c05c;
        case 0x39c060u: goto label_39c060;
        case 0x39c064u: goto label_39c064;
        case 0x39c068u: goto label_39c068;
        case 0x39c06cu: goto label_39c06c;
        case 0x39c070u: goto label_39c070;
        case 0x39c074u: goto label_39c074;
        case 0x39c078u: goto label_39c078;
        case 0x39c07cu: goto label_39c07c;
        case 0x39c080u: goto label_39c080;
        case 0x39c084u: goto label_39c084;
        case 0x39c088u: goto label_39c088;
        case 0x39c08cu: goto label_39c08c;
        case 0x39c090u: goto label_39c090;
        case 0x39c094u: goto label_39c094;
        case 0x39c098u: goto label_39c098;
        case 0x39c09cu: goto label_39c09c;
        case 0x39c0a0u: goto label_39c0a0;
        case 0x39c0a4u: goto label_39c0a4;
        case 0x39c0a8u: goto label_39c0a8;
        case 0x39c0acu: goto label_39c0ac;
        case 0x39c0b0u: goto label_39c0b0;
        case 0x39c0b4u: goto label_39c0b4;
        case 0x39c0b8u: goto label_39c0b8;
        case 0x39c0bcu: goto label_39c0bc;
        case 0x39c0c0u: goto label_39c0c0;
        case 0x39c0c4u: goto label_39c0c4;
        case 0x39c0c8u: goto label_39c0c8;
        case 0x39c0ccu: goto label_39c0cc;
        case 0x39c0d0u: goto label_39c0d0;
        case 0x39c0d4u: goto label_39c0d4;
        case 0x39c0d8u: goto label_39c0d8;
        case 0x39c0dcu: goto label_39c0dc;
        case 0x39c0e0u: goto label_39c0e0;
        case 0x39c0e4u: goto label_39c0e4;
        case 0x39c0e8u: goto label_39c0e8;
        case 0x39c0ecu: goto label_39c0ec;
        case 0x39c0f0u: goto label_39c0f0;
        case 0x39c0f4u: goto label_39c0f4;
        case 0x39c0f8u: goto label_39c0f8;
        case 0x39c0fcu: goto label_39c0fc;
        case 0x39c100u: goto label_39c100;
        case 0x39c104u: goto label_39c104;
        case 0x39c108u: goto label_39c108;
        case 0x39c10cu: goto label_39c10c;
        case 0x39c110u: goto label_39c110;
        case 0x39c114u: goto label_39c114;
        case 0x39c118u: goto label_39c118;
        case 0x39c11cu: goto label_39c11c;
        case 0x39c120u: goto label_39c120;
        case 0x39c124u: goto label_39c124;
        case 0x39c128u: goto label_39c128;
        case 0x39c12cu: goto label_39c12c;
        case 0x39c130u: goto label_39c130;
        case 0x39c134u: goto label_39c134;
        case 0x39c138u: goto label_39c138;
        case 0x39c13cu: goto label_39c13c;
        case 0x39c140u: goto label_39c140;
        case 0x39c144u: goto label_39c144;
        case 0x39c148u: goto label_39c148;
        case 0x39c14cu: goto label_39c14c;
        case 0x39c150u: goto label_39c150;
        case 0x39c154u: goto label_39c154;
        case 0x39c158u: goto label_39c158;
        case 0x39c15cu: goto label_39c15c;
        case 0x39c160u: goto label_39c160;
        case 0x39c164u: goto label_39c164;
        case 0x39c168u: goto label_39c168;
        case 0x39c16cu: goto label_39c16c;
        case 0x39c170u: goto label_39c170;
        case 0x39c174u: goto label_39c174;
        case 0x39c178u: goto label_39c178;
        case 0x39c17cu: goto label_39c17c;
        case 0x39c180u: goto label_39c180;
        case 0x39c184u: goto label_39c184;
        case 0x39c188u: goto label_39c188;
        case 0x39c18cu: goto label_39c18c;
        case 0x39c190u: goto label_39c190;
        case 0x39c194u: goto label_39c194;
        case 0x39c198u: goto label_39c198;
        case 0x39c19cu: goto label_39c19c;
        case 0x39c1a0u: goto label_39c1a0;
        case 0x39c1a4u: goto label_39c1a4;
        case 0x39c1a8u: goto label_39c1a8;
        case 0x39c1acu: goto label_39c1ac;
        case 0x39c1b0u: goto label_39c1b0;
        case 0x39c1b4u: goto label_39c1b4;
        case 0x39c1b8u: goto label_39c1b8;
        case 0x39c1bcu: goto label_39c1bc;
        case 0x39c1c0u: goto label_39c1c0;
        case 0x39c1c4u: goto label_39c1c4;
        case 0x39c1c8u: goto label_39c1c8;
        case 0x39c1ccu: goto label_39c1cc;
        case 0x39c1d0u: goto label_39c1d0;
        case 0x39c1d4u: goto label_39c1d4;
        case 0x39c1d8u: goto label_39c1d8;
        case 0x39c1dcu: goto label_39c1dc;
        case 0x39c1e0u: goto label_39c1e0;
        case 0x39c1e4u: goto label_39c1e4;
        case 0x39c1e8u: goto label_39c1e8;
        case 0x39c1ecu: goto label_39c1ec;
        case 0x39c1f0u: goto label_39c1f0;
        case 0x39c1f4u: goto label_39c1f4;
        case 0x39c1f8u: goto label_39c1f8;
        case 0x39c1fcu: goto label_39c1fc;
        case 0x39c200u: goto label_39c200;
        case 0x39c204u: goto label_39c204;
        case 0x39c208u: goto label_39c208;
        case 0x39c20cu: goto label_39c20c;
        case 0x39c210u: goto label_39c210;
        case 0x39c214u: goto label_39c214;
        case 0x39c218u: goto label_39c218;
        case 0x39c21cu: goto label_39c21c;
        case 0x39c220u: goto label_39c220;
        case 0x39c224u: goto label_39c224;
        case 0x39c228u: goto label_39c228;
        case 0x39c22cu: goto label_39c22c;
        case 0x39c230u: goto label_39c230;
        case 0x39c234u: goto label_39c234;
        case 0x39c238u: goto label_39c238;
        case 0x39c23cu: goto label_39c23c;
        case 0x39c240u: goto label_39c240;
        case 0x39c244u: goto label_39c244;
        case 0x39c248u: goto label_39c248;
        case 0x39c24cu: goto label_39c24c;
        case 0x39c250u: goto label_39c250;
        case 0x39c254u: goto label_39c254;
        case 0x39c258u: goto label_39c258;
        case 0x39c25cu: goto label_39c25c;
        case 0x39c260u: goto label_39c260;
        case 0x39c264u: goto label_39c264;
        case 0x39c268u: goto label_39c268;
        case 0x39c26cu: goto label_39c26c;
        case 0x39c270u: goto label_39c270;
        case 0x39c274u: goto label_39c274;
        case 0x39c278u: goto label_39c278;
        case 0x39c27cu: goto label_39c27c;
        case 0x39c280u: goto label_39c280;
        case 0x39c284u: goto label_39c284;
        case 0x39c288u: goto label_39c288;
        case 0x39c28cu: goto label_39c28c;
        case 0x39c290u: goto label_39c290;
        case 0x39c294u: goto label_39c294;
        case 0x39c298u: goto label_39c298;
        case 0x39c29cu: goto label_39c29c;
        case 0x39c2a0u: goto label_39c2a0;
        case 0x39c2a4u: goto label_39c2a4;
        case 0x39c2a8u: goto label_39c2a8;
        case 0x39c2acu: goto label_39c2ac;
        default: break;
    }

    ctx->pc = 0x39bde0u;

label_39bde0:
    // 0x39bde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39bde4:
    // 0x39bde4: 0x24850084  addiu       $a1, $a0, 0x84
    ctx->pc = 0x39bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_39bde8:
    // 0x39bde8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39bdec:
    // 0x39bdec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39bdecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39bdf0:
    // 0x39bdf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39bdf4:
    // 0x39bdf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39bdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39bdf8:
    // 0x39bdf8: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x39bdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39bdfc:
    // 0x39bdfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39bdfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39be00:
    // 0x39be00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_39be04:
    if (ctx->pc == 0x39BE04u) {
        ctx->pc = 0x39BE04u;
            // 0x39be04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39BE08u;
        goto label_39be08;
    }
    ctx->pc = 0x39BE00u;
    {
        const bool branch_taken_0x39be00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BE00u;
            // 0x39be04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be00) {
            ctx->pc = 0x39BE0Cu;
            goto label_39be0c;
        }
    }
    ctx->pc = 0x39BE08u;
label_39be08:
    // 0x39be08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39be08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39be0c:
    // 0x39be0c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39be10:
    if (ctx->pc == 0x39BE10u) {
        ctx->pc = 0x39BE10u;
            // 0x39be10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39BE14u;
        goto label_39be14;
    }
    ctx->pc = 0x39BE0Cu;
    {
        const bool branch_taken_0x39be0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39be0c) {
            ctx->pc = 0x39BE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39BE0Cu;
            // 0x39be10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39BE20u;
            goto label_39be20;
        }
    }
    ctx->pc = 0x39BE14u;
label_39be14:
    // 0x39be14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39be14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39be18:
    // 0x39be18: 0x10000007  b           . + 4 + (0x7 << 2)
label_39be1c:
    if (ctx->pc == 0x39BE1Cu) {
        ctx->pc = 0x39BE1Cu;
            // 0x39be1c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39BE20u;
        goto label_39be20;
    }
    ctx->pc = 0x39BE18u;
    {
        const bool branch_taken_0x39be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BE18u;
            // 0x39be1c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be18) {
            ctx->pc = 0x39BE38u;
            goto label_39be38;
        }
    }
    ctx->pc = 0x39BE20u;
label_39be20:
    // 0x39be20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39be20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39be24:
    // 0x39be24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39be24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39be28:
    // 0x39be28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39be28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39be2c:
    // 0x39be2c: 0x0  nop
    ctx->pc = 0x39be2cu;
    // NOP
label_39be30:
    // 0x39be30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39be30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39be34:
    // 0x39be34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39be34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39be38:
    // 0x39be38: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39be38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39be3c:
    // 0x39be3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39be40:
    // 0x39be40: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x39be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39be44:
    // 0x39be44: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39be48:
    // 0x39be48: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x39be48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_39be4c:
    // 0x39be4c: 0x0  nop
    ctx->pc = 0x39be4cu;
    // NOP
label_39be50:
    // 0x39be50: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x39be50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_39be54:
    // 0x39be54: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x39be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39be58:
    // 0x39be58: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x39be58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_39be5c:
    // 0x39be5c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x39be5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_39be60:
    // 0x39be60: 0x8c850098  lw          $a1, 0x98($a0)
    ctx->pc = 0x39be60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_39be64:
    // 0x39be64: 0x10a3007e  beq         $a1, $v1, . + 4 + (0x7E << 2)
label_39be68:
    if (ctx->pc == 0x39BE68u) {
        ctx->pc = 0x39BE6Cu;
        goto label_39be6c;
    }
    ctx->pc = 0x39BE64u;
    {
        const bool branch_taken_0x39be64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39be64) {
            ctx->pc = 0x39C060u;
            goto label_39c060;
        }
    }
    ctx->pc = 0x39BE6Cu;
label_39be6c:
    // 0x39be6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39be70:
    // 0x39be70: 0x50a2002c  beql        $a1, $v0, . + 4 + (0x2C << 2)
label_39be74:
    if (ctx->pc == 0x39BE74u) {
        ctx->pc = 0x39BE74u;
            // 0x39be74: 0x8c85009c  lw          $a1, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->pc = 0x39BE78u;
        goto label_39be78;
    }
    ctx->pc = 0x39BE70u;
    {
        const bool branch_taken_0x39be70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x39be70) {
            ctx->pc = 0x39BE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39BE70u;
            // 0x39be74: 0x8c85009c  lw          $a1, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39BF24u;
            goto label_39bf24;
        }
    }
    ctx->pc = 0x39BE78u;
label_39be78:
    // 0x39be78: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_39be7c:
    if (ctx->pc == 0x39BE7Cu) {
        ctx->pc = 0x39BE80u;
        goto label_39be80;
    }
    ctx->pc = 0x39BE78u;
    {
        const bool branch_taken_0x39be78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39be78) {
            ctx->pc = 0x39BE88u;
            goto label_39be88;
        }
    }
    ctx->pc = 0x39BE80u;
label_39be80:
    // 0x39be80: 0x10000077  b           . + 4 + (0x77 << 2)
label_39be84:
    if (ctx->pc == 0x39BE84u) {
        ctx->pc = 0x39BE88u;
        goto label_39be88;
    }
    ctx->pc = 0x39BE80u;
    {
        const bool branch_taken_0x39be80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39be80) {
            ctx->pc = 0x39C060u;
            goto label_39c060;
        }
    }
    ctx->pc = 0x39BE88u;
label_39be88:
    // 0x39be88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39be88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39be8c:
    // 0x39be8c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39be90:
    // 0x39be90: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x39be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39be94:
    // 0x39be94: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x39be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39be98:
    // 0x39be98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x39be98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_39be9c:
    // 0x39be9c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x39be9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39bea0:
    // 0x39bea0: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
label_39bea4:
    if (ctx->pc == 0x39BEA4u) {
        ctx->pc = 0x39BEA4u;
            // 0x39bea4: 0xe48000a8  swc1        $f0, 0xA8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
        ctx->pc = 0x39BEA8u;
        goto label_39bea8;
    }
    ctx->pc = 0x39BEA0u;
    {
        const bool branch_taken_0x39bea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39BEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BEA0u;
            // 0x39bea4: 0xe48000a8  swc1        $f0, 0xA8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bea0) {
            ctx->pc = 0x39C060u;
            goto label_39c060;
        }
    }
    ctx->pc = 0x39BEA8u;
label_39bea8:
    // 0x39bea8: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x39bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_39beac:
    // 0x39beac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39beacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39beb0:
    // 0x39beb0: 0x8c870090  lw          $a3, 0x90($a0)
    ctx->pc = 0x39beb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_39beb4:
    // 0x39beb4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x39beb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39beb8:
    // 0x39beb8: 0x8ce20140  lw          $v0, 0x140($a3)
    ctx->pc = 0x39beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 320)));
label_39bebc:
    // 0x39bebc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x39bebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_39bec0:
    // 0x39bec0: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x39bec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_39bec4:
    // 0x39bec4: 0x24e701b0  addiu       $a3, $a3, 0x1B0
    ctx->pc = 0x39bec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 432));
label_39bec8:
    // 0x39bec8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x39bec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_39becc:
    // 0x39becc: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
label_39bed0:
    if (ctx->pc == 0x39BED0u) {
        ctx->pc = 0x39BED0u;
            // 0x39bed0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x39BED4u;
        goto label_39bed4;
    }
    ctx->pc = 0x39BECCu;
    {
        const bool branch_taken_0x39becc = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x39BED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BECCu;
            // 0x39bed0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39becc) {
            ctx->pc = 0x39BEB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39beb8;
        }
    }
    ctx->pc = 0x39BED4u;
label_39bed4:
    // 0x39bed4: 0x14a30010  bne         $a1, $v1, . + 4 + (0x10 << 2)
label_39bed8:
    if (ctx->pc == 0x39BED8u) {
        ctx->pc = 0x39BEDCu;
        goto label_39bedc;
    }
    ctx->pc = 0x39BED4u;
    {
        const bool branch_taken_0x39bed4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x39bed4) {
            ctx->pc = 0x39BF18u;
            goto label_39bf18;
        }
    }
    ctx->pc = 0x39BEDCu;
label_39bedc:
    // 0x39bedc: 0x3c033fcf  lui         $v1, 0x3FCF
    ctx->pc = 0x39bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16335 << 16));
label_39bee0:
    // 0x39bee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39bee4:
    // 0x39bee4: 0x3463684c  ori         $v1, $v1, 0x684C
    ctx->pc = 0x39bee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26700);
label_39bee8:
    // 0x39bee8: 0xac8300a4  sw          $v1, 0xA4($a0)
    ctx->pc = 0x39bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 3));
label_39beec:
    // 0x39beec: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x39beecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
label_39bef0:
    // 0x39bef0: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x39bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_39bef4:
    // 0x39bef4: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x39bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_39bef8:
    // 0x39bef8: 0xaca20140  sw          $v0, 0x140($a1)
    ctx->pc = 0x39bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 320), GPR_U32(ctx, 2));
label_39befc:
    // 0x39befc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39befcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_39bf00:
    // 0x39bf00: 0xa0a20158  sb          $v0, 0x158($a1)
    ctx->pc = 0x39bf00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 344), (uint8_t)GPR_U32(ctx, 2));
label_39bf04:
    // 0x39bf04: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x39bf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39bf08:
    // 0x39bf08: 0xe4a00150  swc1        $f0, 0x150($a1)
    ctx->pc = 0x39bf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 336), bits); }
label_39bf0c:
    // 0x39bf0c: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
label_39bf10:
    if (ctx->pc == 0x39BF10u) {
        ctx->pc = 0x39BF10u;
            // 0x39bf10: 0x24a501b0  addiu       $a1, $a1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
        ctx->pc = 0x39BF14u;
        goto label_39bf14;
    }
    ctx->pc = 0x39BF0Cu;
    {
        const bool branch_taken_0x39bf0c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x39BF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BF0Cu;
            // 0x39bf10: 0x24a501b0  addiu       $a1, $a1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf0c) {
            ctx->pc = 0x39BEF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39bef8;
        }
    }
    ctx->pc = 0x39BF14u;
label_39bf14:
    // 0x39bf14: 0x0  nop
    ctx->pc = 0x39bf14u;
    // NOP
label_39bf18:
    // 0x39bf18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39bf1c:
    // 0x39bf1c: 0x10000050  b           . + 4 + (0x50 << 2)
label_39bf20:
    if (ctx->pc == 0x39BF20u) {
        ctx->pc = 0x39BF20u;
            // 0x39bf20: 0xac820098  sw          $v0, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
        ctx->pc = 0x39BF24u;
        goto label_39bf24;
    }
    ctx->pc = 0x39BF1Cu;
    {
        const bool branch_taken_0x39bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BF1Cu;
            // 0x39bf20: 0xac820098  sw          $v0, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf1c) {
            ctx->pc = 0x39C060u;
            goto label_39c060;
        }
    }
    ctx->pc = 0x39BF24u;
label_39bf24:
    // 0x39bf24: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x39bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_39bf28:
    // 0x39bf28: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x39bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_39bf2c:
    // 0x39bf2c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x39bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_39bf30:
    // 0x39bf30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39bf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39bf34:
    // 0x39bf34: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x39bf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_39bf38:
    // 0x39bf38: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x39bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_39bf3c:
    // 0x39bf3c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x39bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_39bf40:
    // 0x39bf40: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x39bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_39bf44:
    // 0x39bf44: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x39bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_39bf48:
    // 0x39bf48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x39bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_39bf4c:
    // 0x39bf4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x39bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39bf50:
    // 0x39bf50: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x39bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39bf54:
    // 0x39bf54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39bf54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39bf58:
    // 0x39bf58: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
label_39bf5c:
    if (ctx->pc == 0x39BF5Cu) {
        ctx->pc = 0x39BF5Cu;
            // 0x39bf5c: 0x3c023eb3  lui         $v0, 0x3EB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16051 << 16));
        ctx->pc = 0x39BF60u;
        goto label_39bf60;
    }
    ctx->pc = 0x39BF58u;
    {
        const bool branch_taken_0x39bf58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bf58) {
            ctx->pc = 0x39BF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39BF58u;
            // 0x39bf5c: 0x3c023eb3  lui         $v0, 0x3EB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16051 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39BFC4u;
            goto label_39bfc4;
        }
    }
    ctx->pc = 0x39BF60u;
label_39bf60:
    // 0x39bf60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39bf64:
    // 0x39bf64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x39bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_39bf68:
    // 0x39bf68: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x39bf68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39bf6c:
    // 0x39bf6c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x39bf6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39bf70:
    // 0x39bf70: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x39bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_39bf74:
    // 0x39bf74: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x39bf74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_39bf78:
    // 0x39bf78: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x39bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_39bf7c:
    // 0x39bf7c: 0x344347ae  ori         $v1, $v0, 0x47AE
    ctx->pc = 0x39bf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
label_39bf80:
    // 0x39bf80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39bf80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39bf84:
    // 0x39bf84: 0x3c023fcf  lui         $v0, 0x3FCF
    ctx->pc = 0x39bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16335 << 16));
label_39bf88:
    // 0x39bf88: 0xc4c30018  lwc1        $f3, 0x18($a2)
    ctx->pc = 0x39bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39bf8c:
    // 0x39bf8c: 0x3442684c  ori         $v0, $v0, 0x684C
    ctx->pc = 0x39bf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26700);
label_39bf90:
    // 0x39bf90: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x39bf90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_39bf94:
    // 0x39bf94: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x39bf94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39bf98:
    // 0x39bf98: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x39bf98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_39bf9c:
    // 0x39bf9c: 0x4600089c  madd.s      $f2, $f1, $f0
    ctx->pc = 0x39bf9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_39bfa0:
    // 0x39bfa0: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x39bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39bfa4:
    // 0x39bfa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39bfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39bfa8:
    // 0x39bfa8: 0x0  nop
    ctx->pc = 0x39bfa8u;
    // NOP
label_39bfac:
    // 0x39bfac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39bfacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_39bfb0:
    // 0x39bfb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39bfb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39bfb4:
    // 0x39bfb4: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_39bfb8:
    if (ctx->pc == 0x39BFB8u) {
        ctx->pc = 0x39BFB8u;
            // 0x39bfb8: 0xe48100a4  swc1        $f1, 0xA4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
        ctx->pc = 0x39BFBCu;
        goto label_39bfbc;
    }
    ctx->pc = 0x39BFB4u;
    {
        const bool branch_taken_0x39bfb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39BFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BFB4u;
            // 0x39bfb8: 0xe48100a4  swc1        $f1, 0xA4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bfb4) {
            ctx->pc = 0x39C03Cu;
            goto label_39c03c;
        }
    }
    ctx->pc = 0x39BFBCu;
label_39bfbc:
    // 0x39bfbc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_39bfc0:
    if (ctx->pc == 0x39BFC0u) {
        ctx->pc = 0x39BFC0u;
            // 0x39bfc0: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
        ctx->pc = 0x39BFC4u;
        goto label_39bfc4;
    }
    ctx->pc = 0x39BFBCu;
    {
        const bool branch_taken_0x39bfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BFBCu;
            // 0x39bfc0: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bfbc) {
            ctx->pc = 0x39C03Cu;
            goto label_39c03c;
        }
    }
    ctx->pc = 0x39BFC4u;
label_39bfc4:
    // 0x39bfc4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x39bfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_39bfc8:
    // 0x39bfc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39bfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39bfcc:
    // 0x39bfcc: 0x0  nop
    ctx->pc = 0x39bfccu;
    // NOP
label_39bfd0:
    // 0x39bfd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39bfd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39bfd4:
    // 0x39bfd4: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
label_39bfd8:
    if (ctx->pc == 0x39BFD8u) {
        ctx->pc = 0x39BFD8u;
            // 0x39bfd8: 0x8c830090  lw          $v1, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->pc = 0x39BFDCu;
        goto label_39bfdc;
    }
    ctx->pc = 0x39BFD4u;
    {
        const bool branch_taken_0x39bfd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bfd4) {
            ctx->pc = 0x39BFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39BFD4u;
            // 0x39bfd8: 0x8c830090  lw          $v1, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39C040u;
            goto label_39c040;
        }
    }
    ctx->pc = 0x39BFDCu;
label_39bfdc:
    // 0x39bfdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39bfe0:
    // 0x39bfe0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x39bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_39bfe4:
    // 0x39bfe4: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x39bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39bfe8:
    // 0x39bfe8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x39bfe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39bfec:
    // 0x39bfec: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x39bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_39bff0:
    // 0x39bff0: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x39bff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_39bff4:
    // 0x39bff4: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x39bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_39bff8:
    // 0x39bff8: 0x344370a4  ori         $v1, $v0, 0x70A4
    ctx->pc = 0x39bff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_39bffc:
    // 0x39bffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39bffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39c000:
    // 0x39c000: 0x3c023ebd  lui         $v0, 0x3EBD
    ctx->pc = 0x39c000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16061 << 16));
label_39c004:
    // 0x39c004: 0xc4c30018  lwc1        $f3, 0x18($a2)
    ctx->pc = 0x39c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39c008:
    // 0x39c008: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x39c008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_39c00c:
    // 0x39c00c: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x39c00cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_39c010:
    // 0x39c010: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x39c010u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39c014:
    // 0x39c014: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x39c014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_39c018:
    // 0x39c018: 0x4600089d  msub.s      $f2, $f1, $f0
    ctx->pc = 0x39c018u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_39c01c:
    // 0x39c01c: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x39c01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c020:
    // 0x39c020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39c020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39c024:
    // 0x39c024: 0x0  nop
    ctx->pc = 0x39c024u;
    // NOP
label_39c028:
    // 0x39c028: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39c028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_39c02c:
    // 0x39c02c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39c02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39c030:
    // 0x39c030: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_39c034:
    if (ctx->pc == 0x39C034u) {
        ctx->pc = 0x39C034u;
            // 0x39c034: 0xe48100a4  swc1        $f1, 0xA4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
        ctx->pc = 0x39C038u;
        goto label_39c038;
    }
    ctx->pc = 0x39C030u;
    {
        const bool branch_taken_0x39c030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39C034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C030u;
            // 0x39c034: 0xe48100a4  swc1        $f1, 0xA4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c030) {
            ctx->pc = 0x39C03Cu;
            goto label_39c03c;
        }
    }
    ctx->pc = 0x39C038u;
label_39c038:
    // 0x39c038: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x39c038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
label_39c03c:
    // 0x39c03c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x39c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_39c040:
    // 0x39c040: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x39c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_39c044:
    // 0x39c044: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x39c044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c048:
    // 0x39c048: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39c048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_39c04c:
    // 0x39c04c: 0xe4600150  swc1        $f0, 0x150($v1)
    ctx->pc = 0x39c04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 336), bits); }
label_39c050:
    // 0x39c050: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x39c050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
label_39c054:
    // 0x39c054: 0x0  nop
    ctx->pc = 0x39c054u;
    // NOP
label_39c058:
    // 0x39c058: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_39c05c:
    if (ctx->pc == 0x39C05Cu) {
        ctx->pc = 0x39C060u;
        goto label_39c060;
    }
    ctx->pc = 0x39C058u;
    {
        const bool branch_taken_0x39c058 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x39c058) {
            ctx->pc = 0x39C044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39c044;
        }
    }
    ctx->pc = 0x39C060u;
label_39c060:
    // 0x39c060: 0x8c910090  lw          $s1, 0x90($a0)
    ctx->pc = 0x39c060u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_39c064:
    // 0x39c064: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x39c064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_39c068:
    // 0x39c068: 0xc0e3658  jal         func_38D960
label_39c06c:
    if (ctx->pc == 0x39C06Cu) {
        ctx->pc = 0x39C06Cu;
            // 0x39c06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C070u;
        goto label_39c070;
    }
    ctx->pc = 0x39C068u;
    SET_GPR_U32(ctx, 31, 0x39C070u);
    ctx->pc = 0x39C06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C068u;
            // 0x39c06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C070u; }
        if (ctx->pc != 0x39C070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C070u; }
        if (ctx->pc != 0x39C070u) { return; }
    }
    ctx->pc = 0x39C070u;
label_39c070:
    // 0x39c070: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x39c070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_39c074:
    // 0x39c074: 0x263101b0  addiu       $s1, $s1, 0x1B0
    ctx->pc = 0x39c074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_39c078:
    // 0x39c078: 0x0  nop
    ctx->pc = 0x39c078u;
    // NOP
label_39c07c:
    // 0x39c07c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_39c080:
    if (ctx->pc == 0x39C080u) {
        ctx->pc = 0x39C084u;
        goto label_39c084;
    }
    ctx->pc = 0x39C07Cu;
    {
        const bool branch_taken_0x39c07c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x39c07c) {
            ctx->pc = 0x39C068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39c068;
        }
    }
    ctx->pc = 0x39C084u;
label_39c084:
    // 0x39c084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c088:
    // 0x39c088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c08c:
    // 0x39c08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39c090:
    // 0x39c090: 0x3e00008  jr          $ra
label_39c094:
    if (ctx->pc == 0x39C094u) {
        ctx->pc = 0x39C094u;
            // 0x39c094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39C098u;
        goto label_39c098;
    }
    ctx->pc = 0x39C090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C090u;
            // 0x39c094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39C098u;
label_39c098:
    // 0x39c098: 0x0  nop
    ctx->pc = 0x39c098u;
    // NOP
label_39c09c:
    // 0x39c09c: 0x0  nop
    ctx->pc = 0x39c09cu;
    // NOP
label_39c0a0:
    // 0x39c0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39c0a4:
    // 0x39c0a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x39c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_39c0a8:
    // 0x39c0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c0ac:
    // 0x39c0ac: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x39c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_39c0b0:
    // 0x39c0b0: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x39c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_39c0b4:
    // 0x39c0b4: 0x2c610011  sltiu       $at, $v1, 0x11
    ctx->pc = 0x39c0b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_39c0b8:
    // 0x39c0b8: 0x10200070  beqz        $at, . + 4 + (0x70 << 2)
label_39c0bc:
    if (ctx->pc == 0x39C0BCu) {
        ctx->pc = 0x39C0BCu;
            // 0x39c0bc: 0x8ca40d60  lw          $a0, 0xD60($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
        ctx->pc = 0x39C0C0u;
        goto label_39c0c0;
    }
    ctx->pc = 0x39C0B8u;
    {
        const bool branch_taken_0x39c0b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C0B8u;
            // 0x39c0bc: 0x8ca40d60  lw          $a0, 0xD60($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c0b8) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C0C0u;
label_39c0c0:
    // 0x39c0c0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x39c0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_39c0c4:
    // 0x39c0c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39c0c8:
    // 0x39c0c8: 0x24a56fa0  addiu       $a1, $a1, 0x6FA0
    ctx->pc = 0x39c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28576));
label_39c0cc:
    // 0x39c0cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_39c0d0:
    // 0x39c0d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39c0d4:
    // 0x39c0d4: 0x600008  jr          $v1
label_39c0d8:
    if (ctx->pc == 0x39C0D8u) {
        ctx->pc = 0x39C0DCu;
        goto label_39c0dc;
    }
    ctx->pc = 0x39C0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39C0DCu: goto label_39c0dc;
            case 0x39C0F4u: goto label_39c0f4;
            case 0x39C10Cu: goto label_39c10c;
            case 0x39C124u: goto label_39c124;
            case 0x39C140u: goto label_39c140;
            case 0x39C15Cu: goto label_39c15c;
            case 0x39C178u: goto label_39c178;
            case 0x39C190u: goto label_39c190;
            case 0x39C1ACu: goto label_39c1ac;
            case 0x39C1C8u: goto label_39c1c8;
            case 0x39C1E4u: goto label_39c1e4;
            case 0x39C1FCu: goto label_39c1fc;
            case 0x39C218u: goto label_39c218;
            case 0x39C234u: goto label_39c234;
            case 0x39C250u: goto label_39c250;
            case 0x39C268u: goto label_39c268;
            case 0x39C27Cu: goto label_39c27c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x39C0DCu;
label_39c0dc:
    // 0x39c0dc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c0e0:
    // 0x39c0e0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c0e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c0e4:
    // 0x39c0e4: 0x320f809  jalr        $t9
label_39c0e8:
    if (ctx->pc == 0x39C0E8u) {
        ctx->pc = 0x39C0E8u;
            // 0x39c0e8: 0x24050aa9  addiu       $a1, $zero, 0xAA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2729));
        ctx->pc = 0x39C0ECu;
        goto label_39c0ec;
    }
    ctx->pc = 0x39C0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C0ECu);
        ctx->pc = 0x39C0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C0E4u;
            // 0x39c0e8: 0x24050aa9  addiu       $a1, $zero, 0xAA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2729));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C0ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C0ECu; }
            if (ctx->pc != 0x39C0ECu) { return; }
        }
        }
    }
    ctx->pc = 0x39C0ECu;
label_39c0ec:
    // 0x39c0ec: 0x10000064  b           . + 4 + (0x64 << 2)
label_39c0f0:
    if (ctx->pc == 0x39C0F0u) {
        ctx->pc = 0x39C0F0u;
            // 0x39c0f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x39C0F4u;
        goto label_39c0f4;
    }
    ctx->pc = 0x39C0ECu;
    {
        const bool branch_taken_0x39c0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C0ECu;
            // 0x39c0f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c0ec) {
            ctx->pc = 0x39C280u;
            goto label_39c280;
        }
    }
    ctx->pc = 0x39C0F4u;
label_39c0f4:
    // 0x39c0f4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c0f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c0f8:
    // 0x39c0f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c0f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c0fc:
    // 0x39c0fc: 0x320f809  jalr        $t9
label_39c100:
    if (ctx->pc == 0x39C100u) {
        ctx->pc = 0x39C100u;
            // 0x39c100: 0x24050ba9  addiu       $a1, $zero, 0xBA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2985));
        ctx->pc = 0x39C104u;
        goto label_39c104;
    }
    ctx->pc = 0x39C0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C104u);
        ctx->pc = 0x39C100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C0FCu;
            // 0x39c100: 0x24050ba9  addiu       $a1, $zero, 0xBA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2985));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C104u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C104u; }
            if (ctx->pc != 0x39C104u) { return; }
        }
        }
    }
    ctx->pc = 0x39C104u;
label_39c104:
    // 0x39c104: 0x1000005d  b           . + 4 + (0x5D << 2)
label_39c108:
    if (ctx->pc == 0x39C108u) {
        ctx->pc = 0x39C10Cu;
        goto label_39c10c;
    }
    ctx->pc = 0x39C104u;
    {
        const bool branch_taken_0x39c104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c104) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C10Cu;
label_39c10c:
    // 0x39c10c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c110:
    // 0x39c110: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c114:
    // 0x39c114: 0x320f809  jalr        $t9
label_39c118:
    if (ctx->pc == 0x39C118u) {
        ctx->pc = 0x39C118u;
            // 0x39c118: 0x24050ca9  addiu       $a1, $zero, 0xCA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3241));
        ctx->pc = 0x39C11Cu;
        goto label_39c11c;
    }
    ctx->pc = 0x39C114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C11Cu);
        ctx->pc = 0x39C118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C114u;
            // 0x39c118: 0x24050ca9  addiu       $a1, $zero, 0xCA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3241));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C11Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C11Cu; }
            if (ctx->pc != 0x39C11Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39C11Cu;
label_39c11c:
    // 0x39c11c: 0x10000057  b           . + 4 + (0x57 << 2)
label_39c120:
    if (ctx->pc == 0x39C120u) {
        ctx->pc = 0x39C124u;
        goto label_39c124;
    }
    ctx->pc = 0x39C11Cu;
    {
        const bool branch_taken_0x39c11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c11c) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C124u;
label_39c124:
    // 0x39c124: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c128:
    // 0x39c128: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x39c128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_39c12c:
    // 0x39c12c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c130:
    // 0x39c130: 0x320f809  jalr        $t9
label_39c134:
    if (ctx->pc == 0x39C134u) {
        ctx->pc = 0x39C134u;
            // 0x39c134: 0x34450da9  ori         $a1, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->pc = 0x39C138u;
        goto label_39c138;
    }
    ctx->pc = 0x39C130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C138u);
        ctx->pc = 0x39C134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C130u;
            // 0x39c134: 0x34450da9  ori         $a1, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C138u; }
            if (ctx->pc != 0x39C138u) { return; }
        }
        }
    }
    ctx->pc = 0x39C138u;
label_39c138:
    // 0x39c138: 0x10000050  b           . + 4 + (0x50 << 2)
label_39c13c:
    if (ctx->pc == 0x39C13Cu) {
        ctx->pc = 0x39C140u;
        goto label_39c140;
    }
    ctx->pc = 0x39C138u;
    {
        const bool branch_taken_0x39c138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c138) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C140u;
label_39c140:
    // 0x39c140: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c144:
    // 0x39c144: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x39c144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_39c148:
    // 0x39c148: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c14c:
    // 0x39c14c: 0x320f809  jalr        $t9
label_39c150:
    if (ctx->pc == 0x39C150u) {
        ctx->pc = 0x39C150u;
            // 0x39c150: 0x34450ea9  ori         $a1, $v0, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3753);
        ctx->pc = 0x39C154u;
        goto label_39c154;
    }
    ctx->pc = 0x39C14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C154u);
        ctx->pc = 0x39C150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C14Cu;
            // 0x39c150: 0x34450ea9  ori         $a1, $v0, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3753);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C154u; }
            if (ctx->pc != 0x39C154u) { return; }
        }
        }
    }
    ctx->pc = 0x39C154u;
label_39c154:
    // 0x39c154: 0x10000049  b           . + 4 + (0x49 << 2)
label_39c158:
    if (ctx->pc == 0x39C158u) {
        ctx->pc = 0x39C15Cu;
        goto label_39c15c;
    }
    ctx->pc = 0x39C154u;
    {
        const bool branch_taken_0x39c154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c154) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C15Cu;
label_39c15c:
    // 0x39c15c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c160:
    // 0x39c160: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x39c160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_39c164:
    // 0x39c164: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c168:
    // 0x39c168: 0x320f809  jalr        $t9
label_39c16c:
    if (ctx->pc == 0x39C16Cu) {
        ctx->pc = 0x39C16Cu;
            // 0x39c16c: 0x34450fa9  ori         $a1, $v0, 0xFA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4009);
        ctx->pc = 0x39C170u;
        goto label_39c170;
    }
    ctx->pc = 0x39C168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C170u);
        ctx->pc = 0x39C16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C168u;
            // 0x39c16c: 0x34450fa9  ori         $a1, $v0, 0xFA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4009);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C170u; }
            if (ctx->pc != 0x39C170u) { return; }
        }
        }
    }
    ctx->pc = 0x39C170u;
label_39c170:
    // 0x39c170: 0x10000042  b           . + 4 + (0x42 << 2)
label_39c174:
    if (ctx->pc == 0x39C174u) {
        ctx->pc = 0x39C178u;
        goto label_39c178;
    }
    ctx->pc = 0x39C170u;
    {
        const bool branch_taken_0x39c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c170) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C178u;
label_39c178:
    // 0x39c178: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c17c:
    // 0x39c17c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c17cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c180:
    // 0x39c180: 0x320f809  jalr        $t9
label_39c184:
    if (ctx->pc == 0x39C184u) {
        ctx->pc = 0x39C184u;
            // 0x39c184: 0x240510a9  addiu       $a1, $zero, 0x10A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4265));
        ctx->pc = 0x39C188u;
        goto label_39c188;
    }
    ctx->pc = 0x39C180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C188u);
        ctx->pc = 0x39C184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C180u;
            // 0x39c184: 0x240510a9  addiu       $a1, $zero, 0x10A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4265));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C188u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C188u; }
            if (ctx->pc != 0x39C188u) { return; }
        }
        }
    }
    ctx->pc = 0x39C188u;
label_39c188:
    // 0x39c188: 0x1000003c  b           . + 4 + (0x3C << 2)
label_39c18c:
    if (ctx->pc == 0x39C18Cu) {
        ctx->pc = 0x39C190u;
        goto label_39c190;
    }
    ctx->pc = 0x39C188u;
    {
        const bool branch_taken_0x39c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c188) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C190u;
label_39c190:
    // 0x39c190: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c194:
    // 0x39c194: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x39c194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_39c198:
    // 0x39c198: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c19c:
    // 0x39c19c: 0x320f809  jalr        $t9
label_39c1a0:
    if (ctx->pc == 0x39C1A0u) {
        ctx->pc = 0x39C1A0u;
            // 0x39c1a0: 0x344511a9  ori         $a1, $v0, 0x11A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4521);
        ctx->pc = 0x39C1A4u;
        goto label_39c1a4;
    }
    ctx->pc = 0x39C19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C1A4u);
        ctx->pc = 0x39C1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C19Cu;
            // 0x39c1a0: 0x344511a9  ori         $a1, $v0, 0x11A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4521);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C1A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C1A4u; }
            if (ctx->pc != 0x39C1A4u) { return; }
        }
        }
    }
    ctx->pc = 0x39C1A4u;
label_39c1a4:
    // 0x39c1a4: 0x10000035  b           . + 4 + (0x35 << 2)
label_39c1a8:
    if (ctx->pc == 0x39C1A8u) {
        ctx->pc = 0x39C1ACu;
        goto label_39c1ac;
    }
    ctx->pc = 0x39C1A4u;
    {
        const bool branch_taken_0x39c1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c1a4) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C1ACu;
label_39c1ac:
    // 0x39c1ac: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c1acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c1b0:
    // 0x39c1b0: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x39c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_39c1b4:
    // 0x39c1b4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c1b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c1b8:
    // 0x39c1b8: 0x320f809  jalr        $t9
label_39c1bc:
    if (ctx->pc == 0x39C1BCu) {
        ctx->pc = 0x39C1BCu;
            // 0x39c1bc: 0x344512a9  ori         $a1, $v0, 0x12A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4777);
        ctx->pc = 0x39C1C0u;
        goto label_39c1c0;
    }
    ctx->pc = 0x39C1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C1C0u);
        ctx->pc = 0x39C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C1B8u;
            // 0x39c1bc: 0x344512a9  ori         $a1, $v0, 0x12A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4777);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C1C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C1C0u; }
            if (ctx->pc != 0x39C1C0u) { return; }
        }
        }
    }
    ctx->pc = 0x39C1C0u;
label_39c1c0:
    // 0x39c1c0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_39c1c4:
    if (ctx->pc == 0x39C1C4u) {
        ctx->pc = 0x39C1C8u;
        goto label_39c1c8;
    }
    ctx->pc = 0x39C1C0u;
    {
        const bool branch_taken_0x39c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c1c0) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C1C8u;
label_39c1c8:
    // 0x39c1c8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c1c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c1cc:
    // 0x39c1cc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x39c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_39c1d0:
    // 0x39c1d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c1d4:
    // 0x39c1d4: 0x320f809  jalr        $t9
label_39c1d8:
    if (ctx->pc == 0x39C1D8u) {
        ctx->pc = 0x39C1D8u;
            // 0x39c1d8: 0x344513a9  ori         $a1, $v0, 0x13A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5033);
        ctx->pc = 0x39C1DCu;
        goto label_39c1dc;
    }
    ctx->pc = 0x39C1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C1DCu);
        ctx->pc = 0x39C1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C1D4u;
            // 0x39c1d8: 0x344513a9  ori         $a1, $v0, 0x13A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5033);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C1DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C1DCu; }
            if (ctx->pc != 0x39C1DCu) { return; }
        }
        }
    }
    ctx->pc = 0x39C1DCu;
label_39c1dc:
    // 0x39c1dc: 0x10000027  b           . + 4 + (0x27 << 2)
label_39c1e0:
    if (ctx->pc == 0x39C1E0u) {
        ctx->pc = 0x39C1E4u;
        goto label_39c1e4;
    }
    ctx->pc = 0x39C1DCu;
    {
        const bool branch_taken_0x39c1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c1dc) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C1E4u;
label_39c1e4:
    // 0x39c1e4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c1e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c1e8:
    // 0x39c1e8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c1ec:
    // 0x39c1ec: 0x320f809  jalr        $t9
label_39c1f0:
    if (ctx->pc == 0x39C1F0u) {
        ctx->pc = 0x39C1F0u;
            // 0x39c1f0: 0x240514a9  addiu       $a1, $zero, 0x14A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5289));
        ctx->pc = 0x39C1F4u;
        goto label_39c1f4;
    }
    ctx->pc = 0x39C1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C1F4u);
        ctx->pc = 0x39C1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C1ECu;
            // 0x39c1f0: 0x240514a9  addiu       $a1, $zero, 0x14A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5289));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C1F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C1F4u; }
            if (ctx->pc != 0x39C1F4u) { return; }
        }
        }
    }
    ctx->pc = 0x39C1F4u;
label_39c1f4:
    // 0x39c1f4: 0x10000021  b           . + 4 + (0x21 << 2)
label_39c1f8:
    if (ctx->pc == 0x39C1F8u) {
        ctx->pc = 0x39C1FCu;
        goto label_39c1fc;
    }
    ctx->pc = 0x39C1F4u;
    {
        const bool branch_taken_0x39c1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c1f4) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C1FCu;
label_39c1fc:
    // 0x39c1fc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c1fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c200:
    // 0x39c200: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x39c200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_39c204:
    // 0x39c204: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c208:
    // 0x39c208: 0x320f809  jalr        $t9
label_39c20c:
    if (ctx->pc == 0x39C20Cu) {
        ctx->pc = 0x39C20Cu;
            // 0x39c20c: 0x344515a9  ori         $a1, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->pc = 0x39C210u;
        goto label_39c210;
    }
    ctx->pc = 0x39C208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C210u);
        ctx->pc = 0x39C20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C208u;
            // 0x39c20c: 0x344515a9  ori         $a1, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C210u; }
            if (ctx->pc != 0x39C210u) { return; }
        }
        }
    }
    ctx->pc = 0x39C210u;
label_39c210:
    // 0x39c210: 0x1000001a  b           . + 4 + (0x1A << 2)
label_39c214:
    if (ctx->pc == 0x39C214u) {
        ctx->pc = 0x39C218u;
        goto label_39c218;
    }
    ctx->pc = 0x39C210u;
    {
        const bool branch_taken_0x39c210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c210) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C218u;
label_39c218:
    // 0x39c218: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c21c:
    // 0x39c21c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x39c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_39c220:
    // 0x39c220: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c224:
    // 0x39c224: 0x320f809  jalr        $t9
label_39c228:
    if (ctx->pc == 0x39C228u) {
        ctx->pc = 0x39C228u;
            // 0x39c228: 0x344516a9  ori         $a1, $v0, 0x16A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5801);
        ctx->pc = 0x39C22Cu;
        goto label_39c22c;
    }
    ctx->pc = 0x39C224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C22Cu);
        ctx->pc = 0x39C228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C224u;
            // 0x39c228: 0x344516a9  ori         $a1, $v0, 0x16A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5801);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C22Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C22Cu; }
            if (ctx->pc != 0x39C22Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39C22Cu;
label_39c22c:
    // 0x39c22c: 0x10000013  b           . + 4 + (0x13 << 2)
label_39c230:
    if (ctx->pc == 0x39C230u) {
        ctx->pc = 0x39C234u;
        goto label_39c234;
    }
    ctx->pc = 0x39C22Cu;
    {
        const bool branch_taken_0x39c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c22c) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C234u;
label_39c234:
    // 0x39c234: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c238:
    // 0x39c238: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x39c238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_39c23c:
    // 0x39c23c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c240:
    // 0x39c240: 0x320f809  jalr        $t9
label_39c244:
    if (ctx->pc == 0x39C244u) {
        ctx->pc = 0x39C244u;
            // 0x39c244: 0x344517a9  ori         $a1, $v0, 0x17A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6057);
        ctx->pc = 0x39C248u;
        goto label_39c248;
    }
    ctx->pc = 0x39C240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C248u);
        ctx->pc = 0x39C244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C240u;
            // 0x39c244: 0x344517a9  ori         $a1, $v0, 0x17A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6057);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C248u; }
            if (ctx->pc != 0x39C248u) { return; }
        }
        }
    }
    ctx->pc = 0x39C248u;
label_39c248:
    // 0x39c248: 0x1000000c  b           . + 4 + (0xC << 2)
label_39c24c:
    if (ctx->pc == 0x39C24Cu) {
        ctx->pc = 0x39C250u;
        goto label_39c250;
    }
    ctx->pc = 0x39C248u;
    {
        const bool branch_taken_0x39c248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c248) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C250u;
label_39c250:
    // 0x39c250: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c254:
    // 0x39c254: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c258:
    // 0x39c258: 0x320f809  jalr        $t9
label_39c25c:
    if (ctx->pc == 0x39C25Cu) {
        ctx->pc = 0x39C25Cu;
            // 0x39c25c: 0x240518a9  addiu       $a1, $zero, 0x18A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6313));
        ctx->pc = 0x39C260u;
        goto label_39c260;
    }
    ctx->pc = 0x39C258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C260u);
        ctx->pc = 0x39C25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C258u;
            // 0x39c25c: 0x240518a9  addiu       $a1, $zero, 0x18A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6313));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C260u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C260u; }
            if (ctx->pc != 0x39C260u) { return; }
        }
        }
    }
    ctx->pc = 0x39C260u;
label_39c260:
    // 0x39c260: 0x10000006  b           . + 4 + (0x6 << 2)
label_39c264:
    if (ctx->pc == 0x39C264u) {
        ctx->pc = 0x39C268u;
        goto label_39c268;
    }
    ctx->pc = 0x39C260u;
    {
        const bool branch_taken_0x39c260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c260) {
            ctx->pc = 0x39C27Cu;
            goto label_39c27c;
        }
    }
    ctx->pc = 0x39C268u;
label_39c268:
    // 0x39c268: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x39c268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_39c26c:
    // 0x39c26c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x39c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_39c270:
    // 0x39c270: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39c270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39c274:
    // 0x39c274: 0x320f809  jalr        $t9
label_39c278:
    if (ctx->pc == 0x39C278u) {
        ctx->pc = 0x39C278u;
            // 0x39c278: 0x344519a9  ori         $a1, $v0, 0x19A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6569);
        ctx->pc = 0x39C27Cu;
        goto label_39c27c;
    }
    ctx->pc = 0x39C274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C27Cu);
        ctx->pc = 0x39C278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C274u;
            // 0x39c278: 0x344519a9  ori         $a1, $v0, 0x19A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6569);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C27Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C27Cu; }
            if (ctx->pc != 0x39C27Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39C27Cu;
label_39c27c:
    // 0x39c27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c280:
    // 0x39c280: 0x3e00008  jr          $ra
label_39c284:
    if (ctx->pc == 0x39C284u) {
        ctx->pc = 0x39C284u;
            // 0x39c284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x39C288u;
        goto label_39c288;
    }
    ctx->pc = 0x39C280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C280u;
            // 0x39c284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39C288u;
label_39c288:
    // 0x39c288: 0x0  nop
    ctx->pc = 0x39c288u;
    // NOP
label_39c28c:
    // 0x39c28c: 0x0  nop
    ctx->pc = 0x39c28cu;
    // NOP
label_39c290:
    // 0x39c290: 0x3e00008  jr          $ra
label_39c294:
    if (ctx->pc == 0x39C294u) {
        ctx->pc = 0x39C298u;
        goto label_39c298;
    }
    ctx->pc = 0x39C290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39C298u;
label_39c298:
    // 0x39c298: 0x0  nop
    ctx->pc = 0x39c298u;
    // NOP
label_39c29c:
    // 0x39c29c: 0x0  nop
    ctx->pc = 0x39c29cu;
    // NOP
label_39c2a0:
    // 0x39c2a0: 0x3e00008  jr          $ra
label_39c2a4:
    if (ctx->pc == 0x39C2A4u) {
        ctx->pc = 0x39C2A4u;
            // 0x39c2a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x39C2A8u;
        goto label_39c2a8;
    }
    ctx->pc = 0x39C2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C2A0u;
            // 0x39c2a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39C2A8u;
label_39c2a8:
    // 0x39c2a8: 0x0  nop
    ctx->pc = 0x39c2a8u;
    // NOP
label_39c2ac:
    // 0x39c2ac: 0x0  nop
    ctx->pc = 0x39c2acu;
    // NOP
}
