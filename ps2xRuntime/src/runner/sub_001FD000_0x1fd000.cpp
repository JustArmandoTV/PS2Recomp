#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD000
// Address: 0x1fd000 - 0x1fd0d0
void sub_001FD000_0x1fd000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD000_0x1fd000");
#endif

    switch (ctx->pc) {
        case 0x1fd000u: goto label_1fd000;
        case 0x1fd004u: goto label_1fd004;
        case 0x1fd008u: goto label_1fd008;
        case 0x1fd00cu: goto label_1fd00c;
        case 0x1fd010u: goto label_1fd010;
        case 0x1fd014u: goto label_1fd014;
        case 0x1fd018u: goto label_1fd018;
        case 0x1fd01cu: goto label_1fd01c;
        case 0x1fd020u: goto label_1fd020;
        case 0x1fd024u: goto label_1fd024;
        case 0x1fd028u: goto label_1fd028;
        case 0x1fd02cu: goto label_1fd02c;
        case 0x1fd030u: goto label_1fd030;
        case 0x1fd034u: goto label_1fd034;
        case 0x1fd038u: goto label_1fd038;
        case 0x1fd03cu: goto label_1fd03c;
        case 0x1fd040u: goto label_1fd040;
        case 0x1fd044u: goto label_1fd044;
        case 0x1fd048u: goto label_1fd048;
        case 0x1fd04cu: goto label_1fd04c;
        case 0x1fd050u: goto label_1fd050;
        case 0x1fd054u: goto label_1fd054;
        case 0x1fd058u: goto label_1fd058;
        case 0x1fd05cu: goto label_1fd05c;
        case 0x1fd060u: goto label_1fd060;
        case 0x1fd064u: goto label_1fd064;
        case 0x1fd068u: goto label_1fd068;
        case 0x1fd06cu: goto label_1fd06c;
        case 0x1fd070u: goto label_1fd070;
        case 0x1fd074u: goto label_1fd074;
        case 0x1fd078u: goto label_1fd078;
        case 0x1fd07cu: goto label_1fd07c;
        case 0x1fd080u: goto label_1fd080;
        case 0x1fd084u: goto label_1fd084;
        case 0x1fd088u: goto label_1fd088;
        case 0x1fd08cu: goto label_1fd08c;
        case 0x1fd090u: goto label_1fd090;
        case 0x1fd094u: goto label_1fd094;
        case 0x1fd098u: goto label_1fd098;
        case 0x1fd09cu: goto label_1fd09c;
        case 0x1fd0a0u: goto label_1fd0a0;
        case 0x1fd0a4u: goto label_1fd0a4;
        case 0x1fd0a8u: goto label_1fd0a8;
        case 0x1fd0acu: goto label_1fd0ac;
        case 0x1fd0b0u: goto label_1fd0b0;
        case 0x1fd0b4u: goto label_1fd0b4;
        case 0x1fd0b8u: goto label_1fd0b8;
        case 0x1fd0bcu: goto label_1fd0bc;
        case 0x1fd0c0u: goto label_1fd0c0;
        case 0x1fd0c4u: goto label_1fd0c4;
        case 0x1fd0c8u: goto label_1fd0c8;
        case 0x1fd0ccu: goto label_1fd0cc;
        default: break;
    }

    ctx->pc = 0x1fd000u;

label_1fd000:
    // 0x1fd000: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fd000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1fd004:
    // 0x1fd004: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fd004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1fd008:
    // 0x1fd008: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fd008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fd00c:
    // 0x1fd00c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fd00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fd010:
    // 0x1fd010: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fd010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd014:
    // 0x1fd014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fd014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fd018:
    // 0x1fd018: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1fd018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fd01c:
    // 0x1fd01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fd020:
    // 0x1fd020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fd024:
    // 0x1fd024: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fd024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd028:
    // 0x1fd028: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1fd028u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd02c:
    // 0x1fd02c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fd02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd030:
    // 0x1fd030: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1fd030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fd034:
    // 0x1fd034: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fd034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fd038:
    // 0x1fd038: 0xc0a456c  jal         func_2915B0
label_1fd03c:
    if (ctx->pc == 0x1FD03Cu) {
        ctx->pc = 0x1FD03Cu;
            // 0x1fd03c: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1FD040u;
        goto label_1fd040;
    }
    ctx->pc = 0x1FD038u;
    SET_GPR_U32(ctx, 31, 0x1FD040u);
    ctx->pc = 0x1FD03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD038u;
            // 0x1fd03c: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD040u; }
        if (ctx->pc != 0x1FD040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD040u; }
        if (ctx->pc != 0x1FD040u) { return; }
    }
    ctx->pc = 0x1FD040u;
label_1fd040:
    // 0x1fd040: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1fd040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fd044:
    // 0x1fd044: 0xafb4006c  sw          $s4, 0x6C($sp)
    ctx->pc = 0x1fd044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
label_1fd048:
    // 0x1fd048: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1fd048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_1fd04c:
    // 0x1fd04c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1fd04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fd050:
    // 0x1fd050: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1fd050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1fd054:
    // 0x1fd054: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fd054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fd058:
    // 0x1fd058: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1fd058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fd05c:
    // 0x1fd05c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fd05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fd060:
    // 0x1fd060: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1fd060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1fd064:
    // 0x1fd064: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1fd064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1fd068:
    // 0x1fd068: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fd068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fd06c:
    // 0x1fd06c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1fd06cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fd070:
    // 0x1fd070: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fd074:
    // 0x1fd074: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1fd074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1fd078:
    // 0x1fd078: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fd078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1fd07c:
    // 0x1fd07c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1fd07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fd080:
    // 0x1fd080: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fd080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fd084:
    // 0x1fd084: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1fd084u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1fd088:
    // 0x1fd088: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fd08c:
    // 0x1fd08c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fd090:
    // 0x1fd090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd094:
    // 0x1fd094: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fd094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1fd098:
    // 0x1fd098: 0x8c4209a4  lw          $v0, 0x9A4($v0)
    ctx->pc = 0x1fd098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2468)));
label_1fd09c:
    // 0x1fd09c: 0x40f809  jalr        $v0
label_1fd0a0:
    if (ctx->pc == 0x1FD0A0u) {
        ctx->pc = 0x1FD0A0u;
            // 0x1fd0a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD0A4u;
        goto label_1fd0a4;
    }
    ctx->pc = 0x1FD09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD0A4u);
        ctx->pc = 0x1FD0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD09Cu;
            // 0x1fd0a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD0A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD0A4u; }
            if (ctx->pc != 0x1FD0A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD0A4u;
label_1fd0a4:
    // 0x1fd0a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fd0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fd0a8:
    // 0x1fd0a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fd0a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fd0ac:
    // 0x1fd0ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fd0acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fd0b0:
    // 0x1fd0b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fd0b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd0b4:
    // 0x1fd0b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd0b8:
    // 0x1fd0b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fd0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd0bc:
    // 0x1fd0bc: 0x3e00008  jr          $ra
label_1fd0c0:
    if (ctx->pc == 0x1FD0C0u) {
        ctx->pc = 0x1FD0C0u;
            // 0x1fd0c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1FD0C4u;
        goto label_1fd0c4;
    }
    ctx->pc = 0x1FD0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD0BCu;
            // 0x1fd0c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD0C4u;
label_1fd0c4:
    // 0x1fd0c4: 0x0  nop
    ctx->pc = 0x1fd0c4u;
    // NOP
label_1fd0c8:
    // 0x1fd0c8: 0x0  nop
    ctx->pc = 0x1fd0c8u;
    // NOP
label_1fd0cc:
    // 0x1fd0cc: 0x0  nop
    ctx->pc = 0x1fd0ccu;
    // NOP
}
