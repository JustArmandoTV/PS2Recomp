#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018FF60
// Address: 0x18ff60 - 0x190170
void sub_0018FF60_0x18ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FF60_0x18ff60");
#endif

    switch (ctx->pc) {
        case 0x18ff80u: goto label_18ff80;
        case 0x18ffb0u: goto label_18ffb0;
        case 0x190060u: goto label_190060;
        case 0x190068u: goto label_190068;
        case 0x19009cu: goto label_19009c;
        case 0x190108u: goto label_190108;
        case 0x190120u: goto label_190120;
        default: break;
    }

    ctx->pc = 0x18ff60u;

    // 0x18ff60: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x18ff64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ff64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff68: 0x2442fe60  addiu       $v0, $v0, -0x1A0
    ctx->pc = 0x18ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966880));
    // 0x18ff6c: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x18ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x18ff70: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x18FF70u;
    {
        const bool branch_taken_0x18ff70 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x18FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF70u;
            // 0x18ff74: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff70) {
            ctx->pc = 0x18FFA4u;
            goto label_18ffa4;
        }
    }
    ctx->pc = 0x18FF78u;
    // 0x18ff78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18ff78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ff7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18ff80:
    // 0x18ff80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18ff80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff84: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FF84u;
    {
        const bool branch_taken_0x18ff84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x18FF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF84u;
            // 0x18ff88: 0x24840660  addiu       $a0, $a0, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff84) {
            ctx->pc = 0x18FFA8u;
            goto label_18ffa8;
        }
    }
    ctx->pc = 0x18FF8Cu;
    // 0x18ff8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18ff8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18ff90: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x18ff90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18ff94: 0x0  nop
    ctx->pc = 0x18ff94u;
    // NOP
    // 0x18ff98: 0x0  nop
    ctx->pc = 0x18ff98u;
    // NOP
    // 0x18ff9c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18FF9Cu;
    {
        const bool branch_taken_0x18ff9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ff9c) {
            ctx->pc = 0x18FFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF9Cu;
            // 0x18ffa0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18FF80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ff80;
        }
    }
    ctx->pc = 0x18FFA4u;
label_18ffa4:
    // 0x18ffa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ffa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ffa8:
    // 0x18ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x18FFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FFB0u;
label_18ffb0:
    // 0x18ffb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ffb4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x18ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x18ffb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18ffb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18ffbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ffbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18ffc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18ffc4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x18ffc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18ffcc: 0x2448fe60  addiu       $t0, $v0, -0x1A0
    ctx->pc = 0x18ffccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966880));
    // 0x18ffd0: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x18ffd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x18ffd4: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x18ffd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x18ffd8: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x18ffd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x18ffdc: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x18ffdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x18ffe0: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x18ffe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x18ffe4: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x18ffe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x18ffe8: 0xb205001f  sdl         $a1, 0x1F($s0)
    ctx->pc = 0x18ffe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18ffec: 0xb6050018  sdr         $a1, 0x18($s0)
    ctx->pc = 0x18ffecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18fff0: 0xb2060027  sdl         $a2, 0x27($s0)
    ctx->pc = 0x18fff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18fff4: 0xb6060020  sdr         $a2, 0x20($s0)
    ctx->pc = 0x18fff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18fff8: 0xb207002f  sdl         $a3, 0x2F($s0)
    ctx->pc = 0x18fff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18fffc: 0xb6070028  sdr         $a3, 0x28($s0)
    ctx->pc = 0x18fffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190000: 0x6905001f  ldl         $a1, 0x1F($t0)
    ctx->pc = 0x190000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x190004: 0x6d050018  ldr         $a1, 0x18($t0)
    ctx->pc = 0x190004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x190008: 0x69060027  ldl         $a2, 0x27($t0)
    ctx->pc = 0x190008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x19000c: 0x6d060020  ldr         $a2, 0x20($t0)
    ctx->pc = 0x19000cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x190010: 0x6907002f  ldl         $a3, 0x2F($t0)
    ctx->pc = 0x190010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x190014: 0x6d070028  ldr         $a3, 0x28($t0)
    ctx->pc = 0x190014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x190018: 0xb2050037  sdl         $a1, 0x37($s0)
    ctx->pc = 0x190018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19001c: 0xb6050030  sdr         $a1, 0x30($s0)
    ctx->pc = 0x19001cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190020: 0xb206003f  sdl         $a2, 0x3F($s0)
    ctx->pc = 0x190020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190024: 0xb6060038  sdr         $a2, 0x38($s0)
    ctx->pc = 0x190024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190028: 0xb2070047  sdl         $a3, 0x47($s0)
    ctx->pc = 0x190028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19002c: 0xb6070040  sdr         $a3, 0x40($s0)
    ctx->pc = 0x19002cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190030: 0x69050037  ldl         $a1, 0x37($t0)
    ctx->pc = 0x190030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x190034: 0x6d050030  ldr         $a1, 0x30($t0)
    ctx->pc = 0x190034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x190038: 0x6906003f  ldl         $a2, 0x3F($t0)
    ctx->pc = 0x190038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x19003c: 0x6d060038  ldr         $a2, 0x38($t0)
    ctx->pc = 0x19003cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x190040: 0xb205004f  sdl         $a1, 0x4F($s0)
    ctx->pc = 0x190040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190044: 0xb6050048  sdr         $a1, 0x48($s0)
    ctx->pc = 0x190044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190048: 0xb2060057  sdl         $a2, 0x57($s0)
    ctx->pc = 0x190048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19004c: 0xb6060050  sdr         $a2, 0x50($s0)
    ctx->pc = 0x19004cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190050: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x190050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x190054: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x190054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x190058: 0xc062ad6  jal         func_18AB58
    ctx->pc = 0x190058u;
    SET_GPR_U32(ctx, 31, 0x190060u);
    ctx->pc = 0x19005Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190058u;
            // 0x19005c: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AB58u;
    if (runtime->hasFunction(0x18AB58u)) {
        auto targetFn = runtime->lookupFunction(0x18AB58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190060u; }
        if (ctx->pc != 0x190060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AB58_0x18ab58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190060u; }
        if (ctx->pc != 0x190060u) { return; }
    }
    ctx->pc = 0x190060u;
label_190060:
    // 0x190060: 0xc063f9c  jal         func_18FE70
    ctx->pc = 0x190060u;
    SET_GPR_U32(ctx, 31, 0x190068u);
    ctx->pc = 0x190064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190060u;
            // 0x190064: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18FE70u;
    if (runtime->hasFunction(0x18FE70u)) {
        auto targetFn = runtime->lookupFunction(0x18FE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190068u; }
        if (ctx->pc != 0x190068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FE70_0x18fe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190068u; }
        if (ctx->pc != 0x190068u) { return; }
    }
    ctx->pc = 0x190068u;
label_190068:
    // 0x190068: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x190068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x19006c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x190070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190074: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x190074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x190078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19007c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19007cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x190080: 0x3e00008  jr          $ra
    ctx->pc = 0x190080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190080u;
            // 0x190084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190088u;
    // 0x190088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19008c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19008cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x190090: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x190090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x190094: 0xc064076  jal         func_1901D8
    ctx->pc = 0x190094u;
    SET_GPR_U32(ctx, 31, 0x19009Cu);
    ctx->pc = 0x190098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190094u;
            // 0x190098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19009Cu; }
        if (ctx->pc != 0x19009Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19009Cu; }
        if (ctx->pc != 0x19009Cu) { return; }
    }
    ctx->pc = 0x19009Cu;
label_19009c:
    // 0x19009c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x19009cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1900a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1900a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1900A4u;
    {
        const bool branch_taken_0x1900a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1900A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1900A4u;
            // 0x1900a8: 0x34a50201  ori         $a1, $a1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900a4) {
            ctx->pc = 0x1900C0u;
            goto label_1900c0;
        }
    }
    ctx->pc = 0x1900ACu;
    // 0x1900ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1900acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1900b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1900b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1900b4: 0x80629ca  j           func_18A728
    ctx->pc = 0x1900B4u;
    ctx->pc = 0x1900B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1900B4u;
            // 0x1900b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    {
        auto targetFn = runtime->lookupFunction(0x18A728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1900BCu;
    // 0x1900bc: 0x0  nop
    ctx->pc = 0x1900bcu;
    // NOP
label_1900c0:
    // 0x1900c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1900c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1900c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1900c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1900c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1900c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1900cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1900ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1900d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1900D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1900D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1900D0u;
            // 0x1900d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1900D8u;
    // 0x1900d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1900d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1900dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1900dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1900e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1900e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1900e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1900e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1900e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1900ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1900f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1900f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900f4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1900F4u;
    {
        const bool branch_taken_0x1900f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1900F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1900F4u;
            // 0x1900f8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900f4) {
            ctx->pc = 0x190118u;
            goto label_190118;
        }
    }
    ctx->pc = 0x1900FCu;
    // 0x1900fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1900fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190100: 0xc06405c  jal         func_190170
    ctx->pc = 0x190100u;
    SET_GPR_U32(ctx, 31, 0x190108u);
    ctx->pc = 0x190104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190100u;
            // 0x190104: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190170u;
    if (runtime->hasFunction(0x190170u)) {
        auto targetFn = runtime->lookupFunction(0x190170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190108u; }
        if (ctx->pc != 0x190108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190170_0x190170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190108u; }
        if (ctx->pc != 0x190108u) { return; }
    }
    ctx->pc = 0x190108u;
label_190108:
    // 0x190108: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x190108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x19010c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19010Cu;
    {
        const bool branch_taken_0x19010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19010Cu;
            // 0x190110: 0x2444fe60  addiu       $a0, $v0, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19010c) {
            ctx->pc = 0x19014Cu;
            goto label_19014c;
        }
    }
    ctx->pc = 0x190114u;
    // 0x190114: 0x0  nop
    ctx->pc = 0x190114u;
    // NOP
label_190118:
    // 0x190118: 0xc064076  jal         func_1901D8
    ctx->pc = 0x190118u;
    SET_GPR_U32(ctx, 31, 0x190120u);
    ctx->pc = 0x1901D8u;
    if (runtime->hasFunction(0x1901D8u)) {
        auto targetFn = runtime->lookupFunction(0x1901D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190120u; }
        if (ctx->pc != 0x190120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001901D8_0x1901d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190120u; }
        if (ctx->pc != 0x190120u) { return; }
    }
    ctx->pc = 0x190120u;
label_190120:
    // 0x190120: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x190120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x190124: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x190124u;
    {
        const bool branch_taken_0x190124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190124u;
            // 0x190128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190124) {
            ctx->pc = 0x190148u;
            goto label_190148;
        }
    }
    ctx->pc = 0x19012Cu;
    // 0x19012c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19012cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190130: 0x34a50202  ori         $a1, $a1, 0x202
    ctx->pc = 0x190130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    // 0x190134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x190138: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x190138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19013c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19013cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x190140: 0x80629ca  j           func_18A728
    ctx->pc = 0x190140u;
    ctx->pc = 0x190144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190140u;
            // 0x190144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A728u;
    {
        auto targetFn = runtime->lookupFunction(0x18A728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x190148u;
label_190148:
    // 0x190148: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x190148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_19014c:
    // 0x19014c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x19014cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x190150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x190150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x190154: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x190154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x190158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19015c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x19015cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x190160: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x190160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x190164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x190164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190168: 0x3e00008  jr          $ra
    ctx->pc = 0x190168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19016Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190168u;
            // 0x19016c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190170u;
}
