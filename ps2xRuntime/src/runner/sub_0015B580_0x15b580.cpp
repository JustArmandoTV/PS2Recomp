#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B580
// Address: 0x15b580 - 0x15b740
void sub_0015B580_0x15b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B580_0x15b580");
#endif

    switch (ctx->pc) {
        case 0x15b598u: goto label_15b598;
        case 0x15b6dcu: goto label_15b6dc;
        case 0x15b6f0u: goto label_15b6f0;
        default: break;
    }

    ctx->pc = 0x15b580u;

    // 0x15b580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b584: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x15b584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x15b588: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15B588u;
    {
        const bool branch_taken_0x15b588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B588u;
            // 0x15b58c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b588) {
            ctx->pc = 0x15B5B8u;
            goto label_15b5b8;
        }
    }
    ctx->pc = 0x15B590u;
    // 0x15b590: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15B590u;
    {
        const bool branch_taken_0x15b590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b590) {
            ctx->pc = 0x15B5B8u;
            goto label_15b5b8;
        }
    }
    ctx->pc = 0x15B598u;
label_15b598:
    // 0x15b598: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x15b598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x15b59c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15b5a0: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x15b5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x15b5a4: 0x0  nop
    ctx->pc = 0x15b5a4u;
    // NOP
    // 0x15b5a8: 0x0  nop
    ctx->pc = 0x15b5a8u;
    // NOP
    // 0x15b5ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15B5ACu;
    {
        const bool branch_taken_0x15b5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b5ac) {
            ctx->pc = 0x15B598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15b598;
        }
    }
    ctx->pc = 0x15B5B4u;
    // 0x15b5b4: 0x0  nop
    ctx->pc = 0x15b5b4u;
    // NOP
label_15b5b8:
    // 0x15b5b8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x15b5b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b5bc: 0x5313c  dsll32      $a2, $a1, 4
    ctx->pc = 0x15b5bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 4));
    // 0x15b5c0: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x15b5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15b5c4: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x15b5c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
    // 0x15b5c8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x15b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15b5cc: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x15b5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b5d0: 0x8ce90030  lw          $t1, 0x30($a3)
    ctx->pc = 0x15b5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x15b5d4: 0xc93023  subu        $a2, $a2, $t1
    ctx->pc = 0x15b5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x15b5d8: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x15b5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x15b5dc: 0x10c0003f  beqz        $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x15B5DCu;
    {
        const bool branch_taken_0x15b5dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5DCu;
            // 0x15b5e0: 0x24e30020  addiu       $v1, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5dc) {
            ctx->pc = 0x15B6DCu;
            goto label_15b6dc;
        }
    }
    ctx->pc = 0x15B5E4u;
    // 0x15b5e4: 0x31070001  andi        $a3, $t0, 0x1
    ctx->pc = 0x15b5e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x15b5e8: 0x50e0001a  beql        $a3, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x15B5E8u;
    {
        const bool branch_taken_0x15b5e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b5e8) {
            ctx->pc = 0x15B5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5E8u;
            // 0x15b5ec: 0x8c680004  lw          $t0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B654u;
            goto label_15b654;
        }
    }
    ctx->pc = 0x15B5F0u;
    // 0x15b5f0: 0x31070002  andi        $a3, $t0, 0x2
    ctx->pc = 0x15b5f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x15b5f4: 0x50e00008  beql        $a3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15B5F4u;
    {
        const bool branch_taken_0x15b5f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b5f4) {
            ctx->pc = 0x15B5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5F4u;
            // 0x15b5f8: 0x8c680010  lw          $t0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B618u;
            goto label_15b618;
        }
    }
    ctx->pc = 0x15B5FCu;
    // 0x15b5fc: 0x3c071700  lui         $a3, 0x1700
    ctx->pc = 0x15b5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5888 << 16));
    // 0x15b600: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b604: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x15b604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x15b608: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x15b608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x15b60c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x15b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x15b610: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x15b610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x15b614: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x15b614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_15b618:
    // 0x15b618: 0x24053000  addiu       $a1, $zero, 0x3000
    ctx->pc = 0x15b618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x15b61c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15b61cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15b620: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x15b620u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x15b624: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x15b624u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x15b628: 0xace80004  sw          $t0, 0x4($a3)
    ctx->pc = 0x15b628u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
    // 0x15b62c: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x15b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x15b630: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x15b630u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x15b634: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x15b634u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x15b638: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x15b638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15b63c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x15b63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15b640: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x15b640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x15b644: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x15b644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x15b648: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b64c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15B64Cu;
    {
        const bool branch_taken_0x15b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B64Cu;
            // 0x15b650: 0xac65001c  sw          $a1, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b64c) {
            ctx->pc = 0x15B694u;
            goto label_15b694;
        }
    }
    ctx->pc = 0x15B654u;
label_15b654:
    // 0x15b654: 0x24073000  addiu       $a3, $zero, 0x3000
    ctx->pc = 0x15b654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x15b658: 0x3c055100  lui         $a1, 0x5100
    ctx->pc = 0x15b658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20736 << 16));
    // 0x15b65c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15b65cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15b660: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x15b660u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x15b664: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x15b664u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x15b668: 0xad090004  sw          $t1, 0x4($t0)
    ctx->pc = 0x15b668u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 9));
    // 0x15b66c: 0x8c670028  lw          $a3, 0x28($v1)
    ctx->pc = 0x15b66cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x15b670: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x15b670u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x15b674: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x15b674u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x15b678: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x15b678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x15b67c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x15b67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15b680: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x15b680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15b684: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x15b684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x15b688: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x15b688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x15b68c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15b690: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x15b690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_15b694:
    // 0x15b694: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x15b694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15b698: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x15b698u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x15b69c: 0x2405ffc0  addiu       $a1, $zero, -0x40
    ctx->pc = 0x15b69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x15b6a0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b6a4: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x15b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x15b6a8: 0x24c6003f  addiu       $a2, $a2, 0x3F
    ctx->pc = 0x15b6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x15b6ac: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x15b6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x15b6b0: 0xa73023  subu        $a2, $a1, $a3
    ctx->pc = 0x15b6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15b6b4: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x15b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x15b6b8: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x15b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15b6bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15b6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15b6c0: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x15b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x15b6c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b6c8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x15b6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x15b6cc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B6CCu;
    {
        const bool branch_taken_0x15b6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b6cc) {
            ctx->pc = 0x15B6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6CCu;
            // 0x15b6d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B6E0u;
            goto label_15b6e0;
        }
    }
    ctx->pc = 0x15B6D4u;
    // 0x15b6d4: 0xc056d40  jal         func_15B500
    ctx->pc = 0x15B6D4u;
    SET_GPR_U32(ctx, 31, 0x15B6DCu);
    ctx->pc = 0x15B500u;
    if (runtime->hasFunction(0x15B500u)) {
        auto targetFn = runtime->lookupFunction(0x15B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6DCu; }
        if (ctx->pc != 0x15B6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B500_0x15b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6DCu; }
        if (ctx->pc != 0x15B6DCu) { return; }
    }
    ctx->pc = 0x15B6DCu;
label_15b6dc:
    // 0x15b6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b6e0:
    // 0x15b6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x15B6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6E0u;
            // 0x15b6e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B6E8u;
    // 0x15b6e8: 0x0  nop
    ctx->pc = 0x15b6e8u;
    // NOP
    // 0x15b6ec: 0x0  nop
    ctx->pc = 0x15b6ecu;
    // NOP
label_15b6f0:
    // 0x15b6f0: 0x94880004  lhu         $t0, 0x4($a0)
    ctx->pc = 0x15b6f0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b6f4: 0x24073000  addiu       $a3, $zero, 0x3000
    ctx->pc = 0x15b6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x15b6f8: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x15b6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15b6fc: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x15b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x15b700: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x15b700u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x15b704: 0x884821  addu        $t1, $a0, $t0
    ctx->pc = 0x15b704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15b708: 0x8d280024  lw          $t0, 0x24($t1)
    ctx->pc = 0x15b708u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x15b70c: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x15b70cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x15b710: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x15b710u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15b714: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x15b714u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x15b718: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x15b718u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x15b71c: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x15b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x15b720: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x15b720u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x15b724: 0x8d230024  lw          $v1, 0x24($t1)
    ctx->pc = 0x15b724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x15b728: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x15b728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15b72c: 0xad230024  sw          $v1, 0x24($t1)
    ctx->pc = 0x15b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 3));
    // 0x15b730: 0x8d23003c  lw          $v1, 0x3C($t1)
    ctx->pc = 0x15b730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x15b734: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15b734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15b738: 0x3e00008  jr          $ra
    ctx->pc = 0x15B738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B738u;
            // 0x15b73c: 0xad23003c  sw          $v1, 0x3C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B740u;
}
