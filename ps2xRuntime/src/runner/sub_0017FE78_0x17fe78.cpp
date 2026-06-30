#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FE78
// Address: 0x17fe78 - 0x17fed8
void sub_0017FE78_0x17fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FE78_0x17fe78");
#endif

    switch (ctx->pc) {
        case 0x17fe9cu: goto label_17fe9c;
        default: break;
    }

    ctx->pc = 0x17fe78u;

    // 0x17fe78: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x17fe78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x17fe7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17fe7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe80: 0x24c36d80  addiu       $v1, $a2, 0x6D80
    ctx->pc = 0x17fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28032));
    // 0x17fe84: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x17fe84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fe88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FE88u;
    {
        const bool branch_taken_0x17fe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE88u;
            // 0x17fe8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe88) {
            ctx->pc = 0x17FE98u;
            goto label_17fe98;
        }
    }
    ctx->pc = 0x17FE90u;
    // 0x17fe90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17FE90u;
    {
        const bool branch_taken_0x17fe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE90u;
            // 0x17fe94: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe90) {
            ctx->pc = 0x17FED0u;
            goto label_17fed0;
        }
    }
    ctx->pc = 0x17FE98u;
label_17fe98:
    // 0x17fe98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17fe9c:
    // 0x17fe9c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x17fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17fea0: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x17fea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17fea4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17FEA4u;
    {
        const bool branch_taken_0x17fea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEA4u;
            // 0x17fea8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fea4) {
            ctx->pc = 0x17FED0u;
            goto label_17fed0;
        }
    }
    ctx->pc = 0x17FEACu;
    // 0x17feac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17feacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17feb0: 0x24c46d80  addiu       $a0, $a2, 0x6D80
    ctx->pc = 0x17feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 28032));
    // 0x17feb4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17feb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17febc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17fec0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x17fec0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fec4: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x17FEC4u;
    {
        const bool branch_taken_0x17fec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fec4) {
            ctx->pc = 0x17FEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEC4u;
            // 0x17fec8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FE9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17fe9c;
        }
    }
    ctx->pc = 0x17FECCu;
    // 0x17fecc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17feccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17fed0:
    // 0x17fed0: 0x3e00008  jr          $ra
    ctx->pc = 0x17FED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FED0u;
            // 0x17fed4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FED8u;
}
