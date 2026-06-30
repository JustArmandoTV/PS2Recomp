#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001002A0
// Address: 0x1002a0 - 0x100310
void sub_001002A0_0x1002a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001002A0_0x1002a0");
#endif

    switch (ctx->pc) {
        case 0x1002ecu: goto label_1002ec;
        case 0x1002fcu: goto label_1002fc;
        default: break;
    }

    ctx->pc = 0x1002a0u;

    // 0x1002a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1002a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1002a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1002a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1002a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1002ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1002acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x1002b0: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x1002b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x1002b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1002b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1002b8: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1002b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1002bc: 0x54200010  bnel        $at, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1002BCu;
    {
        const bool branch_taken_0x1002bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1002bc) {
            ctx->pc = 0x1002C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1002BCu;
            // 0x1002c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100300u;
            goto label_100300;
        }
    }
    ctx->pc = 0x1002C4u;
    // 0x1002c4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1002c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1002c8: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1002c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1002cc: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1002CCu;
    {
        const bool branch_taken_0x1002cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1002cc) {
            ctx->pc = 0x1002FCu;
            goto label_1002fc;
        }
    }
    ctx->pc = 0x1002D4u;
    // 0x1002d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1002d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1002d8: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x1002d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1002dc: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1002DCu;
    {
        const bool branch_taken_0x1002dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1002dc) {
            ctx->pc = 0x1002F4u;
            goto label_1002f4;
        }
    }
    ctx->pc = 0x1002E4u;
    // 0x1002e4: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x1002E4u;
    SET_GPR_U32(ctx, 31, 0x1002ECu);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002ECu; }
        if (ctx->pc != 0x1002ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002ECu; }
        if (ctx->pc != 0x1002ECu) { return; }
    }
    ctx->pc = 0x1002ECu;
label_1002ec:
    // 0x1002ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1002ECu;
    {
        const bool branch_taken_0x1002ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1002ec) {
            ctx->pc = 0x1002FCu;
            goto label_1002fc;
        }
    }
    ctx->pc = 0x1002F4u;
label_1002f4:
    // 0x1002f4: 0xc0fe4e8  jal         func_3F93A0
    ctx->pc = 0x1002F4u;
    SET_GPR_U32(ctx, 31, 0x1002FCu);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002FCu; }
        if (ctx->pc != 0x1002FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002FCu; }
        if (ctx->pc != 0x1002FCu) { return; }
    }
    ctx->pc = 0x1002FCu;
label_1002fc:
    // 0x1002fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1002fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100300:
    // 0x100300: 0x3e00008  jr          $ra
    ctx->pc = 0x100300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100300u;
            // 0x100304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100308u;
    // 0x100308: 0x0  nop
    ctx->pc = 0x100308u;
    // NOP
    // 0x10030c: 0x0  nop
    ctx->pc = 0x10030cu;
    // NOP
}
