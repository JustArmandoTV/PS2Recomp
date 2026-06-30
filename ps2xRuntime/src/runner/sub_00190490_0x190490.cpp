#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190490
// Address: 0x190490 - 0x190670
void sub_00190490_0x190490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190490_0x190490");
#endif

    switch (ctx->pc) {
        case 0x1904a0u: goto label_1904a0;
        case 0x1904c8u: goto label_1904c8;
        case 0x1905a0u: goto label_1905a0;
        case 0x1905b8u: goto label_1905b8;
        case 0x1905e0u: goto label_1905e0;
        default: break;
    }

    ctx->pc = 0x190490u;

    // 0x190490: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x190490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x190494: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x190494u;
    {
        const bool branch_taken_0x190494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190494) {
            ctx->pc = 0x190498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x190494u;
            // 0x190498: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1904C0u;
            goto label_1904c0;
        }
    }
    ctx->pc = 0x19049Cu;
    // 0x19049c: 0x0  nop
    ctx->pc = 0x19049cu;
    // NOP
label_1904a0:
    // 0x1904a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1904a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1904a4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1904a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1904a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1904a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1904ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1904acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1904b0: 0x0  nop
    ctx->pc = 0x1904b0u;
    // NOP
    // 0x1904b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1904B4u;
    {
        const bool branch_taken_0x1904b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1904B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1904B4u;
            // 0x1904b8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904b4) {
            ctx->pc = 0x1904A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1904a0;
        }
    }
    ctx->pc = 0x1904BCu;
    // 0x1904bc: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1904bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
label_1904c0:
    // 0x1904c0: 0x10c00034  beqz        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x1904C0u;
    {
        const bool branch_taken_0x1904c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1904c0) {
            ctx->pc = 0x190594u;
            goto label_190594;
        }
    }
    ctx->pc = 0x1904C8u;
label_1904c8:
    // 0x1904c8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1904c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1904cc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1904ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1904d0: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1904d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1904d4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1904d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1904d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1904d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1904dc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1904dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1904e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1904e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1904e4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1904e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1904e8: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1904e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1904ec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1904ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1904f0: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1904f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1904f4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1904f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1904f8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1904f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1904fc: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1904fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190500: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x190504: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x190504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190508: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19050c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190510: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x190514: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x190514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190518: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19051c: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x19051cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x190520: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x190520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x190524: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x190524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x190528: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x190528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x19052c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x19052cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190530: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x190534: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x190534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190538: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19053c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190540: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x190544: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x190544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190548: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19054c: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x19054cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x190550: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x190550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x190554: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x190554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x190558: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x190558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x19055c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x19055cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190560: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x190564: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x190564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190568: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19056c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190570: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x190574: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x190574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190578: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x190578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19057c: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x19057cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x190580: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x190580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x190584: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x190584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x190588: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x190588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x19058c: 0x14c0ffce  bnez        $a2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x19058Cu;
    {
        const bool branch_taken_0x19058c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x190590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19058Cu;
            // 0x190590: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19058c) {
            ctx->pc = 0x1904C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1904c8;
        }
    }
    ctx->pc = 0x190594u;
label_190594:
    // 0x190594: 0x3e00008  jr          $ra
    ctx->pc = 0x190594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19059Cu;
    // 0x19059c: 0x0  nop
    ctx->pc = 0x19059cu;
    // NOP
label_1905a0:
    // 0x1905a0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1905a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1905a4: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x1905a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1905a8: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x1905a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x1905ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1905ACu;
    {
        const bool branch_taken_0x1905ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1905B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1905ACu;
            // 0x1905b0: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905ac) {
            ctx->pc = 0x1905D4u;
            goto label_1905d4;
        }
    }
    ctx->pc = 0x1905B4u;
    // 0x1905b4: 0x0  nop
    ctx->pc = 0x1905b4u;
    // NOP
label_1905b8:
    // 0x1905b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1905b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1905bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1905bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1905c0: 0x0  nop
    ctx->pc = 0x1905c0u;
    // NOP
    // 0x1905c4: 0x0  nop
    ctx->pc = 0x1905c4u;
    // NOP
    // 0x1905c8: 0x0  nop
    ctx->pc = 0x1905c8u;
    // NOP
    // 0x1905cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1905CCu;
    {
        const bool branch_taken_0x1905cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1905D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1905CCu;
            // 0x1905d0: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905cc) {
            ctx->pc = 0x1905B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1905b8;
        }
    }
    ctx->pc = 0x1905D4u;
label_1905d4:
    // 0x1905d4: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1905d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1905d8: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1905D8u;
    {
        const bool branch_taken_0x1905d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1905d8) {
            ctx->pc = 0x190668u;
            goto label_190668;
        }
    }
    ctx->pc = 0x1905E0u;
label_1905e0:
    // 0x1905e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1905e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1905e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1905e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1905e8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1905e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1905ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1905ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1905f0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1905f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1905f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1905f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1905f8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1905f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1905fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1905fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190600: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190600u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x190604: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x190604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190608: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190608u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19060c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19060cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190610: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190610u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x190614: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x190614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190618: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190618u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19061c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19061cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190620: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x190624: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x190624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190628: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190628u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19062c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19062cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190630: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190630u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x190634: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x190634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190638: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19063c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190640: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x190644: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x190644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190648: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190648u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19064c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190650: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x190654: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x190654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190658: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x190658u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x19065c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19065cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x190660: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x190660u;
    {
        const bool branch_taken_0x190660 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x190664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190660u;
            // 0x190664: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190660) {
            ctx->pc = 0x1905E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1905e0;
        }
    }
    ctx->pc = 0x190668u;
label_190668:
    // 0x190668: 0x3e00008  jr          $ra
    ctx->pc = 0x190668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190670u;
}
