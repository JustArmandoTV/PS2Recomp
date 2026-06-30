#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6CD8
// Address: 0x1c6cd8 - 0x1c6d40
void sub_001C6CD8_0x1c6cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6CD8_0x1c6cd8");
#endif

    switch (ctx->pc) {
        case 0x1c6d00u: goto label_1c6d00;
        case 0x1c6d10u: goto label_1c6d10;
        default: break;
    }

    ctx->pc = 0x1c6cd8u;

    // 0x1c6cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6ce8: 0x241100da  addiu       $s1, $zero, 0xDA
    ctx->pc = 0x1c6ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x1c6cec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6cf0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c6cf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6cf4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6CF4u;
    {
        const bool branch_taken_0x1c6cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6CF4u;
            // 0x1c6cf8: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cf4) {
            ctx->pc = 0x1C6D24u;
            goto label_1c6d24;
        }
    }
    ctx->pc = 0x1C6CFCu;
    // 0x1c6cfc: 0x0  nop
    ctx->pc = 0x1c6cfcu;
    // NOP
label_1c6d00:
    // 0x1c6d00: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c6d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c6d04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c6d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c6d08: 0xc071b50  jal         func_1C6D40
    ctx->pc = 0x1C6D08u;
    SET_GPR_U32(ctx, 31, 0x1C6D10u);
    ctx->pc = 0x1C6D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D08u;
            // 0x1c6d0c: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6D40u;
    if (runtime->hasFunction(0x1C6D40u)) {
        auto targetFn = runtime->lookupFunction(0x1C6D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D10u; }
        if (ctx->pc != 0x1C6D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6D40_0x1c6d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D10u; }
        if (ctx->pc != 0x1C6D10u) { return; }
    }
    ctx->pc = 0x1C6D10u;
label_1c6d10:
    // 0x1c6d10: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1c6d10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6d14: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1c6d14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6d18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c6d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6d1c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C6D1Cu;
    {
        const bool branch_taken_0x1c6d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D1Cu;
            // 0x1c6d20: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d1c) {
            ctx->pc = 0x1C6D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6d00;
        }
    }
    ctx->pc = 0x1C6D24u;
label_1c6d24:
    // 0x1c6d24: 0x111082  srl         $v0, $s1, 2
    ctx->pc = 0x1c6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
    // 0x1c6d28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6d30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c6d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6d34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6d38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D38u;
            // 0x1c6d3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6D40u;
}
