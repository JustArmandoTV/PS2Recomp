#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053EE20
// Address: 0x53ee20 - 0x53f140
void sub_0053EE20_0x53ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053EE20_0x53ee20");
#endif

    switch (ctx->pc) {
        case 0x53ee20u: goto label_53ee20;
        case 0x53ee24u: goto label_53ee24;
        case 0x53ee28u: goto label_53ee28;
        case 0x53ee2cu: goto label_53ee2c;
        case 0x53ee30u: goto label_53ee30;
        case 0x53ee34u: goto label_53ee34;
        case 0x53ee38u: goto label_53ee38;
        case 0x53ee3cu: goto label_53ee3c;
        case 0x53ee40u: goto label_53ee40;
        case 0x53ee44u: goto label_53ee44;
        case 0x53ee48u: goto label_53ee48;
        case 0x53ee4cu: goto label_53ee4c;
        case 0x53ee50u: goto label_53ee50;
        case 0x53ee54u: goto label_53ee54;
        case 0x53ee58u: goto label_53ee58;
        case 0x53ee5cu: goto label_53ee5c;
        case 0x53ee60u: goto label_53ee60;
        case 0x53ee64u: goto label_53ee64;
        case 0x53ee68u: goto label_53ee68;
        case 0x53ee6cu: goto label_53ee6c;
        case 0x53ee70u: goto label_53ee70;
        case 0x53ee74u: goto label_53ee74;
        case 0x53ee78u: goto label_53ee78;
        case 0x53ee7cu: goto label_53ee7c;
        case 0x53ee80u: goto label_53ee80;
        case 0x53ee84u: goto label_53ee84;
        case 0x53ee88u: goto label_53ee88;
        case 0x53ee8cu: goto label_53ee8c;
        case 0x53ee90u: goto label_53ee90;
        case 0x53ee94u: goto label_53ee94;
        case 0x53ee98u: goto label_53ee98;
        case 0x53ee9cu: goto label_53ee9c;
        case 0x53eea0u: goto label_53eea0;
        case 0x53eea4u: goto label_53eea4;
        case 0x53eea8u: goto label_53eea8;
        case 0x53eeacu: goto label_53eeac;
        case 0x53eeb0u: goto label_53eeb0;
        case 0x53eeb4u: goto label_53eeb4;
        case 0x53eeb8u: goto label_53eeb8;
        case 0x53eebcu: goto label_53eebc;
        case 0x53eec0u: goto label_53eec0;
        case 0x53eec4u: goto label_53eec4;
        case 0x53eec8u: goto label_53eec8;
        case 0x53eeccu: goto label_53eecc;
        case 0x53eed0u: goto label_53eed0;
        case 0x53eed4u: goto label_53eed4;
        case 0x53eed8u: goto label_53eed8;
        case 0x53eedcu: goto label_53eedc;
        case 0x53eee0u: goto label_53eee0;
        case 0x53eee4u: goto label_53eee4;
        case 0x53eee8u: goto label_53eee8;
        case 0x53eeecu: goto label_53eeec;
        case 0x53eef0u: goto label_53eef0;
        case 0x53eef4u: goto label_53eef4;
        case 0x53eef8u: goto label_53eef8;
        case 0x53eefcu: goto label_53eefc;
        case 0x53ef00u: goto label_53ef00;
        case 0x53ef04u: goto label_53ef04;
        case 0x53ef08u: goto label_53ef08;
        case 0x53ef0cu: goto label_53ef0c;
        case 0x53ef10u: goto label_53ef10;
        case 0x53ef14u: goto label_53ef14;
        case 0x53ef18u: goto label_53ef18;
        case 0x53ef1cu: goto label_53ef1c;
        case 0x53ef20u: goto label_53ef20;
        case 0x53ef24u: goto label_53ef24;
        case 0x53ef28u: goto label_53ef28;
        case 0x53ef2cu: goto label_53ef2c;
        case 0x53ef30u: goto label_53ef30;
        case 0x53ef34u: goto label_53ef34;
        case 0x53ef38u: goto label_53ef38;
        case 0x53ef3cu: goto label_53ef3c;
        case 0x53ef40u: goto label_53ef40;
        case 0x53ef44u: goto label_53ef44;
        case 0x53ef48u: goto label_53ef48;
        case 0x53ef4cu: goto label_53ef4c;
        case 0x53ef50u: goto label_53ef50;
        case 0x53ef54u: goto label_53ef54;
        case 0x53ef58u: goto label_53ef58;
        case 0x53ef5cu: goto label_53ef5c;
        case 0x53ef60u: goto label_53ef60;
        case 0x53ef64u: goto label_53ef64;
        case 0x53ef68u: goto label_53ef68;
        case 0x53ef6cu: goto label_53ef6c;
        case 0x53ef70u: goto label_53ef70;
        case 0x53ef74u: goto label_53ef74;
        case 0x53ef78u: goto label_53ef78;
        case 0x53ef7cu: goto label_53ef7c;
        case 0x53ef80u: goto label_53ef80;
        case 0x53ef84u: goto label_53ef84;
        case 0x53ef88u: goto label_53ef88;
        case 0x53ef8cu: goto label_53ef8c;
        case 0x53ef90u: goto label_53ef90;
        case 0x53ef94u: goto label_53ef94;
        case 0x53ef98u: goto label_53ef98;
        case 0x53ef9cu: goto label_53ef9c;
        case 0x53efa0u: goto label_53efa0;
        case 0x53efa4u: goto label_53efa4;
        case 0x53efa8u: goto label_53efa8;
        case 0x53efacu: goto label_53efac;
        case 0x53efb0u: goto label_53efb0;
        case 0x53efb4u: goto label_53efb4;
        case 0x53efb8u: goto label_53efb8;
        case 0x53efbcu: goto label_53efbc;
        case 0x53efc0u: goto label_53efc0;
        case 0x53efc4u: goto label_53efc4;
        case 0x53efc8u: goto label_53efc8;
        case 0x53efccu: goto label_53efcc;
        case 0x53efd0u: goto label_53efd0;
        case 0x53efd4u: goto label_53efd4;
        case 0x53efd8u: goto label_53efd8;
        case 0x53efdcu: goto label_53efdc;
        case 0x53efe0u: goto label_53efe0;
        case 0x53efe4u: goto label_53efe4;
        case 0x53efe8u: goto label_53efe8;
        case 0x53efecu: goto label_53efec;
        case 0x53eff0u: goto label_53eff0;
        case 0x53eff4u: goto label_53eff4;
        case 0x53eff8u: goto label_53eff8;
        case 0x53effcu: goto label_53effc;
        case 0x53f000u: goto label_53f000;
        case 0x53f004u: goto label_53f004;
        case 0x53f008u: goto label_53f008;
        case 0x53f00cu: goto label_53f00c;
        case 0x53f010u: goto label_53f010;
        case 0x53f014u: goto label_53f014;
        case 0x53f018u: goto label_53f018;
        case 0x53f01cu: goto label_53f01c;
        case 0x53f020u: goto label_53f020;
        case 0x53f024u: goto label_53f024;
        case 0x53f028u: goto label_53f028;
        case 0x53f02cu: goto label_53f02c;
        case 0x53f030u: goto label_53f030;
        case 0x53f034u: goto label_53f034;
        case 0x53f038u: goto label_53f038;
        case 0x53f03cu: goto label_53f03c;
        case 0x53f040u: goto label_53f040;
        case 0x53f044u: goto label_53f044;
        case 0x53f048u: goto label_53f048;
        case 0x53f04cu: goto label_53f04c;
        case 0x53f050u: goto label_53f050;
        case 0x53f054u: goto label_53f054;
        case 0x53f058u: goto label_53f058;
        case 0x53f05cu: goto label_53f05c;
        case 0x53f060u: goto label_53f060;
        case 0x53f064u: goto label_53f064;
        case 0x53f068u: goto label_53f068;
        case 0x53f06cu: goto label_53f06c;
        case 0x53f070u: goto label_53f070;
        case 0x53f074u: goto label_53f074;
        case 0x53f078u: goto label_53f078;
        case 0x53f07cu: goto label_53f07c;
        case 0x53f080u: goto label_53f080;
        case 0x53f084u: goto label_53f084;
        case 0x53f088u: goto label_53f088;
        case 0x53f08cu: goto label_53f08c;
        case 0x53f090u: goto label_53f090;
        case 0x53f094u: goto label_53f094;
        case 0x53f098u: goto label_53f098;
        case 0x53f09cu: goto label_53f09c;
        case 0x53f0a0u: goto label_53f0a0;
        case 0x53f0a4u: goto label_53f0a4;
        case 0x53f0a8u: goto label_53f0a8;
        case 0x53f0acu: goto label_53f0ac;
        case 0x53f0b0u: goto label_53f0b0;
        case 0x53f0b4u: goto label_53f0b4;
        case 0x53f0b8u: goto label_53f0b8;
        case 0x53f0bcu: goto label_53f0bc;
        case 0x53f0c0u: goto label_53f0c0;
        case 0x53f0c4u: goto label_53f0c4;
        case 0x53f0c8u: goto label_53f0c8;
        case 0x53f0ccu: goto label_53f0cc;
        case 0x53f0d0u: goto label_53f0d0;
        case 0x53f0d4u: goto label_53f0d4;
        case 0x53f0d8u: goto label_53f0d8;
        case 0x53f0dcu: goto label_53f0dc;
        case 0x53f0e0u: goto label_53f0e0;
        case 0x53f0e4u: goto label_53f0e4;
        case 0x53f0e8u: goto label_53f0e8;
        case 0x53f0ecu: goto label_53f0ec;
        case 0x53f0f0u: goto label_53f0f0;
        case 0x53f0f4u: goto label_53f0f4;
        case 0x53f0f8u: goto label_53f0f8;
        case 0x53f0fcu: goto label_53f0fc;
        case 0x53f100u: goto label_53f100;
        case 0x53f104u: goto label_53f104;
        case 0x53f108u: goto label_53f108;
        case 0x53f10cu: goto label_53f10c;
        case 0x53f110u: goto label_53f110;
        case 0x53f114u: goto label_53f114;
        case 0x53f118u: goto label_53f118;
        case 0x53f11cu: goto label_53f11c;
        case 0x53f120u: goto label_53f120;
        case 0x53f124u: goto label_53f124;
        case 0x53f128u: goto label_53f128;
        case 0x53f12cu: goto label_53f12c;
        case 0x53f130u: goto label_53f130;
        case 0x53f134u: goto label_53f134;
        case 0x53f138u: goto label_53f138;
        case 0x53f13cu: goto label_53f13c;
        default: break;
    }

    ctx->pc = 0x53ee20u;

label_53ee20:
    // 0x53ee20: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x53ee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_53ee24:
    // 0x53ee24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53ee28:
    // 0x53ee28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x53ee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_53ee2c:
    // 0x53ee2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53ee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_53ee30:
    // 0x53ee30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53ee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53ee34:
    // 0x53ee34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53ee38:
    // 0x53ee38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53ee3c:
    // 0x53ee3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53ee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53ee40:
    // 0x53ee40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53ee40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53ee44:
    // 0x53ee44: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x53ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_53ee48:
    // 0x53ee48: 0x508300b5  beql        $a0, $v1, . + 4 + (0xB5 << 2)
label_53ee4c:
    if (ctx->pc == 0x53EE4Cu) {
        ctx->pc = 0x53EE4Cu;
            // 0x53ee4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x53EE50u;
        goto label_53ee50;
    }
    ctx->pc = 0x53EE48u;
    {
        const bool branch_taken_0x53ee48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53ee48) {
            ctx->pc = 0x53EE4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EE48u;
            // 0x53ee4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F120u;
            goto label_53f120;
        }
    }
    ctx->pc = 0x53EE50u;
label_53ee50:
    // 0x53ee50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53ee54:
    // 0x53ee54: 0x50830042  beql        $a0, $v1, . + 4 + (0x42 << 2)
label_53ee58:
    if (ctx->pc == 0x53EE58u) {
        ctx->pc = 0x53EE58u;
            // 0x53ee58: 0x8e300054  lw          $s0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x53EE5Cu;
        goto label_53ee5c;
    }
    ctx->pc = 0x53EE54u;
    {
        const bool branch_taken_0x53ee54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53ee54) {
            ctx->pc = 0x53EE58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EE54u;
            // 0x53ee58: 0x8e300054  lw          $s0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53EF60u;
            goto label_53ef60;
        }
    }
    ctx->pc = 0x53EE5Cu;
label_53ee5c:
    // 0x53ee5c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_53ee60:
    if (ctx->pc == 0x53EE60u) {
        ctx->pc = 0x53EE60u;
            // 0x53ee60: 0x3c024416  lui         $v0, 0x4416 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
        ctx->pc = 0x53EE64u;
        goto label_53ee64;
    }
    ctx->pc = 0x53EE5Cu;
    {
        const bool branch_taken_0x53ee5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ee5c) {
            ctx->pc = 0x53EE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EE5Cu;
            // 0x53ee60: 0x3c024416  lui         $v0, 0x4416 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53EE6Cu;
            goto label_53ee6c;
        }
    }
    ctx->pc = 0x53EE64u;
label_53ee64:
    // 0x53ee64: 0x100000ad  b           . + 4 + (0xAD << 2)
label_53ee68:
    if (ctx->pc == 0x53EE68u) {
        ctx->pc = 0x53EE6Cu;
        goto label_53ee6c;
    }
    ctx->pc = 0x53EE64u;
    {
        const bool branch_taken_0x53ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ee64) {
            ctx->pc = 0x53F11Cu;
            goto label_53f11c;
        }
    }
    ctx->pc = 0x53EE6Cu;
label_53ee6c:
    // 0x53ee6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x53ee6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53ee70:
    // 0x53ee70: 0xc147a7c  jal         func_51E9F0
label_53ee74:
    if (ctx->pc == 0x53EE74u) {
        ctx->pc = 0x53EE74u;
            // 0x53ee74: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->pc = 0x53EE78u;
        goto label_53ee78;
    }
    ctx->pc = 0x53EE70u;
    SET_GPR_U32(ctx, 31, 0x53EE78u);
    ctx->pc = 0x53EE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EE70u;
            // 0x53ee74: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51E9F0u;
    if (runtime->hasFunction(0x51E9F0u)) {
        auto targetFn = runtime->lookupFunction(0x51E9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EE78u; }
        if (ctx->pc != 0x53EE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051E9F0_0x51e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EE78u; }
        if (ctx->pc != 0x53EE78u) { return; }
    }
    ctx->pc = 0x53EE78u;
label_53ee78:
    // 0x53ee78: 0xc077264  jal         func_1DC990
label_53ee7c:
    if (ctx->pc == 0x53EE7Cu) {
        ctx->pc = 0x53EE7Cu;
            // 0x53ee7c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x53EE80u;
        goto label_53ee80;
    }
    ctx->pc = 0x53EE78u;
    SET_GPR_U32(ctx, 31, 0x53EE80u);
    ctx->pc = 0x53EE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EE78u;
            // 0x53ee7c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EE80u; }
        if (ctx->pc != 0x53EE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EE80u; }
        if (ctx->pc != 0x53EE80u) { return; }
    }
    ctx->pc = 0x53EE80u;
label_53ee80:
    // 0x53ee80: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x53ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_53ee84:
    // 0x53ee84: 0xc077264  jal         func_1DC990
label_53ee88:
    if (ctx->pc == 0x53EE88u) {
        ctx->pc = 0x53EE88u;
            // 0x53ee88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EE8Cu;
        goto label_53ee8c;
    }
    ctx->pc = 0x53EE84u;
    SET_GPR_U32(ctx, 31, 0x53EE8Cu);
    ctx->pc = 0x53EE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EE84u;
            // 0x53ee88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EE8Cu; }
        if (ctx->pc != 0x53EE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EE8Cu; }
        if (ctx->pc != 0x53EE8Cu) { return; }
    }
    ctx->pc = 0x53EE8Cu;
label_53ee8c:
    // 0x53ee8c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x53ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_53ee90:
    // 0x53ee90: 0xc077264  jal         func_1DC990
label_53ee94:
    if (ctx->pc == 0x53EE94u) {
        ctx->pc = 0x53EE94u;
            // 0x53ee94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EE98u;
        goto label_53ee98;
    }
    ctx->pc = 0x53EE90u;
    SET_GPR_U32(ctx, 31, 0x53EE98u);
    ctx->pc = 0x53EE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EE90u;
            // 0x53ee94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EE98u; }
        if (ctx->pc != 0x53EE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EE98u; }
        if (ctx->pc != 0x53EE98u) { return; }
    }
    ctx->pc = 0x53EE98u;
label_53ee98:
    // 0x53ee98: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x53ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53ee9c:
    // 0x53ee9c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x53ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_53eea0:
    // 0x53eea0: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x53eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_53eea4:
    // 0x53eea4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x53eea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_53eea8:
    // 0x53eea8: 0xc0b6df0  jal         func_2DB7C0
label_53eeac:
    if (ctx->pc == 0x53EEACu) {
        ctx->pc = 0x53EEACu;
            // 0x53eeac: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x53EEB0u;
        goto label_53eeb0;
    }
    ctx->pc = 0x53EEA8u;
    SET_GPR_U32(ctx, 31, 0x53EEB0u);
    ctx->pc = 0x53EEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EEA8u;
            // 0x53eeac: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEB0u; }
        if (ctx->pc != 0x53EEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEB0u; }
        if (ctx->pc != 0x53EEB0u) { return; }
    }
    ctx->pc = 0x53EEB0u;
label_53eeb0:
    // 0x53eeb0: 0xc14fc9c  jal         func_53F270
label_53eeb4:
    if (ctx->pc == 0x53EEB4u) {
        ctx->pc = 0x53EEB4u;
            // 0x53eeb4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x53EEB8u;
        goto label_53eeb8;
    }
    ctx->pc = 0x53EEB0u;
    SET_GPR_U32(ctx, 31, 0x53EEB8u);
    ctx->pc = 0x53EEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EEB0u;
            // 0x53eeb4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F270u;
    if (runtime->hasFunction(0x53F270u)) {
        auto targetFn = runtime->lookupFunction(0x53F270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEB8u; }
        if (ctx->pc != 0x53EEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F270_0x53f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEB8u; }
        if (ctx->pc != 0x53EEB8u) { return; }
    }
    ctx->pc = 0x53EEB8u;
label_53eeb8:
    // 0x53eeb8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x53eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_53eebc:
    // 0x53eebc: 0xc14fc90  jal         func_53F240
label_53eec0:
    if (ctx->pc == 0x53EEC0u) {
        ctx->pc = 0x53EEC0u;
            // 0x53eec0: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x53EEC4u;
        goto label_53eec4;
    }
    ctx->pc = 0x53EEBCu;
    SET_GPR_U32(ctx, 31, 0x53EEC4u);
    ctx->pc = 0x53EEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EEBCu;
            // 0x53eec0: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F240u;
    if (runtime->hasFunction(0x53F240u)) {
        auto targetFn = runtime->lookupFunction(0x53F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEC4u; }
        if (ctx->pc != 0x53EEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F240_0x53f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEC4u; }
        if (ctx->pc != 0x53EEC4u) { return; }
    }
    ctx->pc = 0x53EEC4u;
label_53eec4:
    // 0x53eec4: 0xc14fc80  jal         func_53F200
label_53eec8:
    if (ctx->pc == 0x53EEC8u) {
        ctx->pc = 0x53EEC8u;
            // 0x53eec8: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x53EECCu;
        goto label_53eecc;
    }
    ctx->pc = 0x53EEC4u;
    SET_GPR_U32(ctx, 31, 0x53EECCu);
    ctx->pc = 0x53EEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EEC4u;
            // 0x53eec8: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F200u;
    if (runtime->hasFunction(0x53F200u)) {
        auto targetFn = runtime->lookupFunction(0x53F200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EECCu; }
        if (ctx->pc != 0x53EECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F200_0x53f200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EECCu; }
        if (ctx->pc != 0x53EECCu) { return; }
    }
    ctx->pc = 0x53EECCu;
label_53eecc:
    // 0x53eecc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x53eeccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53eed0:
    // 0x53eed0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_53eed4:
    if (ctx->pc == 0x53EED4u) {
        ctx->pc = 0x53EED4u;
            // 0x53eed4: 0xae300058  sw          $s0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
        ctx->pc = 0x53EED8u;
        goto label_53eed8;
    }
    ctx->pc = 0x53EED0u;
    {
        const bool branch_taken_0x53eed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53eed0) {
            ctx->pc = 0x53EED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EED0u;
            // 0x53eed4: 0xae300058  sw          $s0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53EF04u;
            goto label_53ef04;
        }
    }
    ctx->pc = 0x53EED8u;
label_53eed8:
    // 0x53eed8: 0xc14fc7c  jal         func_53F1F0
label_53eedc:
    if (ctx->pc == 0x53EEDCu) {
        ctx->pc = 0x53EEE0u;
        goto label_53eee0;
    }
    ctx->pc = 0x53EED8u;
    SET_GPR_U32(ctx, 31, 0x53EEE0u);
    ctx->pc = 0x53F1F0u;
    if (runtime->hasFunction(0x53F1F0u)) {
        auto targetFn = runtime->lookupFunction(0x53F1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEE0u; }
        if (ctx->pc != 0x53EEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F1F0_0x53f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEE0u; }
        if (ctx->pc != 0x53EEE0u) { return; }
    }
    ctx->pc = 0x53EEE0u;
label_53eee0:
    // 0x53eee0: 0xc14fc78  jal         func_53F1E0
label_53eee4:
    if (ctx->pc == 0x53EEE4u) {
        ctx->pc = 0x53EEE4u;
            // 0x53eee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EEE8u;
        goto label_53eee8;
    }
    ctx->pc = 0x53EEE0u;
    SET_GPR_U32(ctx, 31, 0x53EEE8u);
    ctx->pc = 0x53EEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EEE0u;
            // 0x53eee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F1E0u;
    if (runtime->hasFunction(0x53F1E0u)) {
        auto targetFn = runtime->lookupFunction(0x53F1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEE8u; }
        if (ctx->pc != 0x53EEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F1E0_0x53f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEE8u; }
        if (ctx->pc != 0x53EEE8u) { return; }
    }
    ctx->pc = 0x53EEE8u;
label_53eee8:
    // 0x53eee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53eee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53eeec:
    // 0x53eeec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x53eeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53eef0:
    // 0x53eef0: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x53eef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_53eef4:
    // 0x53eef4: 0xc08afe0  jal         func_22BF80
label_53eef8:
    if (ctx->pc == 0x53EEF8u) {
        ctx->pc = 0x53EEF8u;
            // 0x53eef8: 0x3c070010  lui         $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
        ctx->pc = 0x53EEFCu;
        goto label_53eefc;
    }
    ctx->pc = 0x53EEF4u;
    SET_GPR_U32(ctx, 31, 0x53EEFCu);
    ctx->pc = 0x53EEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EEF4u;
            // 0x53eef8: 0x3c070010  lui         $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEFCu; }
        if (ctx->pc != 0x53EEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EEFCu; }
        if (ctx->pc != 0x53EEFCu) { return; }
    }
    ctx->pc = 0x53EEFCu;
label_53eefc:
    // 0x53eefc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x53eefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53ef00:
    // 0x53ef00: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x53ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
label_53ef04:
    // 0x53ef04: 0xc0b6e84  jal         func_2DBA10
label_53ef08:
    if (ctx->pc == 0x53EF08u) {
        ctx->pc = 0x53EF0Cu;
        goto label_53ef0c;
    }
    ctx->pc = 0x53EF04u;
    SET_GPR_U32(ctx, 31, 0x53EF0Cu);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF0Cu; }
        if (ctx->pc != 0x53EF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF0Cu; }
        if (ctx->pc != 0x53EF0Cu) { return; }
    }
    ctx->pc = 0x53EF0Cu;
label_53ef0c:
    // 0x53ef0c: 0xc0b6e24  jal         func_2DB890
label_53ef10:
    if (ctx->pc == 0x53EF10u) {
        ctx->pc = 0x53EF10u;
            // 0x53ef10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EF14u;
        goto label_53ef14;
    }
    ctx->pc = 0x53EF0Cu;
    SET_GPR_U32(ctx, 31, 0x53EF14u);
    ctx->pc = 0x53EF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EF0Cu;
            // 0x53ef10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB890u;
    if (runtime->hasFunction(0x2DB890u)) {
        auto targetFn = runtime->lookupFunction(0x2DB890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF14u; }
        if (ctx->pc != 0x53EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB890_0x2db890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF14u; }
        if (ctx->pc != 0x53EF14u) { return; }
    }
    ctx->pc = 0x53EF14u;
label_53ef14:
    // 0x53ef14: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x53ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_53ef18:
    // 0x53ef18: 0xc08c798  jal         func_231E60
label_53ef1c:
    if (ctx->pc == 0x53EF1Cu) {
        ctx->pc = 0x53EF1Cu;
            // 0x53ef1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EF20u;
        goto label_53ef20;
    }
    ctx->pc = 0x53EF18u;
    SET_GPR_U32(ctx, 31, 0x53EF20u);
    ctx->pc = 0x53EF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EF18u;
            // 0x53ef1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF20u; }
        if (ctx->pc != 0x53EF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF20u; }
        if (ctx->pc != 0x53EF20u) { return; }
    }
    ctx->pc = 0x53EF20u;
label_53ef20:
    // 0x53ef20: 0xc08d414  jal         func_235050
label_53ef24:
    if (ctx->pc == 0x53EF24u) {
        ctx->pc = 0x53EF24u;
            // 0x53ef24: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x53EF28u;
        goto label_53ef28;
    }
    ctx->pc = 0x53EF20u;
    SET_GPR_U32(ctx, 31, 0x53EF28u);
    ctx->pc = 0x53EF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EF20u;
            // 0x53ef24: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF28u; }
        if (ctx->pc != 0x53EF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF28u; }
        if (ctx->pc != 0x53EF28u) { return; }
    }
    ctx->pc = 0x53EF28u;
label_53ef28:
    // 0x53ef28: 0xc077290  jal         func_1DCA40
label_53ef2c:
    if (ctx->pc == 0x53EF2Cu) {
        ctx->pc = 0x53EF2Cu;
            // 0x53ef2c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x53EF30u;
        goto label_53ef30;
    }
    ctx->pc = 0x53EF28u;
    SET_GPR_U32(ctx, 31, 0x53EF30u);
    ctx->pc = 0x53EF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EF28u;
            // 0x53ef2c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF30u; }
        if (ctx->pc != 0x53EF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF30u; }
        if (ctx->pc != 0x53EF30u) { return; }
    }
    ctx->pc = 0x53EF30u;
label_53ef30:
    // 0x53ef30: 0xc077224  jal         func_1DC890
label_53ef34:
    if (ctx->pc == 0x53EF34u) {
        ctx->pc = 0x53EF34u;
            // 0x53ef34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EF38u;
        goto label_53ef38;
    }
    ctx->pc = 0x53EF30u;
    SET_GPR_U32(ctx, 31, 0x53EF38u);
    ctx->pc = 0x53EF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EF30u;
            // 0x53ef34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF38u; }
        if (ctx->pc != 0x53EF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF38u; }
        if (ctx->pc != 0x53EF38u) { return; }
    }
    ctx->pc = 0x53EF38u;
label_53ef38:
    // 0x53ef38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x53ef38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_53ef3c:
    // 0x53ef3c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x53ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_53ef40:
    // 0x53ef40: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x53ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_53ef44:
    // 0x53ef44: 0x2463d5a0  addiu       $v1, $v1, -0x2A60
    ctx->pc = 0x53ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956448));
label_53ef48:
    // 0x53ef48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x53ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_53ef4c:
    // 0x53ef4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53ef50:
    // 0x53ef50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x53ef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53ef54:
    // 0x53ef54: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x53ef54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_53ef58:
    // 0x53ef58: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x53ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_53ef5c:
    // 0x53ef5c: 0x8e300054  lw          $s0, 0x54($s1)
    ctx->pc = 0x53ef5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_53ef60:
    // 0x53ef60: 0x8e340058  lw          $s4, 0x58($s1)
    ctx->pc = 0x53ef60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_53ef64:
    // 0x53ef64: 0xc077264  jal         func_1DC990
label_53ef68:
    if (ctx->pc == 0x53EF68u) {
        ctx->pc = 0x53EF68u;
            // 0x53ef68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EF6Cu;
        goto label_53ef6c;
    }
    ctx->pc = 0x53EF64u;
    SET_GPR_U32(ctx, 31, 0x53EF6Cu);
    ctx->pc = 0x53EF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EF64u;
            // 0x53ef68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF6Cu; }
        if (ctx->pc != 0x53EF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF6Cu; }
        if (ctx->pc != 0x53EF6Cu) { return; }
    }
    ctx->pc = 0x53EF6Cu;
label_53ef6c:
    // 0x53ef6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x53ef6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53ef70:
    // 0x53ef70: 0xc077264  jal         func_1DC990
label_53ef74:
    if (ctx->pc == 0x53EF74u) {
        ctx->pc = 0x53EF74u;
            // 0x53ef74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EF78u;
        goto label_53ef78;
    }
    ctx->pc = 0x53EF70u;
    SET_GPR_U32(ctx, 31, 0x53EF78u);
    ctx->pc = 0x53EF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EF70u;
            // 0x53ef74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF78u; }
        if (ctx->pc != 0x53EF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF78u; }
        if (ctx->pc != 0x53EF78u) { return; }
    }
    ctx->pc = 0x53EF78u;
label_53ef78:
    // 0x53ef78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x53ef78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53ef7c:
    // 0x53ef7c: 0xc077264  jal         func_1DC990
label_53ef80:
    if (ctx->pc == 0x53EF80u) {
        ctx->pc = 0x53EF80u;
            // 0x53ef80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EF84u;
        goto label_53ef84;
    }
    ctx->pc = 0x53EF7Cu;
    SET_GPR_U32(ctx, 31, 0x53EF84u);
    ctx->pc = 0x53EF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EF7Cu;
            // 0x53ef80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF84u; }
        if (ctx->pc != 0x53EF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF84u; }
        if (ctx->pc != 0x53EF84u) { return; }
    }
    ctx->pc = 0x53EF84u;
label_53ef84:
    // 0x53ef84: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x53ef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53ef88:
    // 0x53ef88: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x53ef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_53ef8c:
    // 0x53ef8c: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x53ef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_53ef90:
    // 0x53ef90: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x53ef90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_53ef94:
    // 0x53ef94: 0xc0b6df0  jal         func_2DB7C0
label_53ef98:
    if (ctx->pc == 0x53EF98u) {
        ctx->pc = 0x53EF98u;
            // 0x53ef98: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x53EF9Cu;
        goto label_53ef9c;
    }
    ctx->pc = 0x53EF94u;
    SET_GPR_U32(ctx, 31, 0x53EF9Cu);
    ctx->pc = 0x53EF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EF94u;
            // 0x53ef98: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF9Cu; }
        if (ctx->pc != 0x53EF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EF9Cu; }
        if (ctx->pc != 0x53EF9Cu) { return; }
    }
    ctx->pc = 0x53EF9Cu;
label_53ef9c:
    // 0x53ef9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x53ef9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53efa0:
    // 0x53efa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53efa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53efa4:
    // 0x53efa4: 0xc08af48  jal         func_22BD20
label_53efa8:
    if (ctx->pc == 0x53EFA8u) {
        ctx->pc = 0x53EFA8u;
            // 0x53efa8: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x53EFACu;
        goto label_53efac;
    }
    ctx->pc = 0x53EFA4u;
    SET_GPR_U32(ctx, 31, 0x53EFACu);
    ctx->pc = 0x53EFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EFA4u;
            // 0x53efa8: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BD20u;
    if (runtime->hasFunction(0x22BD20u)) {
        auto targetFn = runtime->lookupFunction(0x22BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFACu; }
        if (ctx->pc != 0x53EFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BD20_0x22bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFACu; }
        if (ctx->pc != 0x53EFACu) { return; }
    }
    ctx->pc = 0x53EFACu;
label_53efac:
    // 0x53efac: 0xc14fc64  jal         func_53F190
label_53efb0:
    if (ctx->pc == 0x53EFB0u) {
        ctx->pc = 0x53EFB0u;
            // 0x53efb0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53EFB4u;
        goto label_53efb4;
    }
    ctx->pc = 0x53EFACu;
    SET_GPR_U32(ctx, 31, 0x53EFB4u);
    ctx->pc = 0x53EFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EFACu;
            // 0x53efb0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F190u;
    if (runtime->hasFunction(0x53F190u)) {
        auto targetFn = runtime->lookupFunction(0x53F190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFB4u; }
        if (ctx->pc != 0x53EFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F190_0x53f190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFB4u; }
        if (ctx->pc != 0x53EFB4u) { return; }
    }
    ctx->pc = 0x53EFB4u;
label_53efb4:
    // 0x53efb4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53efb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53efb8:
    // 0x53efb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x53efb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_53efbc:
    // 0x53efbc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x53efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_53efc0:
    // 0x53efc0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x53efc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_53efc4:
    // 0x53efc4: 0x320f809  jalr        $t9
label_53efc8:
    if (ctx->pc == 0x53EFC8u) {
        ctx->pc = 0x53EFC8u;
            // 0x53efc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EFCCu;
        goto label_53efcc;
    }
    ctx->pc = 0x53EFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53EFCCu);
        ctx->pc = 0x53EFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53EFC4u;
            // 0x53efc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53EFCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53EFCCu; }
            if (ctx->pc != 0x53EFCCu) { return; }
        }
        }
    }
    ctx->pc = 0x53EFCCu;
label_53efcc:
    // 0x53efcc: 0xc14fc60  jal         func_53F180
label_53efd0:
    if (ctx->pc == 0x53EFD0u) {
        ctx->pc = 0x53EFD0u;
            // 0x53efd0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53EFD4u;
        goto label_53efd4;
    }
    ctx->pc = 0x53EFCCu;
    SET_GPR_U32(ctx, 31, 0x53EFD4u);
    ctx->pc = 0x53EFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EFCCu;
            // 0x53efd0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F180u;
    if (runtime->hasFunction(0x53F180u)) {
        auto targetFn = runtime->lookupFunction(0x53F180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFD4u; }
        if (ctx->pc != 0x53EFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F180_0x53f180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFD4u; }
        if (ctx->pc != 0x53EFD4u) { return; }
    }
    ctx->pc = 0x53EFD4u;
label_53efd4:
    // 0x53efd4: 0xc14fc5c  jal         func_53F170
label_53efd8:
    if (ctx->pc == 0x53EFD8u) {
        ctx->pc = 0x53EFD8u;
            // 0x53efd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EFDCu;
        goto label_53efdc;
    }
    ctx->pc = 0x53EFD4u;
    SET_GPR_U32(ctx, 31, 0x53EFDCu);
    ctx->pc = 0x53EFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EFD4u;
            // 0x53efd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F170u;
    if (runtime->hasFunction(0x53F170u)) {
        auto targetFn = runtime->lookupFunction(0x53F170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFDCu; }
        if (ctx->pc != 0x53EFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F170_0x53f170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFDCu; }
        if (ctx->pc != 0x53EFDCu) { return; }
    }
    ctx->pc = 0x53EFDCu;
label_53efdc:
    // 0x53efdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x53efdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53efe0:
    // 0x53efe0: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_53efe4:
    if (ctx->pc == 0x53EFE4u) {
        ctx->pc = 0x53EFE8u;
        goto label_53efe8;
    }
    ctx->pc = 0x53EFE0u;
    {
        const bool branch_taken_0x53efe0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x53efe0) {
            ctx->pc = 0x53F040u;
            goto label_53f040;
        }
    }
    ctx->pc = 0x53EFE8u;
label_53efe8:
    // 0x53efe8: 0xc0b6e84  jal         func_2DBA10
label_53efec:
    if (ctx->pc == 0x53EFECu) {
        ctx->pc = 0x53EFECu;
            // 0x53efec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EFF0u;
        goto label_53eff0;
    }
    ctx->pc = 0x53EFE8u;
    SET_GPR_U32(ctx, 31, 0x53EFF0u);
    ctx->pc = 0x53EFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EFE8u;
            // 0x53efec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFF0u; }
        if (ctx->pc != 0x53EFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFF0u; }
        if (ctx->pc != 0x53EFF0u) { return; }
    }
    ctx->pc = 0x53EFF0u;
label_53eff0:
    // 0x53eff0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x53eff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53eff4:
    // 0x53eff4: 0xc14fc60  jal         func_53F180
label_53eff8:
    if (ctx->pc == 0x53EFF8u) {
        ctx->pc = 0x53EFF8u;
            // 0x53eff8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53EFFCu;
        goto label_53effc;
    }
    ctx->pc = 0x53EFF4u;
    SET_GPR_U32(ctx, 31, 0x53EFFCu);
    ctx->pc = 0x53EFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EFF4u;
            // 0x53eff8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F180u;
    if (runtime->hasFunction(0x53F180u)) {
        auto targetFn = runtime->lookupFunction(0x53F180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFFCu; }
        if (ctx->pc != 0x53EFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F180_0x53f180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EFFCu; }
        if (ctx->pc != 0x53EFFCu) { return; }
    }
    ctx->pc = 0x53EFFCu;
label_53effc:
    // 0x53effc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53f000:
    // 0x53f000: 0xc14fc58  jal         func_53F160
label_53f004:
    if (ctx->pc == 0x53F004u) {
        ctx->pc = 0x53F004u;
            // 0x53f004: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F008u;
        goto label_53f008;
    }
    ctx->pc = 0x53F000u;
    SET_GPR_U32(ctx, 31, 0x53F008u);
    ctx->pc = 0x53F004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F000u;
            // 0x53f004: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F160u;
    if (runtime->hasFunction(0x53F160u)) {
        auto targetFn = runtime->lookupFunction(0x53F160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F008u; }
        if (ctx->pc != 0x53F008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F160_0x53f160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F008u; }
        if (ctx->pc != 0x53F008u) { return; }
    }
    ctx->pc = 0x53F008u;
label_53f008:
    // 0x53f008: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x53f008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_53f00c:
    // 0x53f00c: 0xc14fc50  jal         func_53F140
label_53f010:
    if (ctx->pc == 0x53F010u) {
        ctx->pc = 0x53F010u;
            // 0x53f010: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F014u;
        goto label_53f014;
    }
    ctx->pc = 0x53F00Cu;
    SET_GPR_U32(ctx, 31, 0x53F014u);
    ctx->pc = 0x53F010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F00Cu;
            // 0x53f010: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53F140u;
    if (runtime->hasFunction(0x53F140u)) {
        auto targetFn = runtime->lookupFunction(0x53F140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F014u; }
        if (ctx->pc != 0x53F014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053F140_0x53f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F014u; }
        if (ctx->pc != 0x53F014u) { return; }
    }
    ctx->pc = 0x53F014u;
label_53f014:
    // 0x53f014: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x53f014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53f018:
    // 0x53f018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53f018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53f01c:
    // 0x53f01c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x53f01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53f020:
    // 0x53f020: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x53f020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_53f024:
    // 0x53f024: 0x320f809  jalr        $t9
label_53f028:
    if (ctx->pc == 0x53F028u) {
        ctx->pc = 0x53F028u;
            // 0x53f028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F02Cu;
        goto label_53f02c;
    }
    ctx->pc = 0x53F024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F02Cu);
        ctx->pc = 0x53F028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F024u;
            // 0x53f028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F02Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F02Cu; }
            if (ctx->pc != 0x53F02Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53F02Cu;
label_53f02c:
    // 0x53f02c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x53f02cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_53f030:
    // 0x53f030: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x53f030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_53f034:
    // 0x53f034: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_53f038:
    if (ctx->pc == 0x53F038u) {
        ctx->pc = 0x53F03Cu;
        goto label_53f03c;
    }
    ctx->pc = 0x53F034u;
    {
        const bool branch_taken_0x53f034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53f034) {
            ctx->pc = 0x53EFF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53eff4;
        }
    }
    ctx->pc = 0x53F03Cu;
label_53f03c:
    // 0x53f03c: 0x0  nop
    ctx->pc = 0x53f03cu;
    // NOP
label_53f040:
    // 0x53f040: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x53f040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_53f044:
    // 0x53f044: 0xc07f774  jal         func_1FDDD0
label_53f048:
    if (ctx->pc == 0x53F048u) {
        ctx->pc = 0x53F048u;
            // 0x53f048: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x53F04Cu;
        goto label_53f04c;
    }
    ctx->pc = 0x53F044u;
    SET_GPR_U32(ctx, 31, 0x53F04Cu);
    ctx->pc = 0x53F048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F044u;
            // 0x53f048: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDDD0u;
    if (runtime->hasFunction(0x1FDDD0u)) {
        auto targetFn = runtime->lookupFunction(0x1FDDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F04Cu; }
        if (ctx->pc != 0x53F04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDDD0_0x1fddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F04Cu; }
        if (ctx->pc != 0x53F04Cu) { return; }
    }
    ctx->pc = 0x53F04Cu;
label_53f04c:
    // 0x53f04c: 0x92230064  lbu         $v1, 0x64($s1)
    ctx->pc = 0x53f04cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
label_53f050:
    // 0x53f050: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_53f054:
    if (ctx->pc == 0x53F054u) {
        ctx->pc = 0x53F058u;
        goto label_53f058;
    }
    ctx->pc = 0x53F050u;
    {
        const bool branch_taken_0x53f050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53f050) {
            ctx->pc = 0x53F11Cu;
            goto label_53f11c;
        }
    }
    ctx->pc = 0x53F058u;
label_53f058:
    // 0x53f058: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x53f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53f05c:
    // 0x53f05c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x53f05cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_53f060:
    // 0x53f060: 0x0  nop
    ctx->pc = 0x53f060u;
    // NOP
label_53f064:
    // 0x53f064: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x53f064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53f068:
    // 0x53f068: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_53f06c:
    if (ctx->pc == 0x53F06Cu) {
        ctx->pc = 0x53F06Cu;
            // 0x53f06c: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->pc = 0x53F070u;
        goto label_53f070;
    }
    ctx->pc = 0x53F068u;
    {
        const bool branch_taken_0x53f068 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53F06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F068u;
            // 0x53f06c: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f068) {
            ctx->pc = 0x53F098u;
            goto label_53f098;
        }
    }
    ctx->pc = 0x53F070u;
label_53f070:
    // 0x53f070: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53f070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53f074:
    // 0x53f074: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x53f074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_53f078:
    // 0x53f078: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x53f078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53f07c:
    // 0x53f07c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x53f07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53f080:
    // 0x53f080: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x53f080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_53f084:
    // 0x53f084: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x53f084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53f088:
    // 0x53f088: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_53f08c:
    if (ctx->pc == 0x53F08Cu) {
        ctx->pc = 0x53F08Cu;
            // 0x53f08c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x53F090u;
        goto label_53f090;
    }
    ctx->pc = 0x53F088u;
    {
        const bool branch_taken_0x53f088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x53F08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F088u;
            // 0x53f08c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f088) {
            ctx->pc = 0x53F0ACu;
            goto label_53f0ac;
        }
    }
    ctx->pc = 0x53F090u;
label_53f090:
    // 0x53f090: 0x10000006  b           . + 4 + (0x6 << 2)
label_53f094:
    if (ctx->pc == 0x53F094u) {
        ctx->pc = 0x53F094u;
            // 0x53f094: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x53F098u;
        goto label_53f098;
    }
    ctx->pc = 0x53F090u;
    {
        const bool branch_taken_0x53f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F090u;
            // 0x53f094: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f090) {
            ctx->pc = 0x53F0ACu;
            goto label_53f0ac;
        }
    }
    ctx->pc = 0x53F098u;
label_53f098:
    // 0x53f098: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x53f098u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53f09c:
    // 0x53f09c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_53f0a0:
    if (ctx->pc == 0x53F0A0u) {
        ctx->pc = 0x53F0A0u;
            // 0x53f0a0: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x53F0A4u;
        goto label_53f0a4;
    }
    ctx->pc = 0x53F09Cu;
    {
        const bool branch_taken_0x53f09c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x53f09c) {
            ctx->pc = 0x53F0A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F09Cu;
            // 0x53f0a0: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F0B0u;
            goto label_53f0b0;
        }
    }
    ctx->pc = 0x53F0A4u;
label_53f0a4:
    // 0x53f0a4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x53f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_53f0a8:
    // 0x53f0a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x53f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_53f0ac:
    // 0x53f0ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x53f0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53f0b0:
    // 0x53f0b0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x53f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_53f0b4:
    // 0x53f0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x53f0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53f0b8:
    // 0x53f0b8: 0x0  nop
    ctx->pc = 0x53f0b8u;
    // NOP
label_53f0bc:
    // 0x53f0bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x53f0bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53f0c0:
    // 0x53f0c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_53f0c4:
    if (ctx->pc == 0x53F0C4u) {
        ctx->pc = 0x53F0C4u;
            // 0x53f0c4: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x53F0C8u;
        goto label_53f0c8;
    }
    ctx->pc = 0x53F0C0u;
    {
        const bool branch_taken_0x53f0c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53F0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F0C0u;
            // 0x53f0c4: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f0c0) {
            ctx->pc = 0x53F0E0u;
            goto label_53f0e0;
        }
    }
    ctx->pc = 0x53F0C8u;
label_53f0c8:
    // 0x53f0c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x53f0c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53f0cc:
    // 0x53f0cc: 0x0  nop
    ctx->pc = 0x53f0ccu;
    // NOP
label_53f0d0:
    // 0x53f0d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x53f0d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53f0d4:
    // 0x53f0d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53f0d8:
    if (ctx->pc == 0x53F0D8u) {
        ctx->pc = 0x53F0DCu;
        goto label_53f0dc;
    }
    ctx->pc = 0x53F0D4u;
    {
        const bool branch_taken_0x53f0d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x53f0d4) {
            ctx->pc = 0x53F0E0u;
            goto label_53f0e0;
        }
    }
    ctx->pc = 0x53F0DCu;
label_53f0dc:
    // 0x53f0dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x53f0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53f0e0:
    // 0x53f0e0: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
label_53f0e4:
    if (ctx->pc == 0x53F0E4u) {
        ctx->pc = 0x53F0E4u;
            // 0x53f0e4: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x53F0E8u;
        goto label_53f0e8;
    }
    ctx->pc = 0x53F0E0u;
    {
        const bool branch_taken_0x53f0e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x53f0e0) {
            ctx->pc = 0x53F0E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F0E0u;
            // 0x53f0e4: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F100u;
            goto label_53f100;
        }
    }
    ctx->pc = 0x53F0E8u;
label_53f0e8:
    // 0x53f0e8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x53f0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_53f0ec:
    // 0x53f0ec: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x53f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_53f0f0:
    // 0x53f0f0: 0x8c840db0  lw          $a0, 0xDB0($a0)
    ctx->pc = 0x53f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_53f0f4:
    // 0x53f0f4: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_53f0f8:
    if (ctx->pc == 0x53F0F8u) {
        ctx->pc = 0x53F0FCu;
        goto label_53f0fc;
    }
    ctx->pc = 0x53F0F4u;
    {
        const bool branch_taken_0x53f0f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x53f0f4) {
            ctx->pc = 0x53F11Cu;
            goto label_53f11c;
        }
    }
    ctx->pc = 0x53F0FCu;
label_53f0fc:
    // 0x53f0fc: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x53f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_53f100:
    // 0x53f100: 0xa2200064  sb          $zero, 0x64($s1)
    ctx->pc = 0x53f100u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 0));
label_53f104:
    // 0x53f104: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53f104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53f108:
    // 0x53f108: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x53f108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_53f10c:
    // 0x53f10c: 0x320f809  jalr        $t9
label_53f110:
    if (ctx->pc == 0x53F110u) {
        ctx->pc = 0x53F110u;
            // 0x53f110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F114u;
        goto label_53f114;
    }
    ctx->pc = 0x53F10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F114u);
        ctx->pc = 0x53F110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F10Cu;
            // 0x53f110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F114u; }
            if (ctx->pc != 0x53F114u) { return; }
        }
        }
    }
    ctx->pc = 0x53F114u;
label_53f114:
    // 0x53f114: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53f114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53f118:
    // 0x53f118: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x53f118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_53f11c:
    // 0x53f11c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x53f11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_53f120:
    // 0x53f120: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53f120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53f124:
    // 0x53f124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53f124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53f128:
    // 0x53f128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53f128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53f12c:
    // 0x53f12c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53f12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53f130:
    // 0x53f130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53f130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53f134:
    // 0x53f134: 0x3e00008  jr          $ra
label_53f138:
    if (ctx->pc == 0x53F138u) {
        ctx->pc = 0x53F138u;
            // 0x53f138: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x53F13Cu;
        goto label_53f13c;
    }
    ctx->pc = 0x53F134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F134u;
            // 0x53f138: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F13Cu;
label_53f13c:
    // 0x53f13c: 0x0  nop
    ctx->pc = 0x53f13cu;
    // NOP
}
