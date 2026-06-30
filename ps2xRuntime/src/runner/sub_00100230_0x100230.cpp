#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100230
// Address: 0x100230 - 0x1002a0
void sub_00100230_0x100230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100230_0x100230");
#endif

    switch (ctx->pc) {
        case 0x10027cu: goto label_10027c;
        case 0x10028cu: goto label_10028c;
        default: break;
    }

    ctx->pc = 0x100230u;

    // 0x100230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100234: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x100234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10023c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x10023cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x100240: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x100240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x100244: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x100244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x100248: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x100248u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10024c: 0x54200010  bnel        $at, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x10024Cu;
    {
        const bool branch_taken_0x10024c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10024c) {
            ctx->pc = 0x100250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10024Cu;
            // 0x100250: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100290u;
            goto label_100290;
        }
    }
    ctx->pc = 0x100254u;
    // 0x100254: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x100254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x100258: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x100258u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x10025c: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x10025Cu;
    {
        const bool branch_taken_0x10025c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10025c) {
            ctx->pc = 0x10028Cu;
            goto label_10028c;
        }
    }
    ctx->pc = 0x100264u;
    // 0x100264: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x100264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x100268: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x100268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10026c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x10026Cu;
    {
        const bool branch_taken_0x10026c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10026c) {
            ctx->pc = 0x100284u;
            goto label_100284;
        }
    }
    ctx->pc = 0x100274u;
    // 0x100274: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x100274u;
    SET_GPR_U32(ctx, 31, 0x10027Cu);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10027Cu; }
        if (ctx->pc != 0x10027Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10027Cu; }
        if (ctx->pc != 0x10027Cu) { return; }
    }
    ctx->pc = 0x10027Cu;
label_10027c:
    // 0x10027c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10027Cu;
    {
        const bool branch_taken_0x10027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10027c) {
            ctx->pc = 0x10028Cu;
            goto label_10028c;
        }
    }
    ctx->pc = 0x100284u;
label_100284:
    // 0x100284: 0xc0fe4e8  jal         func_3F93A0
    ctx->pc = 0x100284u;
    SET_GPR_U32(ctx, 31, 0x10028Cu);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10028Cu; }
        if (ctx->pc != 0x10028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10028Cu; }
        if (ctx->pc != 0x10028Cu) { return; }
    }
    ctx->pc = 0x10028Cu;
label_10028c:
    // 0x10028c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10028cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100290:
    // 0x100290: 0x3e00008  jr          $ra
    ctx->pc = 0x100290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100290u;
            // 0x100294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100298u;
    // 0x100298: 0x0  nop
    ctx->pc = 0x100298u;
    // NOP
    // 0x10029c: 0x0  nop
    ctx->pc = 0x10029cu;
    // NOP
}
