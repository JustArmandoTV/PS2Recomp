#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEC98
// Address: 0x1aec98 - 0x1aee58
void sub_001AEC98_0x1aec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEC98_0x1aec98");
#endif

    switch (ctx->pc) {
        case 0x1aed0cu: goto label_1aed0c;
        case 0x1aed1cu: goto label_1aed1c;
        case 0x1aed40u: goto label_1aed40;
        case 0x1aed9cu: goto label_1aed9c;
        case 0x1aee10u: goto label_1aee10;
        default: break;
    }

    ctx->pc = 0x1aec98u;

    // 0x1aec98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aec98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aec9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aeca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aeca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aeca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aeca8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aeca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aecac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aecb0: 0x6a020e4f  ldl         $v0, 0xE4F($s0)
    ctx->pc = 0x1aecb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3663); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1aecb4: 0x6e020e48  ldr         $v0, 0xE48($s0)
    ctx->pc = 0x1aecb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3656); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1aecb8: 0x6a030e57  ldl         $v1, 0xE57($s0)
    ctx->pc = 0x1aecb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3671); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1aecbc: 0x6e030e50  ldr         $v1, 0xE50($s0)
    ctx->pc = 0x1aecbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3664); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1aecc0: 0x6a050e5f  ldl         $a1, 0xE5F($s0)
    ctx->pc = 0x1aecc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1aecc4: 0x6e050e58  ldr         $a1, 0xE58($s0)
    ctx->pc = 0x1aecc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1aecc8: 0x6a060e67  ldl         $a2, 0xE67($s0)
    ctx->pc = 0x1aecc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3687); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aeccc: 0x6e060e60  ldr         $a2, 0xE60($s0)
    ctx->pc = 0x1aecccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3680); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aecd0: 0xb2220013  sdl         $v0, 0x13($s1)
    ctx->pc = 0x1aecd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aecd4: 0xb622000c  sdr         $v0, 0xC($s1)
    ctx->pc = 0x1aecd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aecd8: 0xb223001b  sdl         $v1, 0x1B($s1)
    ctx->pc = 0x1aecd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aecdc: 0xb6230014  sdr         $v1, 0x14($s1)
    ctx->pc = 0x1aecdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aece0: 0xb2250023  sdl         $a1, 0x23($s1)
    ctx->pc = 0x1aece0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aece4: 0xb625001c  sdr         $a1, 0x1C($s1)
    ctx->pc = 0x1aece4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aece8: 0xb226002b  sdl         $a2, 0x2B($s1)
    ctx->pc = 0x1aece8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aecec: 0xb6260024  sdr         $a2, 0x24($s1)
    ctx->pc = 0x1aececu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aecf0: 0x6a020e6f  ldl         $v0, 0xE6F($s0)
    ctx->pc = 0x1aecf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1aecf4: 0x6e020e68  ldr         $v0, 0xE68($s0)
    ctx->pc = 0x1aecf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3688); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1aecf8: 0x8e030e70  lw          $v1, 0xE70($s0)
    ctx->pc = 0x1aecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3696)));
    // 0x1aecfc: 0xb2220033  sdl         $v0, 0x33($s1)
    ctx->pc = 0x1aecfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aed00: 0xb622002c  sdr         $v0, 0x2C($s1)
    ctx->pc = 0x1aed00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aed04: 0xc06c530  jal         func_1B14C0
    ctx->pc = 0x1AED04u;
    SET_GPR_U32(ctx, 31, 0x1AED0Cu);
    ctx->pc = 0x1AED08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED04u;
            // 0x1aed08: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14C0u;
    if (runtime->hasFunction(0x1B14C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED0Cu; }
        if (ctx->pc != 0x1AED0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14C0_0x1b14c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED0Cu; }
        if (ctx->pc != 0x1AED0Cu) { return; }
    }
    ctx->pc = 0x1AED0Cu;
label_1aed0c:
    // 0x1aed0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AED0Cu;
    {
        const bool branch_taken_0x1aed0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED0Cu;
            // 0x1aed10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed0c) {
            ctx->pc = 0x1AED20u;
            goto label_1aed20;
        }
    }
    ctx->pc = 0x1AED14u;
    // 0x1aed14: 0xc06c788  jal         func_1B1E20
    ctx->pc = 0x1AED14u;
    SET_GPR_U32(ctx, 31, 0x1AED1Cu);
    ctx->pc = 0x1B1E20u;
    if (runtime->hasFunction(0x1B1E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B1E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED1Cu; }
        if (ctx->pc != 0x1AED1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1E20_0x1b1e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED1Cu; }
        if (ctx->pc != 0x1AED1Cu) { return; }
    }
    ctx->pc = 0x1AED1Cu;
label_1aed1c:
    // 0x1aed1c: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x1aed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
label_1aed20:
    // 0x1aed20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aed20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aed24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aed28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aed28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aed2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aed30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aed30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aed34: 0x806bb50  j           func_1AED40
    ctx->pc = 0x1AED34u;
    ctx->pc = 0x1AED38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED34u;
            // 0x1aed38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AED40u;
    goto label_1aed40;
    ctx->pc = 0x1AED3Cu;
    // 0x1aed3c: 0x0  nop
    ctx->pc = 0x1aed3cu;
    // NOP
label_1aed40:
    // 0x1aed40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aed44: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1aed44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aed4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aed4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aed50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aed54: 0x24710d88  addiu       $s1, $v1, 0xD88
    ctx->pc = 0x1aed54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3464));
    // 0x1aed58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aed58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aed5c: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1aed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1aed60: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1aed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1aed64: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1aed64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1aed68: 0x8c660ec4  lw          $a2, 0xEC4($v1)
    ctx->pc = 0x1aed68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3780)));
    // 0x1aed6c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1aed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1aed70: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1aed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1aed74: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1aed74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1aed78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aed7c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1aed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1aed80: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1aed80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1aed84: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1aed84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1aed88: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aed88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed8c: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1aed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1aed90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aed94: 0xc06c530  jal         func_1B14C0
    ctx->pc = 0x1AED94u;
    SET_GPR_U32(ctx, 31, 0x1AED9Cu);
    ctx->pc = 0x1AED98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED94u;
            // 0x1aed98: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14C0u;
    if (runtime->hasFunction(0x1B14C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED9Cu; }
        if (ctx->pc != 0x1AED9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14C0_0x1b14c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AED9Cu; }
        if (ctx->pc != 0x1AED9Cu) { return; }
    }
    ctx->pc = 0x1AED9Cu;
label_1aed9c:
    // 0x1aed9c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AED9Cu;
    {
        const bool branch_taken_0x1aed9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED9Cu;
            // 0x1aeda0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed9c) {
            ctx->pc = 0x1AEE24u;
            goto label_1aee24;
        }
    }
    ctx->pc = 0x1AEDA4u;
    // 0x1aeda4: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1aeda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1aeda8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aedac: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1aedacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1aedb0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1aedb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1aedb4: 0x8cc6ae40  lw          $a2, -0x51C0($a2)
    ctx->pc = 0x1aedb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946368)));
    // 0x1aedb8: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEDB8u;
    {
        const bool branch_taken_0x1aedb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AEDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEDB8u;
            // 0x1aedbc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedb8) {
            ctx->pc = 0x1AEDD8u;
            goto label_1aedd8;
        }
    }
    ctx->pc = 0x1AEDC0u;
    // 0x1aedc0: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x1aedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1aedc4: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1aedc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aedc8: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x1aedc8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1aedcc: 0x240700fa  addiu       $a3, $zero, 0xFA
    ctx->pc = 0x1aedccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1aedd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AEDD0u;
    {
        const bool branch_taken_0x1aedd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEDD0u;
            // 0x1aedd4: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedd0) {
            ctx->pc = 0x1AEDF4u;
            goto label_1aedf4;
        }
    }
    ctx->pc = 0x1AEDD8u;
label_1aedd8:
    // 0x1aedd8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1aedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1aeddc: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1aeddcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1aede0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AEDE0u;
    {
        const bool branch_taken_0x1aede0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aede0) {
            ctx->pc = 0x1AEDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEDE0u;
            // 0x1aede4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AEDE8u;
            goto label_1aede8;
        }
    }
    ctx->pc = 0x1AEDE8u;
label_1aede8:
    // 0x1aede8: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x1aede8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1aedec: 0x1012  mflo        $v0
    ctx->pc = 0x1aedecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1aedf0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aedf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aedf4:
    // 0x1aedf4: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x1aedf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1aedf8: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x1aedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1aedfc: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1aedfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1aee00: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x1aee00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1aee04: 0x2812  mflo        $a1
    ctx->pc = 0x1aee04u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1aee08: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1AEE08u;
    SET_GPR_U32(ctx, 31, 0x1AEE10u);
    ctx->pc = 0x1AEE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE08u;
            // 0x1aee0c: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE10u; }
        if (ctx->pc != 0x1AEE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE10u; }
        if (ctx->pc != 0x1AEE10u) { return; }
    }
    ctx->pc = 0x1AEE10u;
label_1aee10:
    // 0x1aee10: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1aee10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1aee14: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1aee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1aee18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aee1c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1aee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1aee20: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1aee20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1aee24:
    // 0x1aee24: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1aee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1aee28: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x1aee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x1aee2c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1aee2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1aee30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AEE30u;
    {
        const bool branch_taken_0x1aee30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee30) {
            ctx->pc = 0x1AEE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE30u;
            // 0x1aee34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AEE48u;
            goto label_1aee48;
        }
    }
    ctx->pc = 0x1AEE38u;
    // 0x1aee38: 0xae230284  sw          $v1, 0x284($s1)
    ctx->pc = 0x1aee38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 3));
    // 0x1aee3c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1aee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1aee40: 0xae220288  sw          $v0, 0x288($s1)
    ctx->pc = 0x1aee40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
    // 0x1aee44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aee44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aee48:
    // 0x1aee48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aee48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aee4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aee4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee50: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE50u;
            // 0x1aee54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEE58u;
}
