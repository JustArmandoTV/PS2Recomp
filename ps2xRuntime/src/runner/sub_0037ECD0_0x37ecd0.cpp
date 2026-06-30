#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037ECD0
// Address: 0x37ecd0 - 0x37f0c0
void sub_0037ECD0_0x37ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037ECD0_0x37ecd0");
#endif

    switch (ctx->pc) {
        case 0x37ecd0u: goto label_37ecd0;
        case 0x37ecd4u: goto label_37ecd4;
        case 0x37ecd8u: goto label_37ecd8;
        case 0x37ecdcu: goto label_37ecdc;
        case 0x37ece0u: goto label_37ece0;
        case 0x37ece4u: goto label_37ece4;
        case 0x37ece8u: goto label_37ece8;
        case 0x37ececu: goto label_37ecec;
        case 0x37ecf0u: goto label_37ecf0;
        case 0x37ecf4u: goto label_37ecf4;
        case 0x37ecf8u: goto label_37ecf8;
        case 0x37ecfcu: goto label_37ecfc;
        case 0x37ed00u: goto label_37ed00;
        case 0x37ed04u: goto label_37ed04;
        case 0x37ed08u: goto label_37ed08;
        case 0x37ed0cu: goto label_37ed0c;
        case 0x37ed10u: goto label_37ed10;
        case 0x37ed14u: goto label_37ed14;
        case 0x37ed18u: goto label_37ed18;
        case 0x37ed1cu: goto label_37ed1c;
        case 0x37ed20u: goto label_37ed20;
        case 0x37ed24u: goto label_37ed24;
        case 0x37ed28u: goto label_37ed28;
        case 0x37ed2cu: goto label_37ed2c;
        case 0x37ed30u: goto label_37ed30;
        case 0x37ed34u: goto label_37ed34;
        case 0x37ed38u: goto label_37ed38;
        case 0x37ed3cu: goto label_37ed3c;
        case 0x37ed40u: goto label_37ed40;
        case 0x37ed44u: goto label_37ed44;
        case 0x37ed48u: goto label_37ed48;
        case 0x37ed4cu: goto label_37ed4c;
        case 0x37ed50u: goto label_37ed50;
        case 0x37ed54u: goto label_37ed54;
        case 0x37ed58u: goto label_37ed58;
        case 0x37ed5cu: goto label_37ed5c;
        case 0x37ed60u: goto label_37ed60;
        case 0x37ed64u: goto label_37ed64;
        case 0x37ed68u: goto label_37ed68;
        case 0x37ed6cu: goto label_37ed6c;
        case 0x37ed70u: goto label_37ed70;
        case 0x37ed74u: goto label_37ed74;
        case 0x37ed78u: goto label_37ed78;
        case 0x37ed7cu: goto label_37ed7c;
        case 0x37ed80u: goto label_37ed80;
        case 0x37ed84u: goto label_37ed84;
        case 0x37ed88u: goto label_37ed88;
        case 0x37ed8cu: goto label_37ed8c;
        case 0x37ed90u: goto label_37ed90;
        case 0x37ed94u: goto label_37ed94;
        case 0x37ed98u: goto label_37ed98;
        case 0x37ed9cu: goto label_37ed9c;
        case 0x37eda0u: goto label_37eda0;
        case 0x37eda4u: goto label_37eda4;
        case 0x37eda8u: goto label_37eda8;
        case 0x37edacu: goto label_37edac;
        case 0x37edb0u: goto label_37edb0;
        case 0x37edb4u: goto label_37edb4;
        case 0x37edb8u: goto label_37edb8;
        case 0x37edbcu: goto label_37edbc;
        case 0x37edc0u: goto label_37edc0;
        case 0x37edc4u: goto label_37edc4;
        case 0x37edc8u: goto label_37edc8;
        case 0x37edccu: goto label_37edcc;
        case 0x37edd0u: goto label_37edd0;
        case 0x37edd4u: goto label_37edd4;
        case 0x37edd8u: goto label_37edd8;
        case 0x37eddcu: goto label_37eddc;
        case 0x37ede0u: goto label_37ede0;
        case 0x37ede4u: goto label_37ede4;
        case 0x37ede8u: goto label_37ede8;
        case 0x37edecu: goto label_37edec;
        case 0x37edf0u: goto label_37edf0;
        case 0x37edf4u: goto label_37edf4;
        case 0x37edf8u: goto label_37edf8;
        case 0x37edfcu: goto label_37edfc;
        case 0x37ee00u: goto label_37ee00;
        case 0x37ee04u: goto label_37ee04;
        case 0x37ee08u: goto label_37ee08;
        case 0x37ee0cu: goto label_37ee0c;
        case 0x37ee10u: goto label_37ee10;
        case 0x37ee14u: goto label_37ee14;
        case 0x37ee18u: goto label_37ee18;
        case 0x37ee1cu: goto label_37ee1c;
        case 0x37ee20u: goto label_37ee20;
        case 0x37ee24u: goto label_37ee24;
        case 0x37ee28u: goto label_37ee28;
        case 0x37ee2cu: goto label_37ee2c;
        case 0x37ee30u: goto label_37ee30;
        case 0x37ee34u: goto label_37ee34;
        case 0x37ee38u: goto label_37ee38;
        case 0x37ee3cu: goto label_37ee3c;
        case 0x37ee40u: goto label_37ee40;
        case 0x37ee44u: goto label_37ee44;
        case 0x37ee48u: goto label_37ee48;
        case 0x37ee4cu: goto label_37ee4c;
        case 0x37ee50u: goto label_37ee50;
        case 0x37ee54u: goto label_37ee54;
        case 0x37ee58u: goto label_37ee58;
        case 0x37ee5cu: goto label_37ee5c;
        case 0x37ee60u: goto label_37ee60;
        case 0x37ee64u: goto label_37ee64;
        case 0x37ee68u: goto label_37ee68;
        case 0x37ee6cu: goto label_37ee6c;
        case 0x37ee70u: goto label_37ee70;
        case 0x37ee74u: goto label_37ee74;
        case 0x37ee78u: goto label_37ee78;
        case 0x37ee7cu: goto label_37ee7c;
        case 0x37ee80u: goto label_37ee80;
        case 0x37ee84u: goto label_37ee84;
        case 0x37ee88u: goto label_37ee88;
        case 0x37ee8cu: goto label_37ee8c;
        case 0x37ee90u: goto label_37ee90;
        case 0x37ee94u: goto label_37ee94;
        case 0x37ee98u: goto label_37ee98;
        case 0x37ee9cu: goto label_37ee9c;
        case 0x37eea0u: goto label_37eea0;
        case 0x37eea4u: goto label_37eea4;
        case 0x37eea8u: goto label_37eea8;
        case 0x37eeacu: goto label_37eeac;
        case 0x37eeb0u: goto label_37eeb0;
        case 0x37eeb4u: goto label_37eeb4;
        case 0x37eeb8u: goto label_37eeb8;
        case 0x37eebcu: goto label_37eebc;
        case 0x37eec0u: goto label_37eec0;
        case 0x37eec4u: goto label_37eec4;
        case 0x37eec8u: goto label_37eec8;
        case 0x37eeccu: goto label_37eecc;
        case 0x37eed0u: goto label_37eed0;
        case 0x37eed4u: goto label_37eed4;
        case 0x37eed8u: goto label_37eed8;
        case 0x37eedcu: goto label_37eedc;
        case 0x37eee0u: goto label_37eee0;
        case 0x37eee4u: goto label_37eee4;
        case 0x37eee8u: goto label_37eee8;
        case 0x37eeecu: goto label_37eeec;
        case 0x37eef0u: goto label_37eef0;
        case 0x37eef4u: goto label_37eef4;
        case 0x37eef8u: goto label_37eef8;
        case 0x37eefcu: goto label_37eefc;
        case 0x37ef00u: goto label_37ef00;
        case 0x37ef04u: goto label_37ef04;
        case 0x37ef08u: goto label_37ef08;
        case 0x37ef0cu: goto label_37ef0c;
        case 0x37ef10u: goto label_37ef10;
        case 0x37ef14u: goto label_37ef14;
        case 0x37ef18u: goto label_37ef18;
        case 0x37ef1cu: goto label_37ef1c;
        case 0x37ef20u: goto label_37ef20;
        case 0x37ef24u: goto label_37ef24;
        case 0x37ef28u: goto label_37ef28;
        case 0x37ef2cu: goto label_37ef2c;
        case 0x37ef30u: goto label_37ef30;
        case 0x37ef34u: goto label_37ef34;
        case 0x37ef38u: goto label_37ef38;
        case 0x37ef3cu: goto label_37ef3c;
        case 0x37ef40u: goto label_37ef40;
        case 0x37ef44u: goto label_37ef44;
        case 0x37ef48u: goto label_37ef48;
        case 0x37ef4cu: goto label_37ef4c;
        case 0x37ef50u: goto label_37ef50;
        case 0x37ef54u: goto label_37ef54;
        case 0x37ef58u: goto label_37ef58;
        case 0x37ef5cu: goto label_37ef5c;
        case 0x37ef60u: goto label_37ef60;
        case 0x37ef64u: goto label_37ef64;
        case 0x37ef68u: goto label_37ef68;
        case 0x37ef6cu: goto label_37ef6c;
        case 0x37ef70u: goto label_37ef70;
        case 0x37ef74u: goto label_37ef74;
        case 0x37ef78u: goto label_37ef78;
        case 0x37ef7cu: goto label_37ef7c;
        case 0x37ef80u: goto label_37ef80;
        case 0x37ef84u: goto label_37ef84;
        case 0x37ef88u: goto label_37ef88;
        case 0x37ef8cu: goto label_37ef8c;
        case 0x37ef90u: goto label_37ef90;
        case 0x37ef94u: goto label_37ef94;
        case 0x37ef98u: goto label_37ef98;
        case 0x37ef9cu: goto label_37ef9c;
        case 0x37efa0u: goto label_37efa0;
        case 0x37efa4u: goto label_37efa4;
        case 0x37efa8u: goto label_37efa8;
        case 0x37efacu: goto label_37efac;
        case 0x37efb0u: goto label_37efb0;
        case 0x37efb4u: goto label_37efb4;
        case 0x37efb8u: goto label_37efb8;
        case 0x37efbcu: goto label_37efbc;
        case 0x37efc0u: goto label_37efc0;
        case 0x37efc4u: goto label_37efc4;
        case 0x37efc8u: goto label_37efc8;
        case 0x37efccu: goto label_37efcc;
        case 0x37efd0u: goto label_37efd0;
        case 0x37efd4u: goto label_37efd4;
        case 0x37efd8u: goto label_37efd8;
        case 0x37efdcu: goto label_37efdc;
        case 0x37efe0u: goto label_37efe0;
        case 0x37efe4u: goto label_37efe4;
        case 0x37efe8u: goto label_37efe8;
        case 0x37efecu: goto label_37efec;
        case 0x37eff0u: goto label_37eff0;
        case 0x37eff4u: goto label_37eff4;
        case 0x37eff8u: goto label_37eff8;
        case 0x37effcu: goto label_37effc;
        case 0x37f000u: goto label_37f000;
        case 0x37f004u: goto label_37f004;
        case 0x37f008u: goto label_37f008;
        case 0x37f00cu: goto label_37f00c;
        case 0x37f010u: goto label_37f010;
        case 0x37f014u: goto label_37f014;
        case 0x37f018u: goto label_37f018;
        case 0x37f01cu: goto label_37f01c;
        case 0x37f020u: goto label_37f020;
        case 0x37f024u: goto label_37f024;
        case 0x37f028u: goto label_37f028;
        case 0x37f02cu: goto label_37f02c;
        case 0x37f030u: goto label_37f030;
        case 0x37f034u: goto label_37f034;
        case 0x37f038u: goto label_37f038;
        case 0x37f03cu: goto label_37f03c;
        case 0x37f040u: goto label_37f040;
        case 0x37f044u: goto label_37f044;
        case 0x37f048u: goto label_37f048;
        case 0x37f04cu: goto label_37f04c;
        case 0x37f050u: goto label_37f050;
        case 0x37f054u: goto label_37f054;
        case 0x37f058u: goto label_37f058;
        case 0x37f05cu: goto label_37f05c;
        case 0x37f060u: goto label_37f060;
        case 0x37f064u: goto label_37f064;
        case 0x37f068u: goto label_37f068;
        case 0x37f06cu: goto label_37f06c;
        case 0x37f070u: goto label_37f070;
        case 0x37f074u: goto label_37f074;
        case 0x37f078u: goto label_37f078;
        case 0x37f07cu: goto label_37f07c;
        case 0x37f080u: goto label_37f080;
        case 0x37f084u: goto label_37f084;
        case 0x37f088u: goto label_37f088;
        case 0x37f08cu: goto label_37f08c;
        case 0x37f090u: goto label_37f090;
        case 0x37f094u: goto label_37f094;
        case 0x37f098u: goto label_37f098;
        case 0x37f09cu: goto label_37f09c;
        case 0x37f0a0u: goto label_37f0a0;
        case 0x37f0a4u: goto label_37f0a4;
        case 0x37f0a8u: goto label_37f0a8;
        case 0x37f0acu: goto label_37f0ac;
        case 0x37f0b0u: goto label_37f0b0;
        case 0x37f0b4u: goto label_37f0b4;
        case 0x37f0b8u: goto label_37f0b8;
        case 0x37f0bcu: goto label_37f0bc;
        default: break;
    }

    ctx->pc = 0x37ecd0u;

label_37ecd0:
    // 0x37ecd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37ecd4:
    // 0x37ecd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37ecd8:
    // 0x37ecd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37ecdc:
    // 0x37ecdc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37ecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37ece0:
    // 0x37ece0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37ece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37ece4:
    // 0x37ece4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37ece4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37ece8:
    // 0x37ece8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37ecec:
    // 0x37ecec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37ececu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37ecf0:
    // 0x37ecf0: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x37ecf0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_37ecf4:
    // 0x37ecf4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x37ecf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37ecf8:
    // 0x37ecf8: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x37ecf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
label_37ecfc:
    // 0x37ecfc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37ecfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37ed00:
    // 0x37ed00: 0x26315740  addiu       $s1, $s1, 0x5740
    ctx->pc = 0x37ed00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22336));
label_37ed04:
    // 0x37ed04: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37ed04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37ed08:
    // 0x37ed08: 0x26105730  addiu       $s0, $s0, 0x5730
    ctx->pc = 0x37ed08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22320));
label_37ed0c:
    // 0x37ed0c: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x37ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ed10:
    // 0x37ed10: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x37ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_37ed14:
    // 0x37ed14: 0x8c450e84  lw          $a1, 0xE84($v0)
    ctx->pc = 0x37ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_37ed18:
    // 0x37ed18: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37ed18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37ed1c:
    // 0x37ed1c: 0x2463ffd3  addiu       $v1, $v1, -0x2D
    ctx->pc = 0x37ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_37ed20:
    // 0x37ed20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37ed24:
    // 0x37ed24: 0x8ca40518  lw          $a0, 0x518($a1)
    ctx->pc = 0x37ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1304)));
label_37ed28:
    // 0x37ed28: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x37ed28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37ed2c:
    // 0x37ed2c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x37ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_37ed30:
    // 0x37ed30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ed30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ed34:
    // 0x37ed34: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_37ed38:
    if (ctx->pc == 0x37ED38u) {
        ctx->pc = 0x37ED38u;
            // 0x37ed38: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37ED3Cu;
        goto label_37ed3c;
    }
    ctx->pc = 0x37ED34u;
    {
        const bool branch_taken_0x37ed34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ED38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37ED34u;
            // 0x37ed38: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ed34) {
            ctx->pc = 0x37EDC8u;
            goto label_37edc8;
        }
    }
    ctx->pc = 0x37ED3Cu;
label_37ed3c:
    // 0x37ed3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37ed40:
    // 0x37ed40: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37ed44:
    // 0x37ed44: 0xc0506ac  jal         func_141AB0
label_37ed48:
    if (ctx->pc == 0x37ED48u) {
        ctx->pc = 0x37ED48u;
            // 0x37ed48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37ED4Cu;
        goto label_37ed4c;
    }
    ctx->pc = 0x37ED44u;
    SET_GPR_U32(ctx, 31, 0x37ED4Cu);
    ctx->pc = 0x37ED48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37ED44u;
            // 0x37ed48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ED4Cu; }
        if (ctx->pc != 0x37ED4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37ED4Cu; }
        if (ctx->pc != 0x37ED4Cu) { return; }
    }
    ctx->pc = 0x37ED4Cu;
label_37ed4c:
    // 0x37ed4c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37ed4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37ed50:
    // 0x37ed50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ed50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37ed54:
    // 0x37ed54: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37ed54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37ed58:
    // 0x37ed58: 0x320f809  jalr        $t9
label_37ed5c:
    if (ctx->pc == 0x37ED5Cu) {
        ctx->pc = 0x37ED5Cu;
            // 0x37ed5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37ED60u;
        goto label_37ed60;
    }
    ctx->pc = 0x37ED58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37ED60u);
        ctx->pc = 0x37ED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37ED58u;
            // 0x37ed5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37ED60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37ED60u; }
            if (ctx->pc != 0x37ED60u) { return; }
        }
        }
    }
    ctx->pc = 0x37ED60u;
label_37ed60:
    // 0x37ed60: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x37ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ed64:
    // 0x37ed64: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x37ed64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_37ed68:
    // 0x37ed68: 0xc62100a8  lwc1        $f1, 0xA8($s1)
    ctx->pc = 0x37ed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ed6c:
    // 0x37ed6c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37ed70:
    // 0x37ed70: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x37ed70u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_37ed74:
    // 0x37ed74: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x37ed74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_37ed78:
    // 0x37ed78: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37ed78u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37ed7c:
    // 0x37ed7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37ed80:
    // 0x37ed80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37ed80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ed84:
    // 0x37ed84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37ed84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37ed88:
    // 0x37ed88: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37ed88u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ed8c:
    // 0x37ed8c: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37ed90:
    // 0x37ed90: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37ed90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37ed94:
    // 0x37ed94: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37ed94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37ed98:
    // 0x37ed98: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37ed98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37ed9c:
    // 0x37ed9c: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37ed9cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37eda0:
    // 0x37eda0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37eda0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37eda4:
    // 0x37eda4: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37eda4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37eda8:
    // 0x37eda8: 0xc0bc284  jal         func_2F0A10
label_37edac:
    if (ctx->pc == 0x37EDACu) {
        ctx->pc = 0x37EDACu;
            // 0x37edac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37EDB0u;
        goto label_37edb0;
    }
    ctx->pc = 0x37EDA8u;
    SET_GPR_U32(ctx, 31, 0x37EDB0u);
    ctx->pc = 0x37EDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EDA8u;
            // 0x37edac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EDB0u; }
        if (ctx->pc != 0x37EDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EDB0u; }
        if (ctx->pc != 0x37EDB0u) { return; }
    }
    ctx->pc = 0x37EDB0u;
label_37edb0:
    // 0x37edb0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37edb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37edb4:
    // 0x37edb4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37edb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37edb8:
    // 0x37edb8: 0x320f809  jalr        $t9
label_37edbc:
    if (ctx->pc == 0x37EDBCu) {
        ctx->pc = 0x37EDBCu;
            // 0x37edbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37EDC0u;
        goto label_37edc0;
    }
    ctx->pc = 0x37EDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37EDC0u);
        ctx->pc = 0x37EDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EDB8u;
            // 0x37edbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37EDC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37EDC0u; }
            if (ctx->pc != 0x37EDC0u) { return; }
        }
        }
    }
    ctx->pc = 0x37EDC0u;
label_37edc0:
    // 0x37edc0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_37edc4:
    if (ctx->pc == 0x37EDC4u) {
        ctx->pc = 0x37EDC8u;
        goto label_37edc8;
    }
    ctx->pc = 0x37EDC0u;
    {
        const bool branch_taken_0x37edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37edc0) {
            ctx->pc = 0x37EEF8u;
            goto label_37eef8;
        }
    }
    ctx->pc = 0x37EDC8u;
label_37edc8:
    // 0x37edc8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x37edc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_37edcc:
    // 0x37edcc: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_37edd0:
    if (ctx->pc == 0x37EDD0u) {
        ctx->pc = 0x37EDD0u;
            // 0x37edd0: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x37EDD4u;
        goto label_37edd4;
    }
    ctx->pc = 0x37EDCCu;
    {
        const bool branch_taken_0x37edcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37edcc) {
            ctx->pc = 0x37EDD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37EDCCu;
            // 0x37edd0: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x37EE6Cu;
            goto label_37ee6c;
        }
    }
    ctx->pc = 0x37EDD4u;
label_37edd4:
    // 0x37edd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37edd8:
    // 0x37edd8: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37eddc:
    // 0x37eddc: 0xc0506ac  jal         func_141AB0
label_37ede0:
    if (ctx->pc == 0x37EDE0u) {
        ctx->pc = 0x37EDE0u;
            // 0x37ede0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x37EDE4u;
        goto label_37ede4;
    }
    ctx->pc = 0x37EDDCu;
    SET_GPR_U32(ctx, 31, 0x37EDE4u);
    ctx->pc = 0x37EDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EDDCu;
            // 0x37ede0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EDE4u; }
        if (ctx->pc != 0x37EDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EDE4u; }
        if (ctx->pc != 0x37EDE4u) { return; }
    }
    ctx->pc = 0x37EDE4u;
label_37ede4:
    // 0x37ede4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37ede4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37ede8:
    // 0x37ede8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ede8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37edec:
    // 0x37edec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37edecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37edf0:
    // 0x37edf0: 0x320f809  jalr        $t9
label_37edf4:
    if (ctx->pc == 0x37EDF4u) {
        ctx->pc = 0x37EDF4u;
            // 0x37edf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37EDF8u;
        goto label_37edf8;
    }
    ctx->pc = 0x37EDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37EDF8u);
        ctx->pc = 0x37EDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EDF0u;
            // 0x37edf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37EDF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37EDF8u; }
            if (ctx->pc != 0x37EDF8u) { return; }
        }
        }
    }
    ctx->pc = 0x37EDF8u;
label_37edf8:
    // 0x37edf8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x37edf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_37edfc:
    // 0x37edfc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37ee00:
    // 0x37ee00: 0x24a5a310  addiu       $a1, $a1, -0x5CF0
    ctx->pc = 0x37ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943504));
label_37ee04:
    // 0x37ee04: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x37ee04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_37ee08:
    // 0x37ee08: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x37ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ee0c:
    // 0x37ee0c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37ee10:
    // 0x37ee10: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x37ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ee14:
    // 0x37ee14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37ee14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ee18:
    // 0x37ee18: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37ee18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37ee1c:
    // 0x37ee1c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37ee20:
    // 0x37ee20: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37ee20u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37ee24:
    // 0x37ee24: 0x84482102  lh          $t0, 0x2102($v0)
    ctx->pc = 0x37ee24u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_37ee28:
    // 0x37ee28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37ee2c:
    // 0x37ee2c: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37ee30:
    // 0x37ee30: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37ee30u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ee34:
    // 0x37ee34: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37ee34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37ee38:
    // 0x37ee38: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37ee38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37ee3c:
    // 0x37ee3c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37ee3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37ee40:
    // 0x37ee40: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37ee40u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37ee44:
    // 0x37ee44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37ee44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37ee48:
    // 0x37ee48: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37ee48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37ee4c:
    // 0x37ee4c: 0xc0bc284  jal         func_2F0A10
label_37ee50:
    if (ctx->pc == 0x37EE50u) {
        ctx->pc = 0x37EE50u;
            // 0x37ee50: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37EE54u;
        goto label_37ee54;
    }
    ctx->pc = 0x37EE4Cu;
    SET_GPR_U32(ctx, 31, 0x37EE54u);
    ctx->pc = 0x37EE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EE4Cu;
            // 0x37ee50: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EE54u; }
        if (ctx->pc != 0x37EE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EE54u; }
        if (ctx->pc != 0x37EE54u) { return; }
    }
    ctx->pc = 0x37EE54u;
label_37ee54:
    // 0x37ee54: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37ee54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37ee58:
    // 0x37ee58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37ee58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37ee5c:
    // 0x37ee5c: 0x320f809  jalr        $t9
label_37ee60:
    if (ctx->pc == 0x37EE60u) {
        ctx->pc = 0x37EE60u;
            // 0x37ee60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37EE64u;
        goto label_37ee64;
    }
    ctx->pc = 0x37EE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37EE64u);
        ctx->pc = 0x37EE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EE5Cu;
            // 0x37ee60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37EE64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37EE64u; }
            if (ctx->pc != 0x37EE64u) { return; }
        }
        }
    }
    ctx->pc = 0x37EE64u;
label_37ee64:
    // 0x37ee64: 0x10000024  b           . + 4 + (0x24 << 2)
label_37ee68:
    if (ctx->pc == 0x37EE68u) {
        ctx->pc = 0x37EE6Cu;
        goto label_37ee6c;
    }
    ctx->pc = 0x37EE64u;
    {
        const bool branch_taken_0x37ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ee64) {
            ctx->pc = 0x37EEF8u;
            goto label_37eef8;
        }
    }
    ctx->pc = 0x37EE6Cu;
label_37ee6c:
    // 0x37ee6c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_37ee70:
    if (ctx->pc == 0x37EE70u) {
        ctx->pc = 0x37EE74u;
        goto label_37ee74;
    }
    ctx->pc = 0x37EE6Cu;
    {
        const bool branch_taken_0x37ee6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ee6c) {
            ctx->pc = 0x37EEF8u;
            goto label_37eef8;
        }
    }
    ctx->pc = 0x37EE74u;
label_37ee74:
    // 0x37ee74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37ee78:
    // 0x37ee78: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37ee7c:
    // 0x37ee7c: 0xc0506ac  jal         func_141AB0
label_37ee80:
    if (ctx->pc == 0x37EE80u) {
        ctx->pc = 0x37EE80u;
            // 0x37ee80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37EE84u;
        goto label_37ee84;
    }
    ctx->pc = 0x37EE7Cu;
    SET_GPR_U32(ctx, 31, 0x37EE84u);
    ctx->pc = 0x37EE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EE7Cu;
            // 0x37ee80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EE84u; }
        if (ctx->pc != 0x37EE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EE84u; }
        if (ctx->pc != 0x37EE84u) { return; }
    }
    ctx->pc = 0x37EE84u;
label_37ee84:
    // 0x37ee84: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37ee84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37ee88:
    // 0x37ee88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37ee8c:
    // 0x37ee8c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37ee8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37ee90:
    // 0x37ee90: 0x320f809  jalr        $t9
label_37ee94:
    if (ctx->pc == 0x37EE94u) {
        ctx->pc = 0x37EE94u;
            // 0x37ee94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37EE98u;
        goto label_37ee98;
    }
    ctx->pc = 0x37EE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37EE98u);
        ctx->pc = 0x37EE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EE90u;
            // 0x37ee94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37EE98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37EE98u; }
            if (ctx->pc != 0x37EE98u) { return; }
        }
        }
    }
    ctx->pc = 0x37EE98u;
label_37ee98:
    // 0x37ee98: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x37ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ee9c:
    // 0x37ee9c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x37ee9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_37eea0:
    // 0x37eea0: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x37eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37eea4:
    // 0x37eea4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37eea8:
    // 0x37eea8: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x37eea8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_37eeac:
    // 0x37eeac: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x37eeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_37eeb0:
    // 0x37eeb0: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37eeb0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37eeb4:
    // 0x37eeb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37eeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37eeb8:
    // 0x37eeb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37eeb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37eebc:
    // 0x37eebc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37eebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37eec0:
    // 0x37eec0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37eec0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37eec4:
    // 0x37eec4: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37eec8:
    // 0x37eec8: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37eec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37eecc:
    // 0x37eecc: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37eeccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37eed0:
    // 0x37eed0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37eed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37eed4:
    // 0x37eed4: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37eed4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37eed8:
    // 0x37eed8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37eed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37eedc:
    // 0x37eedc: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37eedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37eee0:
    // 0x37eee0: 0xc0bc284  jal         func_2F0A10
label_37eee4:
    if (ctx->pc == 0x37EEE4u) {
        ctx->pc = 0x37EEE4u;
            // 0x37eee4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37EEE8u;
        goto label_37eee8;
    }
    ctx->pc = 0x37EEE0u;
    SET_GPR_U32(ctx, 31, 0x37EEE8u);
    ctx->pc = 0x37EEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EEE0u;
            // 0x37eee4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EEE8u; }
        if (ctx->pc != 0x37EEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EEE8u; }
        if (ctx->pc != 0x37EEE8u) { return; }
    }
    ctx->pc = 0x37EEE8u;
label_37eee8:
    // 0x37eee8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37eee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37eeec:
    // 0x37eeec: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37eeecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37eef0:
    // 0x37eef0: 0x320f809  jalr        $t9
label_37eef4:
    if (ctx->pc == 0x37EEF4u) {
        ctx->pc = 0x37EEF4u;
            // 0x37eef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37EEF8u;
        goto label_37eef8;
    }
    ctx->pc = 0x37EEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37EEF8u);
        ctx->pc = 0x37EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EEF0u;
            // 0x37eef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37EEF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37EEF8u; }
            if (ctx->pc != 0x37EEF8u) { return; }
        }
        }
    }
    ctx->pc = 0x37EEF8u;
label_37eef8:
    // 0x37eef8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37eefc:
    // 0x37eefc: 0x8e7000dc  lw          $s0, 0xDC($s3)
    ctx->pc = 0x37eefcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_37ef00:
    // 0x37ef00: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x37ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_37ef04:
    // 0x37ef04: 0x8c510080  lw          $s1, 0x80($v0)
    ctx->pc = 0x37ef04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_37ef08:
    // 0x37ef08: 0xc157054  jal         func_55C150
label_37ef0c:
    if (ctx->pc == 0x37EF0Cu) {
        ctx->pc = 0x37EF0Cu;
            // 0x37ef0c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x37EF10u;
        goto label_37ef10;
    }
    ctx->pc = 0x37EF08u;
    SET_GPR_U32(ctx, 31, 0x37EF10u);
    ctx->pc = 0x37EF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EF08u;
            // 0x37ef0c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EF10u; }
        if (ctx->pc != 0x37EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EF10u; }
        if (ctx->pc != 0x37EF10u) { return; }
    }
    ctx->pc = 0x37EF10u;
label_37ef10:
    // 0x37ef10: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x37ef10u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37ef14:
    // 0x37ef14: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37ef18:
    // 0x37ef18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37ef18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37ef1c:
    // 0x37ef1c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x37ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_37ef20:
    // 0x37ef20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37ef20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37ef24:
    // 0x37ef24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ef24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37ef28:
    // 0x37ef28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37ef28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37ef2c:
    // 0x37ef2c: 0xc440a21c  lwc1        $f0, -0x5DE4($v0)
    ctx->pc = 0x37ef2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ef30:
    // 0x37ef30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37ef30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37ef34:
    // 0x37ef34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ef34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37ef38:
    // 0x37ef38: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x37ef38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_37ef3c:
    // 0x37ef3c: 0xc156fc8  jal         func_55BF20
label_37ef40:
    if (ctx->pc == 0x37EF40u) {
        ctx->pc = 0x37EF40u;
            // 0x37ef40: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x37EF44u;
        goto label_37ef44;
    }
    ctx->pc = 0x37EF3Cu;
    SET_GPR_U32(ctx, 31, 0x37EF44u);
    ctx->pc = 0x37EF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EF3Cu;
            // 0x37ef40: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF20u;
    if (runtime->hasFunction(0x55BF20u)) {
        auto targetFn = runtime->lookupFunction(0x55BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EF44u; }
        if (ctx->pc != 0x37EF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF20_0x55bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EF44u; }
        if (ctx->pc != 0x37EF44u) { return; }
    }
    ctx->pc = 0x37EF44u;
label_37ef44:
    // 0x37ef44: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x37ef44u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37ef48:
    // 0x37ef48: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x37ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37ef4c:
    // 0x37ef4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37ef4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37ef50:
    // 0x37ef50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37ef50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37ef54:
    // 0x37ef54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37ef54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37ef58:
    // 0x37ef58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37ef58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37ef5c:
    // 0x37ef5c: 0x0  nop
    ctx->pc = 0x37ef5cu;
    // NOP
label_37ef60:
    // 0x37ef60: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x37ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_37ef64:
    // 0x37ef64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ef64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ef68:
    // 0x37ef68: 0x0  nop
    ctx->pc = 0x37ef68u;
    // NOP
label_37ef6c:
    // 0x37ef6c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37ef6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37ef70:
    // 0x37ef70: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x37ef70u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37ef74:
    // 0x37ef74: 0x0  nop
    ctx->pc = 0x37ef74u;
    // NOP
label_37ef78:
    // 0x37ef78: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x37ef78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_37ef7c:
    // 0x37ef7c: 0xc157054  jal         func_55C150
label_37ef80:
    if (ctx->pc == 0x37EF80u) {
        ctx->pc = 0x37EF80u;
            // 0x37ef80: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x37EF84u;
        goto label_37ef84;
    }
    ctx->pc = 0x37EF7Cu;
    SET_GPR_U32(ctx, 31, 0x37EF84u);
    ctx->pc = 0x37EF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EF7Cu;
            // 0x37ef80: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EF84u; }
        if (ctx->pc != 0x37EF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EF84u; }
        if (ctx->pc != 0x37EF84u) { return; }
    }
    ctx->pc = 0x37EF84u;
label_37ef84:
    // 0x37ef84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37ef88:
    // 0x37ef88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37ef88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ef8c:
    // 0x37ef8c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37ef90:
    // 0x37ef90: 0xc0506ac  jal         func_141AB0
label_37ef94:
    if (ctx->pc == 0x37EF94u) {
        ctx->pc = 0x37EF94u;
            // 0x37ef94: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37EF98u;
        goto label_37ef98;
    }
    ctx->pc = 0x37EF90u;
    SET_GPR_U32(ctx, 31, 0x37EF98u);
    ctx->pc = 0x37EF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37EF90u;
            // 0x37ef94: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EF98u; }
        if (ctx->pc != 0x37EF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37EF98u; }
        if (ctx->pc != 0x37EF98u) { return; }
    }
    ctx->pc = 0x37EF98u;
label_37ef98:
    // 0x37ef98: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37ef98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37ef9c:
    // 0x37ef9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37efa0:
    // 0x37efa0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37efa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37efa4:
    // 0x37efa4: 0x320f809  jalr        $t9
label_37efa8:
    if (ctx->pc == 0x37EFA8u) {
        ctx->pc = 0x37EFA8u;
            // 0x37efa8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37EFACu;
        goto label_37efac;
    }
    ctx->pc = 0x37EFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37EFACu);
        ctx->pc = 0x37EFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EFA4u;
            // 0x37efa8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37EFACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37EFACu; }
            if (ctx->pc != 0x37EFACu) { return; }
        }
        }
    }
    ctx->pc = 0x37EFACu;
label_37efac:
    // 0x37efac: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37efacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37efb0:
    // 0x37efb0: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x37efb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_37efb4:
    // 0x37efb4: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x37efb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_37efb8:
    // 0x37efb8: 0x2610a210  addiu       $s0, $s0, -0x5DF0
    ctx->pc = 0x37efb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943248));
label_37efbc:
    // 0x37efbc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x37efbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37efc0:
    // 0x37efc0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37efc4:
    // 0x37efc4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x37efc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37efc8:
    // 0x37efc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37efc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37efcc:
    // 0x37efcc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37efccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37efd0:
    // 0x37efd0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37efd4:
    // 0x37efd4: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37efd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37efd8:
    // 0x37efd8: 0x84482102  lh          $t0, 0x2102($v0)
    ctx->pc = 0x37efd8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_37efdc:
    // 0x37efdc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37efe0:
    // 0x37efe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37efe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37efe4:
    // 0x37efe4: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37efe8:
    // 0x37efe8: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37efe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37efec:
    // 0x37efec: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x37efecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37eff0:
    // 0x37eff0: 0x0  nop
    ctx->pc = 0x37eff0u;
    // NOP
label_37eff4:
    // 0x37eff4: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x37eff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37eff8:
    // 0x37eff8: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x37eff8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_37effc:
    // 0x37effc: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x37effcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_37f000:
    // 0x37f000: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37f000u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37f004:
    // 0x37f004: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37f004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37f008:
    // 0x37f008: 0xc0bc284  jal         func_2F0A10
label_37f00c:
    if (ctx->pc == 0x37F00Cu) {
        ctx->pc = 0x37F00Cu;
            // 0x37f00c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37F010u;
        goto label_37f010;
    }
    ctx->pc = 0x37F008u;
    SET_GPR_U32(ctx, 31, 0x37F010u);
    ctx->pc = 0x37F00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F008u;
            // 0x37f00c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F010u; }
        if (ctx->pc != 0x37F010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F010u; }
        if (ctx->pc != 0x37F010u) { return; }
    }
    ctx->pc = 0x37F010u;
label_37f010:
    // 0x37f010: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x37f010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f014:
    // 0x37f014: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x37f014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37f018:
    // 0x37f018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37f018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37f01c:
    // 0x37f01c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37f01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37f020:
    // 0x37f020: 0x320f809  jalr        $t9
label_37f024:
    if (ctx->pc == 0x37F024u) {
        ctx->pc = 0x37F024u;
            // 0x37f024: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37F028u;
        goto label_37f028;
    }
    ctx->pc = 0x37F020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F028u);
        ctx->pc = 0x37F024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F020u;
            // 0x37f024: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F028u; }
            if (ctx->pc != 0x37F028u) { return; }
        }
        }
    }
    ctx->pc = 0x37F028u;
label_37f028:
    // 0x37f028: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37f02c:
    // 0x37f02c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37f030:
    // 0x37f030: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x37f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
label_37f034:
    // 0x37f034: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x37f034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_37f038:
    // 0x37f038: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x37f038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f03c:
    // 0x37f03c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37f03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37f040:
    // 0x37f040: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37f040u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37f044:
    // 0x37f044: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37f044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37f048:
    // 0x37f048: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37f048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_37f04c:
    // 0x37f04c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37f04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37f050:
    // 0x37f050: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f054:
    // 0x37f054: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37f054u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37f058:
    // 0x37f058: 0xc156fdc  jal         func_55BF70
label_37f05c:
    if (ctx->pc == 0x37F05Cu) {
        ctx->pc = 0x37F05Cu;
            // 0x37f05c: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->pc = 0x37F060u;
        goto label_37f060;
    }
    ctx->pc = 0x37F058u;
    SET_GPR_U32(ctx, 31, 0x37F060u);
    ctx->pc = 0x37F05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F058u;
            // 0x37f05c: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF70u;
    if (runtime->hasFunction(0x55BF70u)) {
        auto targetFn = runtime->lookupFunction(0x55BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F060u; }
        if (ctx->pc != 0x37F060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF70_0x55bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F060u; }
        if (ctx->pc != 0x37F060u) { return; }
    }
    ctx->pc = 0x37F060u;
label_37f060:
    // 0x37f060: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x37f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_37f064:
    // 0x37f064: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37f068:
    // 0x37f068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37f068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f06c:
    // 0x37f06c: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x37f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_37f070:
    // 0x37f070: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37f070u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37f074:
    // 0x37f074: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f078:
    // 0x37f078: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37f078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_37f07c:
    // 0x37f07c: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37f07cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37f080:
    // 0x37f080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f084:
    // 0x37f084: 0xc66e00bc  lwc1        $f14, 0xBC($s3)
    ctx->pc = 0x37f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_37f088:
    // 0x37f088: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37f088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37f08c:
    // 0x37f08c: 0xc15706c  jal         func_55C1B0
label_37f090:
    if (ctx->pc == 0x37F090u) {
        ctx->pc = 0x37F090u;
            // 0x37f090: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x37F094u;
        goto label_37f094;
    }
    ctx->pc = 0x37F08Cu;
    SET_GPR_U32(ctx, 31, 0x37F094u);
    ctx->pc = 0x37F090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F08Cu;
            // 0x37f090: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F094u; }
        if (ctx->pc != 0x37F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F094u; }
        if (ctx->pc != 0x37F094u) { return; }
    }
    ctx->pc = 0x37F094u;
label_37f094:
    // 0x37f094: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37f094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37f098:
    // 0x37f098: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x37f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_37f09c:
    // 0x37f09c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37f09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37f0a0:
    // 0x37f0a0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37f0a4:
    // 0x37f0a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37f0a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37f0a8:
    // 0x37f0a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37f0ac:
    // 0x37f0ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37f0acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37f0b0:
    // 0x37f0b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37f0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37f0b4:
    // 0x37f0b4: 0x3e00008  jr          $ra
label_37f0b8:
    if (ctx->pc == 0x37F0B8u) {
        ctx->pc = 0x37F0B8u;
            // 0x37f0b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37F0BCu;
        goto label_37f0bc;
    }
    ctx->pc = 0x37F0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F0B4u;
            // 0x37f0b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37F0BCu;
label_37f0bc:
    // 0x37f0bc: 0x0  nop
    ctx->pc = 0x37f0bcu;
    // NOP
}
