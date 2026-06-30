#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AABB0
// Address: 0x1aabb0 - 0x1aad40
void sub_001AABB0_0x1aabb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AABB0_0x1aabb0");
#endif

    switch (ctx->pc) {
        case 0x1aac20u: goto label_1aac20;
        case 0x1aac60u: goto label_1aac60;
        default: break;
    }

    ctx->pc = 0x1aabb0u;

    // 0x1aabb0: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1aabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1aabb4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1aabb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabb8: 0x24421db0  addiu       $v0, $v0, 0x1DB0
    ctx->pc = 0x1aabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7600));
    // 0x1aabbc: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1aabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1aabc0: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x1aabc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1aabc4: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x1aabc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1aabc8: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x1aabc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1aabcc: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x1aabccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1aabd0: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x1aabd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1aabd4: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x1aabd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1aabd8: 0x692a001f  ldl         $t2, 0x1F($t1)
    ctx->pc = 0x1aabd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1aabdc: 0x6d2a0018  ldr         $t2, 0x18($t1)
    ctx->pc = 0x1aabdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1aabe0: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x1aabe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aabe4: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x1aabe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aabe8: 0xb047000f  sdl         $a3, 0xF($v0)
    ctx->pc = 0x1aabe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aabec: 0xb4470008  sdr         $a3, 0x8($v0)
    ctx->pc = 0x1aabecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aabf0: 0xb0480017  sdl         $t0, 0x17($v0)
    ctx->pc = 0x1aabf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aabf4: 0xb4480010  sdr         $t0, 0x10($v0)
    ctx->pc = 0x1aabf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aabf8: 0xb04a001f  sdl         $t2, 0x1F($v0)
    ctx->pc = 0x1aabf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aabfc: 0xb44a0018  sdr         $t2, 0x18($v0)
    ctx->pc = 0x1aabfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aac00: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x1aac00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x1aac04: 0x246b1dd8  addiu       $t3, $v1, 0x1DD8
    ctx->pc = 0x1aac04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 7640));
    // 0x1aac08: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x1aac08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x1aac0c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1aac0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac10: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1aac10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1aac14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aac14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac18: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1aac18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1aac1c: 0x240affc0  addiu       $t2, $zero, -0x40
    ctx->pc = 0x1aac1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_1aac20:
    // 0x1aac20: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1aac20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1aac24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1aac24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1aac28: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1aac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1aac2c: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1aac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1aac30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aac34: 0x28e50002  slti        $a1, $a3, 0x2
    ctx->pc = 0x1aac34u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aac38: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1aac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1aac3c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1aac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1aac40: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AAC40u;
    {
        const bool branch_taken_0x1aac40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC40u;
            // 0x1aac44: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac40) {
            ctx->pc = 0x1AAC20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aac20;
        }
    }
    ctx->pc = 0x1AAC48u;
    // 0x1aac48: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1aac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1aac4c: 0x8d24001c  lw          $a0, 0x1C($t1)
    ctx->pc = 0x1aac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x1aac50: 0x24451de0  addiu       $a1, $v0, 0x1DE0
    ctx->pc = 0x1aac50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7648));
    // 0x1aac54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aac54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac58: 0x240affc0  addiu       $t2, $zero, -0x40
    ctx->pc = 0x1aac58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1aac5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aac5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aac60:
    // 0x1aac60: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x1aac60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1aac64: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1aac64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1aac68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAC68u;
    {
        const bool branch_taken_0x1aac68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC68u;
            // 0x1aac6c: 0x28e80010  slti        $t0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac68) {
            ctx->pc = 0x1AAC88u;
            goto label_1aac88;
        }
    }
    ctx->pc = 0x1AAC70u;
    // 0x1aac70: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x1aac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1aac74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aac78: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1aac78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1aac7c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1aac7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1aac80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AAC80u;
    {
        const bool branch_taken_0x1aac80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC80u;
            // 0x1aac84: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac80) {
            ctx->pc = 0x1AAC8Cu;
            goto label_1aac8c;
        }
    }
    ctx->pc = 0x1AAC88u;
label_1aac88:
    // 0x1aac88: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1aac88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1aac8c:
    // 0x1aac8c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1aac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1aac90: 0x1500fff3  bnez        $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1AAC90u;
    {
        const bool branch_taken_0x1aac90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC90u;
            // 0x1aac94: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac90) {
            ctx->pc = 0x1AAC60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aac60;
        }
    }
    ctx->pc = 0x1AAC98u;
    // 0x1aac98: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AACA0u;
    // 0x1aaca0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1aaca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aaca4: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x1aaca4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1aaca8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1aaca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1aacac: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x1aacacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x1aacb0: 0x28460000  slti        $a2, $v0, 0x0
    ctx->pc = 0x1aacb0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aacb4: 0x2549000f  addiu       $t1, $t2, 0xF
    ctx->pc = 0x1aacb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x1aacb8: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x1aacb8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1aacbc: 0x292b0000  slti        $t3, $t1, 0x0
    ctx->pc = 0x1aacbcu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aacc0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1aacc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1aacc4: 0x254a001e  addiu       $t2, $t2, 0x1E
    ctx->pc = 0x1aacc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30));
    // 0x1aacc8: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x1aacc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aaccc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1aacccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1aacd0: 0x2507003f  addiu       $a3, $t0, 0x3F
    ctx->pc = 0x1aacd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x1aacd4: 0x2508007e  addiu       $t0, $t0, 0x7E
    ctx->pc = 0x1aacd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 126));
    // 0x1aacd8: 0x2446003f  addiu       $a2, $v0, 0x3F
    ctx->pc = 0x1aacd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1aacdc: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x1aacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x1aace0: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x1aace0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aace4: 0x14b480b  movn        $t1, $t2, $t3
    ctx->pc = 0x1aace4u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x1aace8: 0x103380b  movn        $a3, $t0, $v1
    ctx->pc = 0x1aace8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x1aacec: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1aacecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aacf0: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1aacf0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1aacf4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1aacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1aacf8: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x1aacf8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x1aacfc: 0x94903  sra         $t1, $t1, 4
    ctx->pc = 0x1aacfcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
    // 0x1aad00: 0xe91018  mult        $v0, $a3, $t1
    ctx->pc = 0x1aad00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1aad04: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x1aad04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1aad08: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x1aad08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x1aad0c: 0xa4a7000e  sh          $a3, 0xE($a1)
    ctx->pc = 0x1aad0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x1aad10: 0x70c94818  mult1       $t1, $a2, $t1
    ctx->pc = 0x1aad10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1aad14: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x1aad14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1aad18: 0xa4a6000c  sh          $a2, 0xC($a1)
    ctx->pc = 0x1aad18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x1aad1c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1aad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1aad20: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1aad20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1aad24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1aad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aad28: 0x94a40  sll         $t1, $t1, 9
    ctx->pc = 0x1aad28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 9));
    // 0x1aad2c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1aad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1aad30: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x1aad30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1aad34: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD34u;
            // 0x1aad38: 0xaca90004  sw          $t1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAD3Cu;
    // 0x1aad3c: 0x0  nop
    ctx->pc = 0x1aad3cu;
    // NOP
}
