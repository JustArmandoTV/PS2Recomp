#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1798
// Address: 0x1b1798 - 0x1b1810
void sub_001B1798_0x1b1798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1798_0x1b1798");
#endif

    switch (ctx->pc) {
        case 0x1b17fcu: goto label_1b17fc;
        default: break;
    }

    ctx->pc = 0x1b1798u;

    // 0x1b1798: 0x8c832030  lw          $v1, 0x2030($a0)
    ctx->pc = 0x1b1798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b179c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B179Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B17A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B179Cu;
            // 0x1b17a0: 0x8c6211fc  lw          $v0, 0x11FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B17A4u;
    // 0x1b17a4: 0x0  nop
    ctx->pc = 0x1b17a4u;
    // NOP
    // 0x1b17a8: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1b17a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1b17ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b17acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b17b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b17b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b17b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b17b8: 0xac621e78  sw          $v0, 0x1E78($v1)
    ctx->pc = 0x1b17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7800), GPR_U32(ctx, 2));
    // 0x1b17bc: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1b17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1b17c0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b17c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17c4: 0x24481e80  addiu       $t0, $v0, 0x1E80
    ctx->pc = 0x1b17c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
    // 0x1b17c8: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1b17c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b17cc: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1b17ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b17d0: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x1b17d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b17d4: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x1b17d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b17d8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b17d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b17dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b17dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17e0: 0x8cc22030  lw          $v0, 0x2030($a2)
    ctx->pc = 0x1b17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8240)));
    // 0x1b17e4: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1b17e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1b17e8: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1b17e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1b17ec: 0xb04911ff  sdl         $t1, 0x11FF($v0)
    ctx->pc = 0x1b17ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b17f0: 0xb44911f8  sdr         $t1, 0x11F8($v0)
    ctx->pc = 0x1b17f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b17f4: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B17F4u;
    SET_GPR_U32(ctx, 31, 0x1B17FCu);
    ctx->pc = 0x1B17F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17F4u;
            // 0x1b17f8: 0x34a50f40  ori         $a1, $a1, 0xF40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3904);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17FCu; }
        if (ctx->pc != 0x1B17FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17FCu; }
        if (ctx->pc != 0x1B17FCu) { return; }
    }
    ctx->pc = 0x1B17FCu;
label_1b17fc:
    // 0x1b17fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1804: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1804u;
            // 0x1b1808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B180Cu;
    // 0x1b180c: 0x0  nop
    ctx->pc = 0x1b180cu;
    // NOP
}
