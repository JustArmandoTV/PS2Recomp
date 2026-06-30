#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001882B8
// Address: 0x1882b8 - 0x188378
void sub_001882B8_0x1882b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001882B8_0x1882b8");
#endif

    switch (ctx->pc) {
        case 0x1882d8u: goto label_1882d8;
        case 0x188318u: goto label_188318;
        case 0x188368u: goto label_188368;
        default: break;
    }

    ctx->pc = 0x1882b8u;

    // 0x1882b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1882b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1882bc: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1882bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1882c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1882C0u;
    {
        const bool branch_taken_0x1882c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1882C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1882C0u;
            // 0x1882c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882c0) {
            ctx->pc = 0x1882E0u;
            goto label_1882e0;
        }
    }
    ctx->pc = 0x1882C8u;
    // 0x1882c8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1882c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1882cc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1882CCu;
    {
        const bool branch_taken_0x1882cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1882D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1882CCu;
            // 0x1882d0: 0x24847f80  addiu       $a0, $a0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882cc) {
            ctx->pc = 0x188360u;
            goto label_188360;
        }
    }
    ctx->pc = 0x1882D4u;
    // 0x1882d4: 0x0  nop
    ctx->pc = 0x1882d4u;
    // NOP
label_1882d8:
    // 0x1882d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1882D8u;
    {
        const bool branch_taken_0x1882d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1882DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1882D8u;
            // 0x1882dc: 0xad070008  sw          $a3, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882d8) {
            ctx->pc = 0x18834Cu;
            goto label_18834c;
        }
    }
    ctx->pc = 0x1882E0u;
label_1882e0:
    // 0x1882e0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1882e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1882e4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x1882e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x1882e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1882e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1882ec: 0x246a7fa8  addiu       $t2, $v1, 0x7FA8
    ctx->pc = 0x1882ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 32680));
    // 0x1882f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1882f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1882f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1882f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882f8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1882f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x1882fc: 0x2484fba0  addiu       $a0, $a0, -0x460
    ctx->pc = 0x1882fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966176));
    // 0x188300: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x188300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x188304: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188308: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x188308u;
    {
        const bool branch_taken_0x188308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188308u;
            // 0x18830c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188308) {
            ctx->pc = 0x18833Cu;
            goto label_18833c;
        }
    }
    ctx->pc = 0x188310u;
    // 0x188310: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x188310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x188314: 0x0  nop
    ctx->pc = 0x188314u;
    // NOP
label_188318:
    // 0x188318: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x188318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x18831c: 0x29220006  slti        $v0, $t1, 0x6
    ctx->pc = 0x18831cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x188320: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x188320u;
    {
        const bool branch_taken_0x188320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188320u;
            // 0x188324: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188320) {
            ctx->pc = 0x18834Cu;
            goto label_18834c;
        }
    }
    ctx->pc = 0x188328u;
    // 0x188328: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18832c: 0x0  nop
    ctx->pc = 0x18832cu;
    // NOP
    // 0x188330: 0x0  nop
    ctx->pc = 0x188330u;
    // NOP
    // 0x188334: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x188334u;
    {
        const bool branch_taken_0x188334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188334) {
            ctx->pc = 0x188338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188334u;
            // 0x188338: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_188318;
        }
    }
    ctx->pc = 0x18833Cu;
label_18833c:
    // 0x18833c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x18833cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x188340: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x188340u;
    {
        const bool branch_taken_0x188340 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x188344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188340u;
            // 0x188344: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188340) {
            ctx->pc = 0x1882D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1882d8;
        }
    }
    ctx->pc = 0x188348u;
    // 0x188348: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x188348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
label_18834c:
    // 0x18834c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x188350: 0x55220006  bnel        $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188350u;
    {
        const bool branch_taken_0x188350 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x188350) {
            ctx->pc = 0x188354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188350u;
            // 0x188354: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18836Cu;
            goto label_18836c;
        }
    }
    ctx->pc = 0x188358u;
    // 0x188358: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x188358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x18835c: 0x24847fb0  addiu       $a0, $a0, 0x7FB0
    ctx->pc = 0x18835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32688));
label_188360:
    // 0x188360: 0xc061fea  jal         func_187FA8
    ctx->pc = 0x188360u;
    SET_GPR_U32(ctx, 31, 0x188368u);
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188368u; }
        if (ctx->pc != 0x188368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187FA8_0x187fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188368u; }
        if (ctx->pc != 0x188368u) { return; }
    }
    ctx->pc = 0x188368u;
label_188368:
    // 0x188368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18836c:
    // 0x18836c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18836cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188370: 0x3e00008  jr          $ra
    ctx->pc = 0x188370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188370u;
            // 0x188374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188378u;
}
