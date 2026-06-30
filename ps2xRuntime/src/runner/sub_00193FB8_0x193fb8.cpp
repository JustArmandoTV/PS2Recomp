#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193FB8
// Address: 0x193fb8 - 0x1940c0
void sub_00193FB8_0x193fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193FB8_0x193fb8");
#endif

    switch (ctx->pc) {
        case 0x193fd4u: goto label_193fd4;
        case 0x194010u: goto label_194010;
        case 0x194070u: goto label_194070;
        default: break;
    }

    ctx->pc = 0x193fb8u;

    // 0x193fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193fc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193fcc: 0xc06599a  jal         func_196668
    ctx->pc = 0x193FCCu;
    SET_GPR_U32(ctx, 31, 0x193FD4u);
    ctx->pc = 0x193FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193FCCu;
            // 0x193fd0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FD4u; }
        if (ctx->pc != 0x193FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FD4u; }
        if (ctx->pc != 0x193FD4u) { return; }
    }
    ctx->pc = 0x193FD4u;
label_193fd4:
    // 0x193fd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x193FD4u;
    {
        const bool branch_taken_0x193fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193FD4u;
            // 0x193fd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fd4) {
            ctx->pc = 0x193FF8u;
            goto label_193ff8;
        }
    }
    ctx->pc = 0x193FDCu;
    // 0x193fdc: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x193fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x193fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193fec: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x193fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    // 0x193ff0: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x193FF0u;
    ctx->pc = 0x193FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193FF0u;
            // 0x193ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x193FF8u;
label_193ff8:
    // 0x193ff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ffc: 0x260301dc  addiu       $v1, $s0, 0x1DC
    ctx->pc = 0x193ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    // 0x194000: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x194000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x194004: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x194004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x194008: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x194008u;
    {
        const bool branch_taken_0x194008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194008u;
            // 0x19400c: 0x2604025c  addiu       $a0, $s0, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 604));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194008) {
            ctx->pc = 0x194070u;
            goto label_194070;
        }
    }
    ctx->pc = 0x194010u;
label_194010:
    // 0x194010: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x194010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x194014: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x194014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x194018: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x194018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x19401c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x19401cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x194020: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x194020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x194024: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x194024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x194028: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x194028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x19402c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x19402cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x194030: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x194030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x194034: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x194034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x194038: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x194038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19403c: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x19403cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x194040: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x194040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x194044: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x194044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x194048: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x194048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19404c: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x19404cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x194050: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x194050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x194054: 0x0  nop
    ctx->pc = 0x194054u;
    // NOP
    // 0x194058: 0x0  nop
    ctx->pc = 0x194058u;
    // NOP
    // 0x19405c: 0x1464ffec  bne         $v1, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19405Cu;
    {
        const bool branch_taken_0x19405c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x194060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19405Cu;
            // 0x194060: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19405c) {
            ctx->pc = 0x194010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194010;
        }
    }
    ctx->pc = 0x194064u;
    // 0x194064: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x194064u;
    {
        const bool branch_taken_0x194064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194064u;
            // 0x194068: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194064) {
            ctx->pc = 0x1940A8u;
            goto label_1940a8;
        }
    }
    ctx->pc = 0x19406Cu;
    // 0x19406c: 0x0  nop
    ctx->pc = 0x19406cu;
    // NOP
label_194070:
    // 0x194070: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x194070u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194074: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x194074u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x194078: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x194078u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19407c: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x19407cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x194080: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x194080u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x194084: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x194084u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x194088: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x194088u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x19408c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x19408cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x194090: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x194090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x194094: 0x0  nop
    ctx->pc = 0x194094u;
    // NOP
    // 0x194098: 0x0  nop
    ctx->pc = 0x194098u;
    // NOP
    // 0x19409c: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19409Cu;
    {
        const bool branch_taken_0x19409c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1940A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19409Cu;
            // 0x1940a0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19409c) {
            ctx->pc = 0x194070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194070;
        }
    }
    ctx->pc = 0x1940A4u;
    // 0x1940a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1940a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1940a8:
    // 0x1940a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1940a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1940acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1940b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1940b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1940b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1940B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1940B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1940B4u;
            // 0x1940b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1940BCu;
    // 0x1940bc: 0x0  nop
    ctx->pc = 0x1940bcu;
    // NOP
}
