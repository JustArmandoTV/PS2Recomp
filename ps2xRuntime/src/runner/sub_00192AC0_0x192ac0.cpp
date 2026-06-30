#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192AC0
// Address: 0x192ac0 - 0x192b70
void sub_00192AC0_0x192ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192AC0_0x192ac0");
#endif

    switch (ctx->pc) {
        case 0x192b18u: goto label_192b18;
        default: break;
    }

    ctx->pc = 0x192ac0u;

    // 0x192ac0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x192ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x192ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x192AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192AC4u;
            // 0x192ac8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192ACCu;
    // 0x192acc: 0x0  nop
    ctx->pc = 0x192accu;
    // NOP
    // 0x192ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192ae0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x192ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ae4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x192AE4u;
    {
        const bool branch_taken_0x192ae4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x192AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192AE4u;
            // 0x192ae8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ae4) {
            ctx->pc = 0x192B10u;
            goto label_192b10;
        }
    }
    ctx->pc = 0x192AECu;
    // 0x192aec: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x192aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x192af0: 0x8c436a58  lw          $v1, 0x6A58($v0)
    ctx->pc = 0x192af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27224)));
    // 0x192af4: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x192af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x192af8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x192af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x192afc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x192afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x192b00: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x192b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x192b04: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x192b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x192b08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x192B08u;
    {
        const bool branch_taken_0x192b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B08u;
            // 0x192b0c: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b08) {
            ctx->pc = 0x192B58u;
            goto label_192b58;
        }
    }
    ctx->pc = 0x192B10u;
label_192b10:
    // 0x192b10: 0xc064adc  jal         func_192B70
    ctx->pc = 0x192B10u;
    SET_GPR_U32(ctx, 31, 0x192B18u);
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B18u; }
        if (ctx->pc != 0x192B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B18u; }
        if (ctx->pc != 0x192B18u) { return; }
    }
    ctx->pc = 0x192B18u;
label_192b18:
    // 0x192b18: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x192b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x192b1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192B1Cu;
    {
        const bool branch_taken_0x192b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B1Cu;
            // 0x192b20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b1c) {
            ctx->pc = 0x192B40u;
            goto label_192b40;
        }
    }
    ctx->pc = 0x192B24u;
    // 0x192b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192b28: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x192b28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x192b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192b30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192b34: 0x8064a68  j           func_1929A0
    ctx->pc = 0x192B34u;
    ctx->pc = 0x192B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B34u;
            // 0x192b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1929A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1929A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x192B3Cu;
    // 0x192b3c: 0x0  nop
    ctx->pc = 0x192b3cu;
    // NOP
label_192b40:
    // 0x192b40: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x192b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x192b44: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x192b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x192b48: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x192b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x192b4c: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x192b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x192b50: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x192b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x192b54: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x192b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_192b58:
    // 0x192b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192b5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192b64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192b68: 0x3e00008  jr          $ra
    ctx->pc = 0x192B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B68u;
            // 0x192b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192B70u;
}
