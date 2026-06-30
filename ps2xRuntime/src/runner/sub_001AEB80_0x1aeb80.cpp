#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEB80
// Address: 0x1aeb80 - 0x1aec98
void sub_001AEB80_0x1aeb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEB80_0x1aeb80");
#endif

    switch (ctx->pc) {
        case 0x1aebf0u: goto label_1aebf0;
        case 0x1aec04u: goto label_1aec04;
        case 0x1aec20u: goto label_1aec20;
        default: break;
    }

    ctx->pc = 0x1aeb80u;

    // 0x1aeb80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aeb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aeb84: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1aeb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1aeb88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aeb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb8c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1aeb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1aeb90: 0x26110ea0  addiu       $s1, $s0, 0xEA0
    ctx->pc = 0x1aeb90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
    // 0x1aeb94: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1aeb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1aeb98: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1aeb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1aeb9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1aeb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aeba0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1AEBA0u;
    {
        const bool branch_taken_0x1aeba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBA0u;
            // 0x1aeba4: 0x26120dc4  addiu       $s2, $s0, 0xDC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeba0) {
            ctx->pc = 0x1AEC80u;
            goto label_1aec80;
        }
    }
    ctx->pc = 0x1AEBA8u;
    // 0x1aeba8: 0x6a020e53  ldl         $v0, 0xE53($s0)
    ctx->pc = 0x1aeba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1aebac: 0x6e020e4c  ldr         $v0, 0xE4C($s0)
    ctx->pc = 0x1aebacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3660); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1aebb0: 0x6a030e5b  ldl         $v1, 0xE5B($s0)
    ctx->pc = 0x1aebb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3675); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1aebb4: 0x6e030e54  ldr         $v1, 0xE54($s0)
    ctx->pc = 0x1aebb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3668); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1aebb8: 0x6a060e63  ldl         $a2, 0xE63($s0)
    ctx->pc = 0x1aebb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3683); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aebbc: 0x6e060e5c  ldr         $a2, 0xE5C($s0)
    ctx->pc = 0x1aebbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3676); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aebc0: 0x6a070e6b  ldl         $a3, 0xE6B($s0)
    ctx->pc = 0x1aebc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1aebc4: 0x6e070e64  ldr         $a3, 0xE64($s0)
    ctx->pc = 0x1aebc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3684); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1aebc8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1aebc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aebcc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1aebccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aebd0: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1aebd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aebd4: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1aebd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aebd8: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1aebd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aebdc: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1aebdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aebe0: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x1aebe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aebe4: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x1aebe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aebe8: 0xc06b7d2  jal         func_1ADF48
    ctx->pc = 0x1AEBE8u;
    SET_GPR_U32(ctx, 31, 0x1AEBF0u);
    ctx->pc = 0x1AEBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBE8u;
            // 0x1aebec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADF48u;
    if (runtime->hasFunction(0x1ADF48u)) {
        auto targetFn = runtime->lookupFunction(0x1ADF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBF0u; }
        if (ctx->pc != 0x1AEBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADF48_0x1adf48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBF0u; }
        if (ctx->pc != 0x1AEBF0u) { return; }
    }
    ctx->pc = 0x1AEBF0u;
label_1aebf0:
    // 0x1aebf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aebf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEBF4u;
    {
        const bool branch_taken_0x1aebf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBF4u;
            // 0x1aebf8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebf4) {
            ctx->pc = 0x1AEC10u;
            goto label_1aec10;
        }
    }
    ctx->pc = 0x1AEBFCu;
    // 0x1aebfc: 0xc06b83e  jal         func_1AE0F8
    ctx->pc = 0x1AEBFCu;
    SET_GPR_U32(ctx, 31, 0x1AEC04u);
    ctx->pc = 0x1AE0F8u;
    if (runtime->hasFunction(0x1AE0F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AE0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC04u; }
        if (ctx->pc != 0x1AEC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE0F8_0x1ae0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC04u; }
        if (ctx->pc != 0x1AEC04u) { return; }
    }
    ctx->pc = 0x1AEC04u;
label_1aec04:
    // 0x1aec04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aec08: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1aec08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1aec0c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1aec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1aec10:
    // 0x1aec10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1aec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec14: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1aec14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aec18: 0xc06dd7e  jal         func_1B75F8
    ctx->pc = 0x1AEC18u;
    SET_GPR_U32(ctx, 31, 0x1AEC20u);
    ctx->pc = 0x1AEC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC18u;
            // 0x1aec1c: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75F8u;
    if (runtime->hasFunction(0x1B75F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC20u; }
        if (ctx->pc != 0x1AEC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75F8_0x1b75f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC20u; }
        if (ctx->pc != 0x1AEC20u) { return; }
    }
    ctx->pc = 0x1AEC20u;
label_1aec20:
    // 0x1aec20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aec24: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1aec24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1aec28: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1aec28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1aec2c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1aec2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1aec30: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1aec30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1aec34: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x1aec34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1aec38: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x1aec38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1aec3c: 0x6ba6001f  ldl         $a2, 0x1F($sp)
    ctx->pc = 0x1aec3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1aec40: 0x6fa60018  ldr         $a2, 0x18($sp)
    ctx->pc = 0x1aec40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1aec44: 0xb2020eab  sdl         $v0, 0xEAB($s0)
    ctx->pc = 0x1aec44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3755); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aec48: 0xb6020ea4  sdr         $v0, 0xEA4($s0)
    ctx->pc = 0x1aec48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3748); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aec4c: 0xb2030eb3  sdl         $v1, 0xEB3($s0)
    ctx->pc = 0x1aec4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3763); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aec50: 0xb6030eac  sdr         $v1, 0xEAC($s0)
    ctx->pc = 0x1aec50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3756); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aec54: 0xb2040ebb  sdl         $a0, 0xEBB($s0)
    ctx->pc = 0x1aec54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3771); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aec58: 0xb6040eb4  sdr         $a0, 0xEB4($s0)
    ctx->pc = 0x1aec58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aec5c: 0xb2060ec3  sdl         $a2, 0xEC3($s0)
    ctx->pc = 0x1aec5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3779); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aec60: 0xb6060ebc  sdr         $a2, 0xEBC($s0)
    ctx->pc = 0x1aec60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3772); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aec64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1aec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aec68: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1aec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1aec6c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1aec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1aec70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1aec70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aec74: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x1aec74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x1aec78: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1aec78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1aec7c: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x1aec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
label_1aec80:
    // 0x1aec80: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1aec80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aec84: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1aec84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aec88: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1aec88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aec8c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1aec8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1aec90: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC90u;
            // 0x1aec94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEC98u;
}
