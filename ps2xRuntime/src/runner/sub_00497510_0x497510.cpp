#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00497510
// Address: 0x497510 - 0x4975b0
void sub_00497510_0x497510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497510_0x497510");
#endif

    switch (ctx->pc) {
        case 0x49754cu: goto label_49754c;
        case 0x497570u: goto label_497570;
        case 0x49759cu: goto label_49759c;
        default: break;
    }

    ctx->pc = 0x497510u;

    // 0x497510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x497510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x497514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x497518: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x497518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x49751c: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x49751cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x497520: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x497520u;
    {
        const bool branch_taken_0x497520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x497520) {
            ctx->pc = 0x497524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497520u;
            // 0x497524: 0xa3082b  sltu        $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x497578u;
            goto label_497578;
        }
    }
    ctx->pc = 0x497528u;
    // 0x497528: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x497528u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x49752c: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x49752cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x497530: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x497530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x497534: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x497534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x497538: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x497538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49753c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x49753cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x497540: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x497540u;
    {
        const bool branch_taken_0x497540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x497544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497540u;
            // 0x497544: 0xa82821  addu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497540) {
            ctx->pc = 0x497568u;
            goto label_497568;
        }
    }
    ctx->pc = 0x497548u;
    // 0x497548: 0x603821  addu        $a3, $v1, $zero
    ctx->pc = 0x497548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_49754c:
    // 0x49754c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x49754cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x497550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x497550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x497554: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x497554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x497558: 0x0  nop
    ctx->pc = 0x497558u;
    // NOP
    // 0x49755c: 0x0  nop
    ctx->pc = 0x49755cu;
    // NOP
    // 0x497560: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x497560u;
    {
        const bool branch_taken_0x497560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x497560) {
            ctx->pc = 0x49754Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49754c;
        }
    }
    ctx->pc = 0x497568u;
label_497568:
    // 0x497568: 0xc125c40  jal         func_497100
    ctx->pc = 0x497568u;
    SET_GPR_U32(ctx, 31, 0x497570u);
    ctx->pc = 0x497100u;
    if (runtime->hasFunction(0x497100u)) {
        auto targetFn = runtime->lookupFunction(0x497100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497570u; }
        if (ctx->pc != 0x497570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497100_0x497100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497570u; }
        if (ctx->pc != 0x497570u) { return; }
    }
    ctx->pc = 0x497570u;
label_497570:
    // 0x497570: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x497570u;
    {
        const bool branch_taken_0x497570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497570u;
            // 0x497574: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497570) {
            ctx->pc = 0x4975A0u;
            goto label_4975a0;
        }
    }
    ctx->pc = 0x497578u;
label_497578:
    // 0x497578: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x497578u;
    {
        const bool branch_taken_0x497578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x497578) {
            ctx->pc = 0x49759Cu;
            goto label_49759c;
        }
    }
    ctx->pc = 0x497580u;
    // 0x497580: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x497580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x497584: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x497584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x497588: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x497588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x49758c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x49758cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x497590: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x497590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x497594: 0xc125fa4  jal         func_497E90
    ctx->pc = 0x497594u;
    SET_GPR_U32(ctx, 31, 0x49759Cu);
    ctx->pc = 0x497598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497594u;
            // 0x497598: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497E90u;
    if (runtime->hasFunction(0x497E90u)) {
        auto targetFn = runtime->lookupFunction(0x497E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49759Cu; }
        if (ctx->pc != 0x49759Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497E90_0x497e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49759Cu; }
        if (ctx->pc != 0x49759Cu) { return; }
    }
    ctx->pc = 0x49759Cu;
label_49759c:
    // 0x49759c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49759cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4975a0:
    // 0x4975a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4975A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4975A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4975A0u;
            // 0x4975a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4975A8u;
    // 0x4975a8: 0x0  nop
    ctx->pc = 0x4975a8u;
    // NOP
    // 0x4975ac: 0x0  nop
    ctx->pc = 0x4975acu;
    // NOP
}
