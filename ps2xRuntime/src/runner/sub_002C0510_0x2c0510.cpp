#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0510
// Address: 0x2c0510 - 0x2c0570
void sub_002C0510_0x2c0510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0510_0x2c0510");
#endif

    switch (ctx->pc) {
        case 0x2c0540u: goto label_2c0540;
        case 0x2c0558u: goto label_2c0558;
        default: break;
    }

    ctx->pc = 0x2c0510u;

    // 0x2c0510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c0514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c0514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c0518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c051c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c0520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c0520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0524: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C0524u;
    {
        const bool branch_taken_0x2c0524 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0524u;
            // 0x2c0528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0524) {
            ctx->pc = 0x2C0558u;
            goto label_2c0558;
        }
    }
    ctx->pc = 0x2C052Cu;
    // 0x2c052c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c052cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2c0530: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2c0530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c0534: 0x24a533e0  addiu       $a1, $a1, 0x33E0
    ctx->pc = 0x2c0534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
    // 0x2c0538: 0xc0407e8  jal         func_101FA0
    ctx->pc = 0x2C0538u;
    SET_GPR_U32(ctx, 31, 0x2C0540u);
    ctx->pc = 0x2C053Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0538u;
            // 0x2c053c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0540u; }
        if (ctx->pc != 0x2C0540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0540u; }
        if (ctx->pc != 0x2C0540u) { return; }
    }
    ctx->pc = 0x2C0540u;
label_2c0540:
    // 0x2c0540: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c0540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2c0544: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c0544u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c0548: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0548u;
    {
        const bool branch_taken_0x2c0548 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c0548) {
            ctx->pc = 0x2C054Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0548u;
            // 0x2c054c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C055Cu;
            goto label_2c055c;
        }
    }
    ctx->pc = 0x2C0550u;
    // 0x2c0550: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C0550u;
    SET_GPR_U32(ctx, 31, 0x2C0558u);
    ctx->pc = 0x2C0554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0550u;
            // 0x2c0554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0558u; }
        if (ctx->pc != 0x2C0558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0558u; }
        if (ctx->pc != 0x2C0558u) { return; }
    }
    ctx->pc = 0x2C0558u;
label_2c0558:
    // 0x2c0558: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c0558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c055c:
    // 0x2c055c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c055cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0568: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C056Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0568u;
            // 0x2c056c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0570u;
}
