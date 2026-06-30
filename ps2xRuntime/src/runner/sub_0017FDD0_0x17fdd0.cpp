#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FDD0
// Address: 0x17fdd0 - 0x17fe58
void sub_0017FDD0_0x17fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FDD0_0x17fdd0");
#endif

    ctx->pc = 0x17fdd0u;

    // 0x17fdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17fdd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17fdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdd8: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17FDD8u;
    {
        const bool branch_taken_0x17fdd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDD8u;
            // 0x17fddc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdd8) {
            ctx->pc = 0x17FE20u;
            goto label_17fe20;
        }
    }
    ctx->pc = 0x17FDE0u;
    // 0x17fde0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17fde4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x17fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x17fde8: 0x244766f0  addiu       $a3, $v0, 0x66F0
    ctx->pc = 0x17fde8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 26352));
    // 0x17fdec: 0x24666c20  addiu       $a2, $v1, 0x6C20
    ctx->pc = 0x17fdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 27680));
    // 0x17fdf0: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x17fdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x17fdf4: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x17fdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x17fdf8: 0x80e50004  lb          $a1, 0x4($a3)
    ctx->pc = 0x17fdf8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x17fdfc: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x17fdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17fe00: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x17fe00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17fe04: 0xa0c50004  sb          $a1, 0x4($a2)
    ctx->pc = 0x17fe04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x17fe08: 0x80e40005  lb          $a0, 0x5($a3)
    ctx->pc = 0x17fe08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x17fe0c: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x17fe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x17fe10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fe10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe14: 0x3e00008  jr          $ra
    ctx->pc = 0x17FE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE14u;
            // 0x17fe18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FE1Cu;
    // 0x17fe1c: 0x0  nop
    ctx->pc = 0x17fe1cu;
    // NOP
label_17fe20:
    // 0x17fe20: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x17fe24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fe24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fe28: 0x24846c20  addiu       $a0, $a0, 0x6C20
    ctx->pc = 0x17fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27680));
    // 0x17fe2c: 0x804afe8  j           func_12BFA0
    ctx->pc = 0x17FE2Cu;
    ctx->pc = 0x17FE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE2Cu;
            // 0x17fe30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17FE34u;
    // 0x17fe34: 0x0  nop
    ctx->pc = 0x17fe34u;
    // NOP
    // 0x17fe38: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17fe3c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE3Cu;
            // 0x17fe40: 0x24426c20  addiu       $v0, $v0, 0x6C20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FE44u;
    // 0x17fe44: 0x0  nop
    ctx->pc = 0x17fe44u;
    // NOP
    // 0x17fe48: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17fe4c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE4Cu;
            // 0x17fe50: 0x8c626b10  lw          $v0, 0x6B10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27408)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FE54u;
    // 0x17fe54: 0x0  nop
    ctx->pc = 0x17fe54u;
    // NOP
}
