#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7C48
// Address: 0x1a7c48 - 0x1a7d18
void sub_001A7C48_0x1a7c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7C48_0x1a7c48");
#endif

    switch (ctx->pc) {
        case 0x1a7c58u: goto label_1a7c58;
        case 0x1a7cb8u: goto label_1a7cb8;
        default: break;
    }

    ctx->pc = 0x1a7c48u;

    // 0x1a7c48: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1a7c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a7c4c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1a7c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1a7c50: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A7C50u;
    {
        const bool branch_taken_0x1a7c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C50u;
            // 0x1a7c54: 0x24a20880  addiu       $v0, $a1, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c50) {
            ctx->pc = 0x1A7CB8u;
            goto label_1a7cb8;
        }
    }
    ctx->pc = 0x1A7C58u;
label_1a7c58:
    // 0x1a7c58: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x1a7c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a7c5c: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x1a7c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a7c60: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x1a7c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a7c64: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x1a7c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a7c68: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x1a7c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a7c6c: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x1a7c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a7c70: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x1a7c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1a7c74: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x1a7c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1a7c78: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1a7c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c7c: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1a7c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c80: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1a7c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c84: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1a7c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c88: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1a7c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c8c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1a7c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c90: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1a7c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c94: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1a7c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7c98: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1a7c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1a7c9c: 0x0  nop
    ctx->pc = 0x1a7c9cu;
    // NOP
    // 0x1a7ca0: 0x0  nop
    ctx->pc = 0x1a7ca0u;
    // NOP
    // 0x1a7ca4: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A7CA4u;
    {
        const bool branch_taken_0x1a7ca4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CA4u;
            // 0x1a7ca8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ca4) {
            ctx->pc = 0x1A7C58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7c58;
        }
    }
    ctx->pc = 0x1A7CACu;
    // 0x1a7cac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A7CACu;
    {
        const bool branch_taken_0x1a7cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7cac) {
            ctx->pc = 0x1A7CECu;
            goto label_1a7cec;
        }
    }
    ctx->pc = 0x1A7CB4u;
    // 0x1a7cb4: 0x0  nop
    ctx->pc = 0x1a7cb4u;
    // NOP
label_1a7cb8:
    // 0x1a7cb8: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1a7cb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7cbc: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x1a7cbcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a7cc0: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x1a7cc0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a7cc4: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x1a7cc4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a7cc8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1a7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1a7ccc: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1a7cccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1a7cd0: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1a7cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1a7cd4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1a7cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1a7cd8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1a7cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1a7cdc: 0x0  nop
    ctx->pc = 0x1a7cdcu;
    // NOP
    // 0x1a7ce0: 0x0  nop
    ctx->pc = 0x1a7ce0u;
    // NOP
    // 0x1a7ce4: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A7CE4u;
    {
        const bool branch_taken_0x1a7ce4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CE4u;
            // 0x1a7ce8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ce4) {
            ctx->pc = 0x1A7CB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7cb8;
        }
    }
    ctx->pc = 0x1A7CECu;
label_1a7cec:
    // 0x1a7cec: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x1a7cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a7cf0: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x1a7cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a7cf4: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x1a7cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a7cf8: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x1a7cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a7cfc: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x1a7cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a7d00: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x1a7d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7d04: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x1a7d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7d08: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x1a7d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7d0c: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x1a7d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a7d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D10u;
            // 0x1a7d14: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7D18u;
}
