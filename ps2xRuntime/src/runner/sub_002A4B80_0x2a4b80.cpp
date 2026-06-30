#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4B80
// Address: 0x2a4b80 - 0x2a4c20
void sub_002A4B80_0x2a4b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4B80_0x2a4b80");
#endif

    switch (ctx->pc) {
        case 0x2a4bb8u: goto label_2a4bb8;
        case 0x2a4c14u: goto label_2a4c14;
        default: break;
    }

    ctx->pc = 0x2a4b80u;

    // 0x2a4b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a4b88: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x2a4b88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a4b8c: 0x8c8a0010  lw          $t2, 0x10($a0)
    ctx->pc = 0x2a4b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a4b90: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x2a4b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2a4b94: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a4b98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a4b9c: 0x1434821  addu        $t1, $t2, $v1
    ctx->pc = 0x2a4b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2a4ba0: 0x1491826  xor         $v1, $t2, $t1
    ctx->pc = 0x2a4ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x2a4ba4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4ba4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a4ba8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2a4ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2a4bac: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4BACu;
    {
        const bool branch_taken_0x2a4bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4bac) {
            ctx->pc = 0x2A4BE0u;
            goto label_2a4be0;
        }
    }
    ctx->pc = 0x2A4BB4u;
    // 0x2a4bb4: 0xa403c  dsll32      $t0, $t2, 0
    ctx->pc = 0x2a4bb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (32 + 0));
label_2a4bb8:
    // 0x2a4bb8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2a4bb8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2a4bbc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2a4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a4bc0: 0x50a30015  beql        $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A4BC0u;
    {
        const bool branch_taken_0x2a4bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a4bc0) {
            ctx->pc = 0x2A4BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4BC0u;
            // 0x2a4bc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4C18u;
            goto label_2a4c18;
        }
    }
    ctx->pc = 0x2A4BC8u;
    // 0x2a4bc8: 0x250a000c  addiu       $t2, $t0, 0xC
    ctx->pc = 0x2a4bc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x2a4bcc: 0x1491826  xor         $v1, $t2, $t1
    ctx->pc = 0x2a4bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x2a4bd0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4bd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a4bd4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2a4bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2a4bd8: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A4BD8u;
    {
        const bool branch_taken_0x2a4bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4bd8) {
            ctx->pc = 0x2A4BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4BD8u;
            // 0x2a4bdc: 0xa403c  dsll32      $t0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4bb8;
        }
    }
    ctx->pc = 0x2A4BE0u;
label_2a4be0:
    // 0x2a4be0: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x2a4be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x2a4be4: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x2a4be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x2a4be8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a4be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4bec: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2a4becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2a4bf0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2a4bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4bf4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2a4bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a4bf8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2a4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a4bfc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2a4bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2a4c00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a4c04: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2a4c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2a4c08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a4c0c: 0xc0a93a0  jal         func_2A4E80
    ctx->pc = 0x2A4C0Cu;
    SET_GPR_U32(ctx, 31, 0x2A4C14u);
    ctx->pc = 0x2A4C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4C0Cu;
            // 0x2a4c10: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E80u;
    if (runtime->hasFunction(0x2A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x2A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C14u; }
        if (ctx->pc != 0x2A4C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4E80_0x2a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4C14u; }
        if (ctx->pc != 0x2A4C14u) { return; }
    }
    ctx->pc = 0x2A4C14u;
label_2a4c14:
    // 0x2a4c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4c18:
    // 0x2a4c18: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4C18u;
            // 0x2a4c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4C20u;
}
