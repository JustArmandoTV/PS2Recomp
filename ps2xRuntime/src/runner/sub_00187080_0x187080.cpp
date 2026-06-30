#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187080
// Address: 0x187080 - 0x187178
void sub_00187080_0x187080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187080_0x187080");
#endif

    switch (ctx->pc) {
        case 0x1870e0u: goto label_1870e0;
        default: break;
    }

    ctx->pc = 0x187080u;

    // 0x187080: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x187080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x187084: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x187084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x187088: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x187088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18708c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x18708cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187090: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x187090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x187094: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x187094u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x187098: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x187098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18709c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18709cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1870a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1870A0u;
    {
        const bool branch_taken_0x1870a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1870a0) {
            ctx->pc = 0x1870A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1870A0u;
            // 0x1870a4: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1870B4u;
            goto label_1870b4;
        }
    }
    ctx->pc = 0x1870A8u;
    // 0x1870a8: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1870a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1870ac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1870acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870b0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1870b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1870b4:
    // 0x1870b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1870b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1870b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1870B8u;
    {
        const bool branch_taken_0x1870b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1870BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1870B8u;
            // 0x1870bc: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1870b8) {
            ctx->pc = 0x1870C8u;
            goto label_1870c8;
        }
    }
    ctx->pc = 0x1870C0u;
    // 0x1870c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1870C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1870C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1870C0u;
            // 0x1870c4: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1870C8u;
label_1870c8:
    // 0x1870c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1870c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1870cc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1870ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1870d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1870d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1870d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1870D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1870D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1870D4u;
            // 0x1870d8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1870DCu;
    // 0x1870dc: 0x0  nop
    ctx->pc = 0x1870dcu;
    // NOP
label_1870e0:
    // 0x1870e0: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1870e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1870e4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1870e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1870e8: 0x24635bb8  addiu       $v1, $v1, 0x5BB8
    ctx->pc = 0x1870e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23480));
    // 0x1870ec: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1870ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1870f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1870f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1870f4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1870f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1870f8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1870f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1870fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1870fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187100: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x187104: 0xa0a60006  sb          $a2, 0x6($a1)
    ctx->pc = 0x187104u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x187108: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x187108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x18710c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x18710cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x187110: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x187110u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x187114: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x187114u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187118: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x187118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x18711c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187120: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x187120u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x187124: 0xa0a70005  sb          $a3, 0x5($a1)
    ctx->pc = 0x187124u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x187128: 0x3088000f  andi        $t0, $a0, 0xF
    ctx->pc = 0x187128u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x18712c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x18712cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x187130: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x187134: 0x90c90000  lbu         $t1, 0x0($a2)
    ctx->pc = 0x187134u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187138: 0x3087000f  andi        $a3, $a0, 0xF
    ctx->pc = 0x187138u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x18713c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x18713cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x187140: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x187140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x187144: 0xa0a90004  sb          $t1, 0x4($a1)
    ctx->pc = 0x187144u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x187148: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x187148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x18714c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18714cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x187150: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x187150u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187154: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x187154u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x187158: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x187158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18715c: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x18715cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x187160: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x187160u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x187164: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x187164u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x187168: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x187168u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18716c: 0x3e00008  jr          $ra
    ctx->pc = 0x18716Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18716Cu;
            // 0x187170: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187174u;
    // 0x187174: 0x0  nop
    ctx->pc = 0x187174u;
    // NOP
}
