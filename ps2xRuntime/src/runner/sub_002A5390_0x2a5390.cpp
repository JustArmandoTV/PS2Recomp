#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5390
// Address: 0x2a5390 - 0x2a5430
void sub_002A5390_0x2a5390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5390_0x2a5390");
#endif

    switch (ctx->pc) {
        case 0x2a53c8u: goto label_2a53c8;
        case 0x2a53d4u: goto label_2a53d4;
        default: break;
    }

    ctx->pc = 0x2a5390u;

    // 0x2a5390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a5390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a5394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a539c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a53a0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a53a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a53a4: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x2a53a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a53a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a53ac: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2a53acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2a53b0: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x2a53b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x2a53b4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a53b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a53b8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2a53b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2a53bc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A53BCu;
    {
        const bool branch_taken_0x2a53bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A53C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A53BCu;
            // 0x2a53c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53bc) {
            ctx->pc = 0x2A5408u;
            goto label_2a5408;
        }
    }
    ctx->pc = 0x2A53C4u;
    // 0x2a53c4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2a53c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2a53c8:
    // 0x2a53c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a53c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a53cc: 0xc0a9540  jal         func_2A5500
    ctx->pc = 0x2A53CCu;
    SET_GPR_U32(ctx, 31, 0x2A53D4u);
    ctx->pc = 0x2A53D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A53CCu;
            // 0x2a53d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5500u;
    if (runtime->hasFunction(0x2A5500u)) {
        auto targetFn = runtime->lookupFunction(0x2A5500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A53D4u; }
        if (ctx->pc != 0x2A53D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5500_0x2a5500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A53D4u; }
        if (ctx->pc != 0x2A53D4u) { return; }
    }
    ctx->pc = 0x2A53D4u;
label_2a53d4:
    // 0x2a53d4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x2a53d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2a53d8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2a53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2a53dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a53dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a53e0: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x2a53e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a53e4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2a53e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2a53e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a53e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a53ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a53f0: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x2a53f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x2a53f4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a53f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a53f8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2a53f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2a53fc: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A53FCu;
    {
        const bool branch_taken_0x2a53fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a53fc) {
            ctx->pc = 0x2A5400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A53FCu;
            // 0x2a5400: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A53C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a53c8;
        }
    }
    ctx->pc = 0x2A5404u;
    // 0x2a5404: 0x0  nop
    ctx->pc = 0x2a5404u;
    // NOP
label_2a5408:
    // 0x2a5408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a5408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a540c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a540cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5414: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5414u;
            // 0x2a5418: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A541Cu;
    // 0x2a541c: 0x0  nop
    ctx->pc = 0x2a541cu;
    // NOP
    // 0x2a5420: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5420u;
            // 0x2a5424: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5428u;
    // 0x2a5428: 0x0  nop
    ctx->pc = 0x2a5428u;
    // NOP
    // 0x2a542c: 0x0  nop
    ctx->pc = 0x2a542cu;
    // NOP
}
