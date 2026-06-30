#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002543D0
// Address: 0x2543d0 - 0x254520
void sub_002543D0_0x2543d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002543D0_0x2543d0");
#endif

    switch (ctx->pc) {
        case 0x254410u: goto label_254410;
        case 0x2544b0u: goto label_2544b0;
        case 0x2544f8u: goto label_2544f8;
        default: break;
    }

    ctx->pc = 0x2543d0u;

    // 0x2543d0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2543d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2543d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2543d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2543d8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2543d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2543dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2543dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2543e0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2543e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2543e4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2543e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2543e8: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x2543e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2543ec: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x2543ECu;
    {
        const bool branch_taken_0x2543ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2543ec) {
            ctx->pc = 0x2544D0u;
            goto label_2544d0;
        }
    }
    ctx->pc = 0x2543F4u;
    // 0x2543f4: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2543f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2543f8: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x2543f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2543fc: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x2543fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x254400: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x254400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x254404: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x254404u;
    {
        const bool branch_taken_0x254404 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x254408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254404u;
            // 0x254408: 0x2467ffe0  addiu       $a3, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254404) {
            ctx->pc = 0x2544A0u;
            goto label_2544a0;
        }
    }
    ctx->pc = 0x25440Cu;
    // 0x25440c: 0x0  nop
    ctx->pc = 0x25440cu;
    // NOP
label_254410:
    // 0x254410: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x254410u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x254414: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x254414u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x254418: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x254418u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x25441c: 0xa4a60002  sh          $a2, 0x2($a1)
    ctx->pc = 0x25441cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x254420: 0x94a60008  lhu         $a2, 0x8($a1)
    ctx->pc = 0x254420u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x254424: 0xa4a60004  sh          $a2, 0x4($a1)
    ctx->pc = 0x254424u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x254428: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x254428u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x25442c: 0xa4a60006  sh          $a2, 0x6($a1)
    ctx->pc = 0x25442cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x254430: 0x94a6000c  lhu         $a2, 0xC($a1)
    ctx->pc = 0x254430u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x254434: 0xa4a60008  sh          $a2, 0x8($a1)
    ctx->pc = 0x254434u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x254438: 0x94a6000e  lhu         $a2, 0xE($a1)
    ctx->pc = 0x254438u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x25443c: 0xa4a6000a  sh          $a2, 0xA($a1)
    ctx->pc = 0x25443cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x254440: 0x94a60010  lhu         $a2, 0x10($a1)
    ctx->pc = 0x254440u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x254444: 0xa4a6000c  sh          $a2, 0xC($a1)
    ctx->pc = 0x254444u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x254448: 0x94a60012  lhu         $a2, 0x12($a1)
    ctx->pc = 0x254448u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x25444c: 0xa4a6000e  sh          $a2, 0xE($a1)
    ctx->pc = 0x25444cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x254450: 0x94a60014  lhu         $a2, 0x14($a1)
    ctx->pc = 0x254450u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x254454: 0xa4a60010  sh          $a2, 0x10($a1)
    ctx->pc = 0x254454u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x254458: 0x94a60016  lhu         $a2, 0x16($a1)
    ctx->pc = 0x254458u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x25445c: 0xa4a60012  sh          $a2, 0x12($a1)
    ctx->pc = 0x25445cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 6));
    // 0x254460: 0x94a60018  lhu         $a2, 0x18($a1)
    ctx->pc = 0x254460u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x254464: 0xa4a60014  sh          $a2, 0x14($a1)
    ctx->pc = 0x254464u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 6));
    // 0x254468: 0x94a6001a  lhu         $a2, 0x1A($a1)
    ctx->pc = 0x254468u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x25446c: 0xa4a60016  sh          $a2, 0x16($a1)
    ctx->pc = 0x25446cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 6));
    // 0x254470: 0x94a6001c  lhu         $a2, 0x1C($a1)
    ctx->pc = 0x254470u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x254474: 0xa4a60018  sh          $a2, 0x18($a1)
    ctx->pc = 0x254474u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 6));
    // 0x254478: 0x94a6001e  lhu         $a2, 0x1E($a1)
    ctx->pc = 0x254478u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x25447c: 0xa4a6001a  sh          $a2, 0x1A($a1)
    ctx->pc = 0x25447cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 6));
    // 0x254480: 0x94a60020  lhu         $a2, 0x20($a1)
    ctx->pc = 0x254480u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x254484: 0xa4a6001c  sh          $a2, 0x1C($a1)
    ctx->pc = 0x254484u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x254488: 0x94a60022  lhu         $a2, 0x22($a1)
    ctx->pc = 0x254488u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x25448c: 0xa4a6001e  sh          $a2, 0x1E($a1)
    ctx->pc = 0x25448cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 6));
    // 0x254490: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x254490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x254494: 0xa7302b  sltu        $a2, $a1, $a3
    ctx->pc = 0x254494u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x254498: 0x14c0ffdd  bnez        $a2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x254498u;
    {
        const bool branch_taken_0x254498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x254498) {
            ctx->pc = 0x254410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254410;
        }
    }
    ctx->pc = 0x2544A0u;
label_2544a0:
    // 0x2544a0: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x2544a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2544a4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2544A4u;
    {
        const bool branch_taken_0x2544a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2544a4) {
            ctx->pc = 0x2544D0u;
            goto label_2544d0;
        }
    }
    ctx->pc = 0x2544ACu;
    // 0x2544ac: 0x0  nop
    ctx->pc = 0x2544acu;
    // NOP
label_2544b0:
    // 0x2544b0: 0x94a60004  lhu         $a2, 0x4($a1)
    ctx->pc = 0x2544b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2544b4: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x2544b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2544b8: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x2544b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2544bc: 0xa4a60002  sh          $a2, 0x2($a1)
    ctx->pc = 0x2544bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x2544c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2544c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2544c4: 0xa3302b  sltu        $a2, $a1, $v1
    ctx->pc = 0x2544c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2544c8: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2544C8u;
    {
        const bool branch_taken_0x2544c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2544c8) {
            ctx->pc = 0x2544B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2544b0;
        }
    }
    ctx->pc = 0x2544D0u;
label_2544d0:
    // 0x2544d0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2544d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2544d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2544d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2544d8: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x2544d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x2544dc: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2544dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2544e0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2544e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2544e4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2544e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2544e8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x2544e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2544ec: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2544ECu;
    {
        const bool branch_taken_0x2544ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2544ec) {
            ctx->pc = 0x254518u;
            goto label_254518;
        }
    }
    ctx->pc = 0x2544F4u;
    // 0x2544f4: 0x0  nop
    ctx->pc = 0x2544f4u;
    // NOP
label_2544f8:
    // 0x2544f8: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x2544f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2544fc: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2544fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x254500: 0x94a3000a  lhu         $v1, 0xA($a1)
    ctx->pc = 0x254500u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x254504: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x254504u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x254508: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x254508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x25450c: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x25450cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x254510: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x254510u;
    {
        const bool branch_taken_0x254510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254510) {
            ctx->pc = 0x2544F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2544f8;
        }
    }
    ctx->pc = 0x254518u;
label_254518:
    // 0x254518: 0x3e00008  jr          $ra
    ctx->pc = 0x254518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254520u;
}
