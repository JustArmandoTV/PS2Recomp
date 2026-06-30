#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035EE80
// Address: 0x35ee80 - 0x35f2e0
void sub_0035EE80_0x35ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EE80_0x35ee80");
#endif

    switch (ctx->pc) {
        case 0x35ee80u: goto label_35ee80;
        case 0x35ee84u: goto label_35ee84;
        case 0x35ee88u: goto label_35ee88;
        case 0x35ee8cu: goto label_35ee8c;
        case 0x35ee90u: goto label_35ee90;
        case 0x35ee94u: goto label_35ee94;
        case 0x35ee98u: goto label_35ee98;
        case 0x35ee9cu: goto label_35ee9c;
        case 0x35eea0u: goto label_35eea0;
        case 0x35eea4u: goto label_35eea4;
        case 0x35eea8u: goto label_35eea8;
        case 0x35eeacu: goto label_35eeac;
        case 0x35eeb0u: goto label_35eeb0;
        case 0x35eeb4u: goto label_35eeb4;
        case 0x35eeb8u: goto label_35eeb8;
        case 0x35eebcu: goto label_35eebc;
        case 0x35eec0u: goto label_35eec0;
        case 0x35eec4u: goto label_35eec4;
        case 0x35eec8u: goto label_35eec8;
        case 0x35eeccu: goto label_35eecc;
        case 0x35eed0u: goto label_35eed0;
        case 0x35eed4u: goto label_35eed4;
        case 0x35eed8u: goto label_35eed8;
        case 0x35eedcu: goto label_35eedc;
        case 0x35eee0u: goto label_35eee0;
        case 0x35eee4u: goto label_35eee4;
        case 0x35eee8u: goto label_35eee8;
        case 0x35eeecu: goto label_35eeec;
        case 0x35eef0u: goto label_35eef0;
        case 0x35eef4u: goto label_35eef4;
        case 0x35eef8u: goto label_35eef8;
        case 0x35eefcu: goto label_35eefc;
        case 0x35ef00u: goto label_35ef00;
        case 0x35ef04u: goto label_35ef04;
        case 0x35ef08u: goto label_35ef08;
        case 0x35ef0cu: goto label_35ef0c;
        case 0x35ef10u: goto label_35ef10;
        case 0x35ef14u: goto label_35ef14;
        case 0x35ef18u: goto label_35ef18;
        case 0x35ef1cu: goto label_35ef1c;
        case 0x35ef20u: goto label_35ef20;
        case 0x35ef24u: goto label_35ef24;
        case 0x35ef28u: goto label_35ef28;
        case 0x35ef2cu: goto label_35ef2c;
        case 0x35ef30u: goto label_35ef30;
        case 0x35ef34u: goto label_35ef34;
        case 0x35ef38u: goto label_35ef38;
        case 0x35ef3cu: goto label_35ef3c;
        case 0x35ef40u: goto label_35ef40;
        case 0x35ef44u: goto label_35ef44;
        case 0x35ef48u: goto label_35ef48;
        case 0x35ef4cu: goto label_35ef4c;
        case 0x35ef50u: goto label_35ef50;
        case 0x35ef54u: goto label_35ef54;
        case 0x35ef58u: goto label_35ef58;
        case 0x35ef5cu: goto label_35ef5c;
        case 0x35ef60u: goto label_35ef60;
        case 0x35ef64u: goto label_35ef64;
        case 0x35ef68u: goto label_35ef68;
        case 0x35ef6cu: goto label_35ef6c;
        case 0x35ef70u: goto label_35ef70;
        case 0x35ef74u: goto label_35ef74;
        case 0x35ef78u: goto label_35ef78;
        case 0x35ef7cu: goto label_35ef7c;
        case 0x35ef80u: goto label_35ef80;
        case 0x35ef84u: goto label_35ef84;
        case 0x35ef88u: goto label_35ef88;
        case 0x35ef8cu: goto label_35ef8c;
        case 0x35ef90u: goto label_35ef90;
        case 0x35ef94u: goto label_35ef94;
        case 0x35ef98u: goto label_35ef98;
        case 0x35ef9cu: goto label_35ef9c;
        case 0x35efa0u: goto label_35efa0;
        case 0x35efa4u: goto label_35efa4;
        case 0x35efa8u: goto label_35efa8;
        case 0x35efacu: goto label_35efac;
        case 0x35efb0u: goto label_35efb0;
        case 0x35efb4u: goto label_35efb4;
        case 0x35efb8u: goto label_35efb8;
        case 0x35efbcu: goto label_35efbc;
        case 0x35efc0u: goto label_35efc0;
        case 0x35efc4u: goto label_35efc4;
        case 0x35efc8u: goto label_35efc8;
        case 0x35efccu: goto label_35efcc;
        case 0x35efd0u: goto label_35efd0;
        case 0x35efd4u: goto label_35efd4;
        case 0x35efd8u: goto label_35efd8;
        case 0x35efdcu: goto label_35efdc;
        case 0x35efe0u: goto label_35efe0;
        case 0x35efe4u: goto label_35efe4;
        case 0x35efe8u: goto label_35efe8;
        case 0x35efecu: goto label_35efec;
        case 0x35eff0u: goto label_35eff0;
        case 0x35eff4u: goto label_35eff4;
        case 0x35eff8u: goto label_35eff8;
        case 0x35effcu: goto label_35effc;
        case 0x35f000u: goto label_35f000;
        case 0x35f004u: goto label_35f004;
        case 0x35f008u: goto label_35f008;
        case 0x35f00cu: goto label_35f00c;
        case 0x35f010u: goto label_35f010;
        case 0x35f014u: goto label_35f014;
        case 0x35f018u: goto label_35f018;
        case 0x35f01cu: goto label_35f01c;
        case 0x35f020u: goto label_35f020;
        case 0x35f024u: goto label_35f024;
        case 0x35f028u: goto label_35f028;
        case 0x35f02cu: goto label_35f02c;
        case 0x35f030u: goto label_35f030;
        case 0x35f034u: goto label_35f034;
        case 0x35f038u: goto label_35f038;
        case 0x35f03cu: goto label_35f03c;
        case 0x35f040u: goto label_35f040;
        case 0x35f044u: goto label_35f044;
        case 0x35f048u: goto label_35f048;
        case 0x35f04cu: goto label_35f04c;
        case 0x35f050u: goto label_35f050;
        case 0x35f054u: goto label_35f054;
        case 0x35f058u: goto label_35f058;
        case 0x35f05cu: goto label_35f05c;
        case 0x35f060u: goto label_35f060;
        case 0x35f064u: goto label_35f064;
        case 0x35f068u: goto label_35f068;
        case 0x35f06cu: goto label_35f06c;
        case 0x35f070u: goto label_35f070;
        case 0x35f074u: goto label_35f074;
        case 0x35f078u: goto label_35f078;
        case 0x35f07cu: goto label_35f07c;
        case 0x35f080u: goto label_35f080;
        case 0x35f084u: goto label_35f084;
        case 0x35f088u: goto label_35f088;
        case 0x35f08cu: goto label_35f08c;
        case 0x35f090u: goto label_35f090;
        case 0x35f094u: goto label_35f094;
        case 0x35f098u: goto label_35f098;
        case 0x35f09cu: goto label_35f09c;
        case 0x35f0a0u: goto label_35f0a0;
        case 0x35f0a4u: goto label_35f0a4;
        case 0x35f0a8u: goto label_35f0a8;
        case 0x35f0acu: goto label_35f0ac;
        case 0x35f0b0u: goto label_35f0b0;
        case 0x35f0b4u: goto label_35f0b4;
        case 0x35f0b8u: goto label_35f0b8;
        case 0x35f0bcu: goto label_35f0bc;
        case 0x35f0c0u: goto label_35f0c0;
        case 0x35f0c4u: goto label_35f0c4;
        case 0x35f0c8u: goto label_35f0c8;
        case 0x35f0ccu: goto label_35f0cc;
        case 0x35f0d0u: goto label_35f0d0;
        case 0x35f0d4u: goto label_35f0d4;
        case 0x35f0d8u: goto label_35f0d8;
        case 0x35f0dcu: goto label_35f0dc;
        case 0x35f0e0u: goto label_35f0e0;
        case 0x35f0e4u: goto label_35f0e4;
        case 0x35f0e8u: goto label_35f0e8;
        case 0x35f0ecu: goto label_35f0ec;
        case 0x35f0f0u: goto label_35f0f0;
        case 0x35f0f4u: goto label_35f0f4;
        case 0x35f0f8u: goto label_35f0f8;
        case 0x35f0fcu: goto label_35f0fc;
        case 0x35f100u: goto label_35f100;
        case 0x35f104u: goto label_35f104;
        case 0x35f108u: goto label_35f108;
        case 0x35f10cu: goto label_35f10c;
        case 0x35f110u: goto label_35f110;
        case 0x35f114u: goto label_35f114;
        case 0x35f118u: goto label_35f118;
        case 0x35f11cu: goto label_35f11c;
        case 0x35f120u: goto label_35f120;
        case 0x35f124u: goto label_35f124;
        case 0x35f128u: goto label_35f128;
        case 0x35f12cu: goto label_35f12c;
        case 0x35f130u: goto label_35f130;
        case 0x35f134u: goto label_35f134;
        case 0x35f138u: goto label_35f138;
        case 0x35f13cu: goto label_35f13c;
        case 0x35f140u: goto label_35f140;
        case 0x35f144u: goto label_35f144;
        case 0x35f148u: goto label_35f148;
        case 0x35f14cu: goto label_35f14c;
        case 0x35f150u: goto label_35f150;
        case 0x35f154u: goto label_35f154;
        case 0x35f158u: goto label_35f158;
        case 0x35f15cu: goto label_35f15c;
        case 0x35f160u: goto label_35f160;
        case 0x35f164u: goto label_35f164;
        case 0x35f168u: goto label_35f168;
        case 0x35f16cu: goto label_35f16c;
        case 0x35f170u: goto label_35f170;
        case 0x35f174u: goto label_35f174;
        case 0x35f178u: goto label_35f178;
        case 0x35f17cu: goto label_35f17c;
        case 0x35f180u: goto label_35f180;
        case 0x35f184u: goto label_35f184;
        case 0x35f188u: goto label_35f188;
        case 0x35f18cu: goto label_35f18c;
        case 0x35f190u: goto label_35f190;
        case 0x35f194u: goto label_35f194;
        case 0x35f198u: goto label_35f198;
        case 0x35f19cu: goto label_35f19c;
        case 0x35f1a0u: goto label_35f1a0;
        case 0x35f1a4u: goto label_35f1a4;
        case 0x35f1a8u: goto label_35f1a8;
        case 0x35f1acu: goto label_35f1ac;
        case 0x35f1b0u: goto label_35f1b0;
        case 0x35f1b4u: goto label_35f1b4;
        case 0x35f1b8u: goto label_35f1b8;
        case 0x35f1bcu: goto label_35f1bc;
        case 0x35f1c0u: goto label_35f1c0;
        case 0x35f1c4u: goto label_35f1c4;
        case 0x35f1c8u: goto label_35f1c8;
        case 0x35f1ccu: goto label_35f1cc;
        case 0x35f1d0u: goto label_35f1d0;
        case 0x35f1d4u: goto label_35f1d4;
        case 0x35f1d8u: goto label_35f1d8;
        case 0x35f1dcu: goto label_35f1dc;
        case 0x35f1e0u: goto label_35f1e0;
        case 0x35f1e4u: goto label_35f1e4;
        case 0x35f1e8u: goto label_35f1e8;
        case 0x35f1ecu: goto label_35f1ec;
        case 0x35f1f0u: goto label_35f1f0;
        case 0x35f1f4u: goto label_35f1f4;
        case 0x35f1f8u: goto label_35f1f8;
        case 0x35f1fcu: goto label_35f1fc;
        case 0x35f200u: goto label_35f200;
        case 0x35f204u: goto label_35f204;
        case 0x35f208u: goto label_35f208;
        case 0x35f20cu: goto label_35f20c;
        case 0x35f210u: goto label_35f210;
        case 0x35f214u: goto label_35f214;
        case 0x35f218u: goto label_35f218;
        case 0x35f21cu: goto label_35f21c;
        case 0x35f220u: goto label_35f220;
        case 0x35f224u: goto label_35f224;
        case 0x35f228u: goto label_35f228;
        case 0x35f22cu: goto label_35f22c;
        case 0x35f230u: goto label_35f230;
        case 0x35f234u: goto label_35f234;
        case 0x35f238u: goto label_35f238;
        case 0x35f23cu: goto label_35f23c;
        case 0x35f240u: goto label_35f240;
        case 0x35f244u: goto label_35f244;
        case 0x35f248u: goto label_35f248;
        case 0x35f24cu: goto label_35f24c;
        case 0x35f250u: goto label_35f250;
        case 0x35f254u: goto label_35f254;
        case 0x35f258u: goto label_35f258;
        case 0x35f25cu: goto label_35f25c;
        case 0x35f260u: goto label_35f260;
        case 0x35f264u: goto label_35f264;
        case 0x35f268u: goto label_35f268;
        case 0x35f26cu: goto label_35f26c;
        case 0x35f270u: goto label_35f270;
        case 0x35f274u: goto label_35f274;
        case 0x35f278u: goto label_35f278;
        case 0x35f27cu: goto label_35f27c;
        case 0x35f280u: goto label_35f280;
        case 0x35f284u: goto label_35f284;
        case 0x35f288u: goto label_35f288;
        case 0x35f28cu: goto label_35f28c;
        case 0x35f290u: goto label_35f290;
        case 0x35f294u: goto label_35f294;
        case 0x35f298u: goto label_35f298;
        case 0x35f29cu: goto label_35f29c;
        case 0x35f2a0u: goto label_35f2a0;
        case 0x35f2a4u: goto label_35f2a4;
        case 0x35f2a8u: goto label_35f2a8;
        case 0x35f2acu: goto label_35f2ac;
        case 0x35f2b0u: goto label_35f2b0;
        case 0x35f2b4u: goto label_35f2b4;
        case 0x35f2b8u: goto label_35f2b8;
        case 0x35f2bcu: goto label_35f2bc;
        case 0x35f2c0u: goto label_35f2c0;
        case 0x35f2c4u: goto label_35f2c4;
        case 0x35f2c8u: goto label_35f2c8;
        case 0x35f2ccu: goto label_35f2cc;
        case 0x35f2d0u: goto label_35f2d0;
        case 0x35f2d4u: goto label_35f2d4;
        case 0x35f2d8u: goto label_35f2d8;
        case 0x35f2dcu: goto label_35f2dc;
        default: break;
    }

    ctx->pc = 0x35ee80u;

label_35ee80:
    // 0x35ee80: 0x3e00008  jr          $ra
label_35ee84:
    if (ctx->pc == 0x35EE84u) {
        ctx->pc = 0x35EE84u;
            // 0x35ee84: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x35EE88u;
        goto label_35ee88;
    }
    ctx->pc = 0x35EE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EE80u;
            // 0x35ee84: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35EE88u;
label_35ee88:
    // 0x35ee88: 0x0  nop
    ctx->pc = 0x35ee88u;
    // NOP
label_35ee8c:
    // 0x35ee8c: 0x0  nop
    ctx->pc = 0x35ee8cu;
    // NOP
label_35ee90:
    // 0x35ee90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_35ee94:
    // 0x35ee94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35ee98:
    // 0x35ee98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35ee9c:
    // 0x35ee9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35ee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35eea0:
    // 0x35eea0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35eea4:
    // 0x35eea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35eea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35eea8:
    // 0x35eea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35eea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35eeac:
    // 0x35eeac: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x35eeacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_35eeb0:
    // 0x35eeb0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_35eeb4:
    if (ctx->pc == 0x35EEB4u) {
        ctx->pc = 0x35EEB4u;
            // 0x35eeb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EEB8u;
        goto label_35eeb8;
    }
    ctx->pc = 0x35EEB0u;
    {
        const bool branch_taken_0x35eeb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35EEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EEB0u;
            // 0x35eeb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eeb0) {
            ctx->pc = 0x35EEE4u;
            goto label_35eee4;
        }
    }
    ctx->pc = 0x35EEB8u;
label_35eeb8:
    // 0x35eeb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35eebc:
    // 0x35eebc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_35eec0:
    if (ctx->pc == 0x35EEC0u) {
        ctx->pc = 0x35EEC0u;
            // 0x35eec0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x35EEC4u;
        goto label_35eec4;
    }
    ctx->pc = 0x35EEBCu;
    {
        const bool branch_taken_0x35eebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35eebc) {
            ctx->pc = 0x35EEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35EEBCu;
            // 0x35eec0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35EED8u;
            goto label_35eed8;
        }
    }
    ctx->pc = 0x35EEC4u;
label_35eec4:
    // 0x35eec4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35eec8:
    // 0x35eec8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_35eecc:
    if (ctx->pc == 0x35EECCu) {
        ctx->pc = 0x35EED0u;
        goto label_35eed0;
    }
    ctx->pc = 0x35EEC8u;
    {
        const bool branch_taken_0x35eec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35eec8) {
            ctx->pc = 0x35EF18u;
            goto label_35ef18;
        }
    }
    ctx->pc = 0x35EED0u;
label_35eed0:
    // 0x35eed0: 0x10000011  b           . + 4 + (0x11 << 2)
label_35eed4:
    if (ctx->pc == 0x35EED4u) {
        ctx->pc = 0x35EED8u;
        goto label_35eed8;
    }
    ctx->pc = 0x35EED0u;
    {
        const bool branch_taken_0x35eed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35eed0) {
            ctx->pc = 0x35EF18u;
            goto label_35ef18;
        }
    }
    ctx->pc = 0x35EED8u;
label_35eed8:
    // 0x35eed8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x35eed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_35eedc:
    // 0x35eedc: 0x320f809  jalr        $t9
label_35eee0:
    if (ctx->pc == 0x35EEE0u) {
        ctx->pc = 0x35EEE4u;
        goto label_35eee4;
    }
    ctx->pc = 0x35EEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35EEE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35EEE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35EEE4u; }
            if (ctx->pc != 0x35EEE4u) { return; }
        }
        }
    }
    ctx->pc = 0x35EEE4u;
label_35eee4:
    // 0x35eee4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x35eee4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_35eee8:
    // 0x35eee8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_35eeec:
    if (ctx->pc == 0x35EEECu) {
        ctx->pc = 0x35EEF0u;
        goto label_35eef0;
    }
    ctx->pc = 0x35EEE8u;
    {
        const bool branch_taken_0x35eee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35eee8) {
            ctx->pc = 0x35EF18u;
            goto label_35ef18;
        }
    }
    ctx->pc = 0x35EEF0u;
label_35eef0:
    // 0x35eef0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35eef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35eef4:
    // 0x35eef4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35eef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35eef8:
    // 0x35eef8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x35eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_35eefc:
    // 0x35eefc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_35ef00:
    // 0x35ef00: 0xc0d7d48  jal         func_35F520
label_35ef04:
    if (ctx->pc == 0x35EF04u) {
        ctx->pc = 0x35EF04u;
            // 0x35ef04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x35EF08u;
        goto label_35ef08;
    }
    ctx->pc = 0x35EF00u;
    SET_GPR_U32(ctx, 31, 0x35EF08u);
    ctx->pc = 0x35EF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EF00u;
            // 0x35ef04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35F520u;
    if (runtime->hasFunction(0x35F520u)) {
        auto targetFn = runtime->lookupFunction(0x35F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EF08u; }
        if (ctx->pc != 0x35EF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035F520_0x35f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EF08u; }
        if (ctx->pc != 0x35EF08u) { return; }
    }
    ctx->pc = 0x35EF08u;
label_35ef08:
    // 0x35ef08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35ef08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_35ef0c:
    // 0x35ef0c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x35ef0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_35ef10:
    // 0x35ef10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_35ef14:
    if (ctx->pc == 0x35EF14u) {
        ctx->pc = 0x35EF14u;
            // 0x35ef14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x35EF18u;
        goto label_35ef18;
    }
    ctx->pc = 0x35EF10u;
    {
        const bool branch_taken_0x35ef10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EF10u;
            // 0x35ef14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef10) {
            ctx->pc = 0x35EEF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35eef8;
        }
    }
    ctx->pc = 0x35EF18u;
label_35ef18:
    // 0x35ef18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35ef18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35ef1c:
    // 0x35ef1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35ef1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35ef20:
    // 0x35ef20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35ef20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35ef24:
    // 0x35ef24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ef24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35ef28:
    // 0x35ef28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ef28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35ef2c:
    // 0x35ef2c: 0x3e00008  jr          $ra
label_35ef30:
    if (ctx->pc == 0x35EF30u) {
        ctx->pc = 0x35EF30u;
            // 0x35ef30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x35EF34u;
        goto label_35ef34;
    }
    ctx->pc = 0x35EF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EF2Cu;
            // 0x35ef30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35EF34u;
label_35ef34:
    // 0x35ef34: 0x0  nop
    ctx->pc = 0x35ef34u;
    // NOP
label_35ef38:
    // 0x35ef38: 0x0  nop
    ctx->pc = 0x35ef38u;
    // NOP
label_35ef3c:
    // 0x35ef3c: 0x0  nop
    ctx->pc = 0x35ef3cu;
    // NOP
label_35ef40:
    // 0x35ef40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_35ef44:
    // 0x35ef44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_35ef48:
    // 0x35ef48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ef48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35ef4c:
    // 0x35ef4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35ef50:
    // 0x35ef50: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35ef50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35ef54:
    // 0x35ef54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ef54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35ef58:
    // 0x35ef58: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x35ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_35ef5c:
    // 0x35ef5c: 0x106000d7  beqz        $v1, . + 4 + (0xD7 << 2)
label_35ef60:
    if (ctx->pc == 0x35EF60u) {
        ctx->pc = 0x35EF60u;
            // 0x35ef60: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x35EF64u;
        goto label_35ef64;
    }
    ctx->pc = 0x35EF5Cu;
    {
        const bool branch_taken_0x35ef5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EF5Cu;
            // 0x35ef60: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef5c) {
            ctx->pc = 0x35F2BCu;
            goto label_35f2bc;
        }
    }
    ctx->pc = 0x35EF64u;
label_35ef64:
    // 0x35ef64: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35ef68:
    // 0x35ef68: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x35ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_35ef6c:
    // 0x35ef6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35ef6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35ef70:
    // 0x35ef70: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x35ef70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_35ef74:
    // 0x35ef74: 0x320f809  jalr        $t9
label_35ef78:
    if (ctx->pc == 0x35EF78u) {
        ctx->pc = 0x35EF7Cu;
        goto label_35ef7c;
    }
    ctx->pc = 0x35EF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35EF7Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35EF7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35EF7Cu; }
            if (ctx->pc != 0x35EF7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35EF7Cu;
label_35ef7c:
    // 0x35ef7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35ef7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ef80:
    // 0x35ef80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35ef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35ef84:
    // 0x35ef84: 0xc075128  jal         func_1D44A0
label_35ef88:
    if (ctx->pc == 0x35EF88u) {
        ctx->pc = 0x35EF88u;
            // 0x35ef88: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x35EF8Cu;
        goto label_35ef8c;
    }
    ctx->pc = 0x35EF84u;
    SET_GPR_U32(ctx, 31, 0x35EF8Cu);
    ctx->pc = 0x35EF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EF84u;
            // 0x35ef88: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EF8Cu; }
        if (ctx->pc != 0x35EF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EF8Cu; }
        if (ctx->pc != 0x35EF8Cu) { return; }
    }
    ctx->pc = 0x35EF8Cu;
label_35ef8c:
    // 0x35ef8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35ef90:
    // 0x35ef90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35ef94:
    // 0x35ef94: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x35ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_35ef98:
    // 0x35ef98: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x35ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_35ef9c:
    // 0x35ef9c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35ef9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35efa0:
    // 0x35efa0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35efa4:
    if (ctx->pc == 0x35EFA4u) {
        ctx->pc = 0x35EFA4u;
            // 0x35efa4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x35EFA8u;
        goto label_35efa8;
    }
    ctx->pc = 0x35EFA0u;
    {
        const bool branch_taken_0x35efa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35efa0) {
            ctx->pc = 0x35EFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35EFA0u;
            // 0x35efa4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35EFB4u;
            goto label_35efb4;
        }
    }
    ctx->pc = 0x35EFA8u;
label_35efa8:
    // 0x35efa8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35efac:
    // 0x35efac: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x35efacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_35efb0:
    // 0x35efb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35efb4:
    // 0x35efb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35efb8:
    // 0x35efb8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x35efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_35efbc:
    // 0x35efbc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x35efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35efc0:
    // 0x35efc0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35efc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35efc4:
    // 0x35efc4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35efc8:
    if (ctx->pc == 0x35EFC8u) {
        ctx->pc = 0x35EFC8u;
            // 0x35efc8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x35EFCCu;
        goto label_35efcc;
    }
    ctx->pc = 0x35EFC4u;
    {
        const bool branch_taken_0x35efc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35efc4) {
            ctx->pc = 0x35EFC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35EFC4u;
            // 0x35efc8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35EFD8u;
            goto label_35efd8;
        }
    }
    ctx->pc = 0x35EFCCu;
label_35efcc:
    // 0x35efcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35efccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35efd0:
    // 0x35efd0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x35efd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_35efd4:
    // 0x35efd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35efd8:
    // 0x35efd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35efdc:
    // 0x35efdc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x35efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_35efe0:
    // 0x35efe0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x35efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35efe4:
    // 0x35efe4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35efe4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35efe8:
    // 0x35efe8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35efec:
    if (ctx->pc == 0x35EFECu) {
        ctx->pc = 0x35EFECu;
            // 0x35efec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x35EFF0u;
        goto label_35eff0;
    }
    ctx->pc = 0x35EFE8u;
    {
        const bool branch_taken_0x35efe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35efe8) {
            ctx->pc = 0x35EFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35EFE8u;
            // 0x35efec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35EFFCu;
            goto label_35effc;
        }
    }
    ctx->pc = 0x35EFF0u;
label_35eff0:
    // 0x35eff0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35eff4:
    // 0x35eff4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x35eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_35eff8:
    // 0x35eff8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35effc:
    // 0x35effc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35effcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f000:
    // 0x35f000: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x35f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_35f004:
    // 0x35f004: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x35f004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35f008:
    // 0x35f008: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x35f008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_35f00c:
    // 0x35f00c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35f00cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35f010:
    // 0x35f010: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f014:
    if (ctx->pc == 0x35F014u) {
        ctx->pc = 0x35F014u;
            // 0x35f014: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x35F018u;
        goto label_35f018;
    }
    ctx->pc = 0x35F010u;
    {
        const bool branch_taken_0x35f010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f010) {
            ctx->pc = 0x35F014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F010u;
            // 0x35f014: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F024u;
            goto label_35f024;
        }
    }
    ctx->pc = 0x35F018u;
label_35f018:
    // 0x35f018: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f01c:
    // 0x35f01c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x35f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_35f020:
    // 0x35f020: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35f024:
    // 0x35f024: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f028:
    // 0x35f028: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x35f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_35f02c:
    // 0x35f02c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x35f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35f030:
    // 0x35f030: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x35f030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_35f034:
    // 0x35f034: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35f034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35f038:
    // 0x35f038: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f03c:
    if (ctx->pc == 0x35F03Cu) {
        ctx->pc = 0x35F03Cu;
            // 0x35f03c: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x35F040u;
        goto label_35f040;
    }
    ctx->pc = 0x35F038u;
    {
        const bool branch_taken_0x35f038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f038) {
            ctx->pc = 0x35F03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F038u;
            // 0x35f03c: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F04Cu;
            goto label_35f04c;
        }
    }
    ctx->pc = 0x35F040u;
label_35f040:
    // 0x35f040: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f044:
    // 0x35f044: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x35f044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_35f048:
    // 0x35f048: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x35f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_35f04c:
    // 0x35f04c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x35f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_35f050:
    // 0x35f050: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x35f050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_35f054:
    // 0x35f054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f058:
    // 0x35f058: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35f05c:
    // 0x35f05c: 0xc074f30  jal         func_1D3CC0
label_35f060:
    if (ctx->pc == 0x35F060u) {
        ctx->pc = 0x35F060u;
            // 0x35f060: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x35F064u;
        goto label_35f064;
    }
    ctx->pc = 0x35F05Cu;
    SET_GPR_U32(ctx, 31, 0x35F064u);
    ctx->pc = 0x35F060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F05Cu;
            // 0x35f060: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F064u; }
        if (ctx->pc != 0x35F064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F064u; }
        if (ctx->pc != 0x35F064u) { return; }
    }
    ctx->pc = 0x35F064u;
label_35f064:
    // 0x35f064: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x35f064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_35f068:
    // 0x35f068: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x35f068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_35f06c:
    // 0x35f06c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f070:
    // 0x35f070: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x35f070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_35f074:
    // 0x35f074: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x35f074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_35f078:
    // 0x35f078: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_35f07c:
    // 0x35f07c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x35f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_35f080:
    // 0x35f080: 0xc0751b8  jal         func_1D46E0
label_35f084:
    if (ctx->pc == 0x35F084u) {
        ctx->pc = 0x35F084u;
            // 0x35f084: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x35F088u;
        goto label_35f088;
    }
    ctx->pc = 0x35F080u;
    SET_GPR_U32(ctx, 31, 0x35F088u);
    ctx->pc = 0x35F084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F080u;
            // 0x35f084: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F088u; }
        if (ctx->pc != 0x35F088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F088u; }
        if (ctx->pc != 0x35F088u) { return; }
    }
    ctx->pc = 0x35F088u;
label_35f088:
    // 0x35f088: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x35f088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_35f08c:
    // 0x35f08c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x35f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_35f090:
    // 0x35f090: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x35f090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_35f094:
    // 0x35f094: 0x26260034  addiu       $a2, $s1, 0x34
    ctx->pc = 0x35f094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_35f098:
    // 0x35f098: 0x26270038  addiu       $a3, $s1, 0x38
    ctx->pc = 0x35f098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_35f09c:
    // 0x35f09c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x35f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_35f0a0:
    // 0x35f0a0: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x35f0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_35f0a4:
    // 0x35f0a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_35f0a8:
    // 0x35f0a8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x35f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_35f0ac:
    // 0x35f0ac: 0xc075188  jal         func_1D4620
label_35f0b0:
    if (ctx->pc == 0x35F0B0u) {
        ctx->pc = 0x35F0B0u;
            // 0x35f0b0: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x35F0B4u;
        goto label_35f0b4;
    }
    ctx->pc = 0x35F0ACu;
    SET_GPR_U32(ctx, 31, 0x35F0B4u);
    ctx->pc = 0x35F0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F0ACu;
            // 0x35f0b0: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F0B4u; }
        if (ctx->pc != 0x35F0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F0B4u; }
        if (ctx->pc != 0x35F0B4u) { return; }
    }
    ctx->pc = 0x35F0B4u;
label_35f0b4:
    // 0x35f0b4: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x35f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_35f0b8:
    // 0x35f0b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f0bc:
    // 0x35f0bc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x35f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_35f0c0:
    // 0x35f0c0: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x35f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_35f0c4:
    // 0x35f0c4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x35f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_35f0c8:
    // 0x35f0c8: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x35f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_35f0cc:
    // 0x35f0cc: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x35f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_35f0d0:
    // 0x35f0d0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35f0d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35f0d4:
    // 0x35f0d4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f0d8:
    if (ctx->pc == 0x35F0D8u) {
        ctx->pc = 0x35F0D8u;
            // 0x35f0d8: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x35F0DCu;
        goto label_35f0dc;
    }
    ctx->pc = 0x35F0D4u;
    {
        const bool branch_taken_0x35f0d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f0d4) {
            ctx->pc = 0x35F0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F0D4u;
            // 0x35f0d8: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F0E8u;
            goto label_35f0e8;
        }
    }
    ctx->pc = 0x35F0DCu;
label_35f0dc:
    // 0x35f0dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f0e0:
    // 0x35f0e0: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x35f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_35f0e4:
    // 0x35f0e4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x35f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_35f0e8:
    // 0x35f0e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f0ec:
    // 0x35f0ec: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x35f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_35f0f0:
    // 0x35f0f0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x35f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35f0f4:
    // 0x35f0f4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35f0f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35f0f8:
    // 0x35f0f8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f0fc:
    if (ctx->pc == 0x35F0FCu) {
        ctx->pc = 0x35F0FCu;
            // 0x35f0fc: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x35F100u;
        goto label_35f100;
    }
    ctx->pc = 0x35F0F8u;
    {
        const bool branch_taken_0x35f0f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f0f8) {
            ctx->pc = 0x35F0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F0F8u;
            // 0x35f0fc: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F10Cu;
            goto label_35f10c;
        }
    }
    ctx->pc = 0x35F100u;
label_35f100:
    // 0x35f100: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f104:
    // 0x35f104: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x35f104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_35f108:
    // 0x35f108: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x35f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_35f10c:
    // 0x35f10c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f110:
    // 0x35f110: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x35f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_35f114:
    // 0x35f114: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x35f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35f118:
    // 0x35f118: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35f118u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35f11c:
    // 0x35f11c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f120:
    if (ctx->pc == 0x35F120u) {
        ctx->pc = 0x35F120u;
            // 0x35f120: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x35F124u;
        goto label_35f124;
    }
    ctx->pc = 0x35F11Cu;
    {
        const bool branch_taken_0x35f11c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f11c) {
            ctx->pc = 0x35F120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F11Cu;
            // 0x35f120: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F130u;
            goto label_35f130;
        }
    }
    ctx->pc = 0x35F124u;
label_35f124:
    // 0x35f124: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f128:
    // 0x35f128: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x35f128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_35f12c:
    // 0x35f12c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x35f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_35f130:
    // 0x35f130: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f134:
    // 0x35f134: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x35f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_35f138:
    // 0x35f138: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x35f138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35f13c:
    // 0x35f13c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x35f13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_35f140:
    // 0x35f140: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35f140u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35f144:
    // 0x35f144: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f148:
    if (ctx->pc == 0x35F148u) {
        ctx->pc = 0x35F148u;
            // 0x35f148: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x35F14Cu;
        goto label_35f14c;
    }
    ctx->pc = 0x35F144u;
    {
        const bool branch_taken_0x35f144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f144) {
            ctx->pc = 0x35F148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F144u;
            // 0x35f148: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F158u;
            goto label_35f158;
        }
    }
    ctx->pc = 0x35F14Cu;
label_35f14c:
    // 0x35f14c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f150:
    // 0x35f150: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x35f150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_35f154:
    // 0x35f154: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x35f154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_35f158:
    // 0x35f158: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f15c:
    // 0x35f15c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x35f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_35f160:
    // 0x35f160: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x35f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35f164:
    // 0x35f164: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x35f164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_35f168:
    // 0x35f168: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x35f168u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35f16c:
    // 0x35f16c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f170:
    if (ctx->pc == 0x35F170u) {
        ctx->pc = 0x35F170u;
            // 0x35f170: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x35F174u;
        goto label_35f174;
    }
    ctx->pc = 0x35F16Cu;
    {
        const bool branch_taken_0x35f16c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f16c) {
            ctx->pc = 0x35F170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F16Cu;
            // 0x35f170: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F180u;
            goto label_35f180;
        }
    }
    ctx->pc = 0x35F174u;
label_35f174:
    // 0x35f174: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35f174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35f178:
    // 0x35f178: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x35f178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_35f17c:
    // 0x35f17c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x35f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_35f180:
    // 0x35f180: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x35f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_35f184:
    // 0x35f184: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x35f184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_35f188:
    // 0x35f188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f18c:
    // 0x35f18c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35f190:
    // 0x35f190: 0xc074f30  jal         func_1D3CC0
label_35f194:
    if (ctx->pc == 0x35F194u) {
        ctx->pc = 0x35F194u;
            // 0x35f194: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x35F198u;
        goto label_35f198;
    }
    ctx->pc = 0x35F190u;
    SET_GPR_U32(ctx, 31, 0x35F198u);
    ctx->pc = 0x35F194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F190u;
            // 0x35f194: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F198u; }
        if (ctx->pc != 0x35F198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F198u; }
        if (ctx->pc != 0x35F198u) { return; }
    }
    ctx->pc = 0x35F198u;
label_35f198:
    // 0x35f198: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x35f198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_35f19c:
    // 0x35f19c: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x35f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_35f1a0:
    // 0x35f1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f1a4:
    // 0x35f1a4: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x35f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_35f1a8:
    // 0x35f1a8: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x35f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_35f1ac:
    // 0x35f1ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_35f1b0:
    // 0x35f1b0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x35f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_35f1b4:
    // 0x35f1b4: 0xc0751b8  jal         func_1D46E0
label_35f1b8:
    if (ctx->pc == 0x35F1B8u) {
        ctx->pc = 0x35F1B8u;
            // 0x35f1b8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x35F1BCu;
        goto label_35f1bc;
    }
    ctx->pc = 0x35F1B4u;
    SET_GPR_U32(ctx, 31, 0x35F1BCu);
    ctx->pc = 0x35F1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F1B4u;
            // 0x35f1b8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F1BCu; }
        if (ctx->pc != 0x35F1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F1BCu; }
        if (ctx->pc != 0x35F1BCu) { return; }
    }
    ctx->pc = 0x35F1BCu;
label_35f1bc:
    // 0x35f1bc: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x35f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_35f1c0:
    // 0x35f1c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f1c4:
    // 0x35f1c4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x35f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_35f1c8:
    // 0x35f1c8: 0xae440020  sw          $a0, 0x20($s2)
    ctx->pc = 0x35f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
label_35f1cc:
    // 0x35f1cc: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x35f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_35f1d0:
    // 0x35f1d0: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x35f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_35f1d4:
    // 0x35f1d4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x35f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_35f1d8:
    // 0x35f1d8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x35f1d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35f1dc:
    // 0x35f1dc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f1e0:
    if (ctx->pc == 0x35F1E0u) {
        ctx->pc = 0x35F1E0u;
            // 0x35f1e0: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x35F1E4u;
        goto label_35f1e4;
    }
    ctx->pc = 0x35F1DCu;
    {
        const bool branch_taken_0x35f1dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f1dc) {
            ctx->pc = 0x35F1E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F1DCu;
            // 0x35f1e0: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F1F0u;
            goto label_35f1f0;
        }
    }
    ctx->pc = 0x35F1E4u;
label_35f1e4:
    // 0x35f1e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f1e8:
    // 0x35f1e8: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x35f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_35f1ec:
    // 0x35f1ec: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x35f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_35f1f0:
    // 0x35f1f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f1f4:
    // 0x35f1f4: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x35f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_35f1f8:
    // 0x35f1f8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x35f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_35f1fc:
    // 0x35f1fc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x35f1fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35f200:
    // 0x35f200: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f204:
    if (ctx->pc == 0x35F204u) {
        ctx->pc = 0x35F204u;
            // 0x35f204: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x35F208u;
        goto label_35f208;
    }
    ctx->pc = 0x35F200u;
    {
        const bool branch_taken_0x35f200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f200) {
            ctx->pc = 0x35F204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F200u;
            // 0x35f204: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F214u;
            goto label_35f214;
        }
    }
    ctx->pc = 0x35F208u;
label_35f208:
    // 0x35f208: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f20c:
    // 0x35f20c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x35f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_35f210:
    // 0x35f210: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x35f210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_35f214:
    // 0x35f214: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f218:
    // 0x35f218: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x35f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_35f21c:
    // 0x35f21c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x35f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_35f220:
    // 0x35f220: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x35f220u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35f224:
    // 0x35f224: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f228:
    if (ctx->pc == 0x35F228u) {
        ctx->pc = 0x35F228u;
            // 0x35f228: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x35F22Cu;
        goto label_35f22c;
    }
    ctx->pc = 0x35F224u;
    {
        const bool branch_taken_0x35f224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f224) {
            ctx->pc = 0x35F228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F224u;
            // 0x35f228: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F238u;
            goto label_35f238;
        }
    }
    ctx->pc = 0x35F22Cu;
label_35f22c:
    // 0x35f22c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f230:
    // 0x35f230: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x35f230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_35f234:
    // 0x35f234: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x35f234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_35f238:
    // 0x35f238: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f23c:
    // 0x35f23c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x35f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_35f240:
    // 0x35f240: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x35f240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_35f244:
    // 0x35f244: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x35f244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_35f248:
    // 0x35f248: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x35f248u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35f24c:
    // 0x35f24c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f250:
    if (ctx->pc == 0x35F250u) {
        ctx->pc = 0x35F250u;
            // 0x35f250: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x35F254u;
        goto label_35f254;
    }
    ctx->pc = 0x35F24Cu;
    {
        const bool branch_taken_0x35f24c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f24c) {
            ctx->pc = 0x35F250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F24Cu;
            // 0x35f250: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F260u;
            goto label_35f260;
        }
    }
    ctx->pc = 0x35F254u;
label_35f254:
    // 0x35f254: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f258:
    // 0x35f258: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x35f258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_35f25c:
    // 0x35f25c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x35f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_35f260:
    // 0x35f260: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f264:
    // 0x35f264: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x35f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_35f268:
    // 0x35f268: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x35f268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_35f26c:
    // 0x35f26c: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x35f26cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_35f270:
    // 0x35f270: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x35f270u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35f274:
    // 0x35f274: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_35f278:
    if (ctx->pc == 0x35F278u) {
        ctx->pc = 0x35F27Cu;
        goto label_35f27c;
    }
    ctx->pc = 0x35F274u;
    {
        const bool branch_taken_0x35f274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f274) {
            ctx->pc = 0x35F284u;
            goto label_35f284;
        }
    }
    ctx->pc = 0x35F27Cu;
label_35f27c:
    // 0x35f27c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f280:
    // 0x35f280: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x35f280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_35f284:
    // 0x35f284: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f288:
    // 0x35f288: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x35f288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_35f28c:
    // 0x35f28c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x35f28cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_35f290:
    // 0x35f290: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_35f294:
    if (ctx->pc == 0x35F294u) {
        ctx->pc = 0x35F298u;
        goto label_35f298;
    }
    ctx->pc = 0x35F290u;
    {
        const bool branch_taken_0x35f290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f290) {
            ctx->pc = 0x35F2A0u;
            goto label_35f2a0;
        }
    }
    ctx->pc = 0x35F298u;
label_35f298:
    // 0x35f298: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f29c:
    // 0x35f29c: 0xac70e3c8  sw          $s0, -0x1C38($v1)
    ctx->pc = 0x35f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 16));
label_35f2a0:
    // 0x35f2a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f2a4:
    // 0x35f2a4: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x35f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_35f2a8:
    // 0x35f2a8: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x35f2a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_35f2ac:
    // 0x35f2ac: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_35f2b0:
    if (ctx->pc == 0x35F2B0u) {
        ctx->pc = 0x35F2B0u;
            // 0x35f2b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x35F2B4u;
        goto label_35f2b4;
    }
    ctx->pc = 0x35F2ACu;
    {
        const bool branch_taken_0x35f2ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f2ac) {
            ctx->pc = 0x35F2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F2ACu;
            // 0x35f2b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F2C0u;
            goto label_35f2c0;
        }
    }
    ctx->pc = 0x35F2B4u;
label_35f2b4:
    // 0x35f2b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35f2b8:
    // 0x35f2b8: 0xac70e3d0  sw          $s0, -0x1C30($v1)
    ctx->pc = 0x35f2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 16));
label_35f2bc:
    // 0x35f2bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35f2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35f2c0:
    // 0x35f2c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35f2c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35f2c4:
    // 0x35f2c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35f2c8:
    // 0x35f2c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35f2cc:
    // 0x35f2cc: 0x3e00008  jr          $ra
label_35f2d0:
    if (ctx->pc == 0x35F2D0u) {
        ctx->pc = 0x35F2D0u;
            // 0x35f2d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x35F2D4u;
        goto label_35f2d4;
    }
    ctx->pc = 0x35F2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F2CCu;
            // 0x35f2d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35F2D4u;
label_35f2d4:
    // 0x35f2d4: 0x0  nop
    ctx->pc = 0x35f2d4u;
    // NOP
label_35f2d8:
    // 0x35f2d8: 0x0  nop
    ctx->pc = 0x35f2d8u;
    // NOP
label_35f2dc:
    // 0x35f2dc: 0x0  nop
    ctx->pc = 0x35f2dcu;
    // NOP
}
