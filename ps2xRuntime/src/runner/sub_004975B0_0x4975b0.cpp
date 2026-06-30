#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004975B0
// Address: 0x4975b0 - 0x4977a0
void sub_004975B0_0x4975b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004975B0_0x4975b0");
#endif

    switch (ctx->pc) {
        case 0x497674u: goto label_497674;
        case 0x497754u: goto label_497754;
        default: break;
    }

    ctx->pc = 0x4975b0u;

    // 0x4975b0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x4975b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4975b4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x4975b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x4975b8: 0x3448aaab  ori         $t0, $v0, 0xAAAB
    ctx->pc = 0x4975b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x4975bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4975bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4975c0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4975c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4975c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4975c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4975c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4975c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4975cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4975ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4975d0: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x4975d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4975d4: 0x1020018  mult        $zero, $t0, $v0
    ctx->pc = 0x4975d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4975d8: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x4975d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4975dc: 0x0  nop
    ctx->pc = 0x4975dcu;
    // NOP
    // 0x4975e0: 0x1010  mfhi        $v0
    ctx->pc = 0x4975e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x4975e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4975e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4975e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4975e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4975ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4975ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4975f0: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x4975F0u;
    {
        const bool branch_taken_0x4975f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4975f0) {
            ctx->pc = 0x497780u;
            goto label_497780;
        }
    }
    ctx->pc = 0x4975F8u;
    // 0x4975f8: 0x24a7000c  addiu       $a3, $a1, 0xC
    ctx->pc = 0x4975f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x4975fc: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x4975fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x497600: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
    ctx->pc = 0x497600u;
    {
        const bool branch_taken_0x497600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x497604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497600u;
            // 0x497604: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497600) {
            ctx->pc = 0x497780u;
            goto label_497780;
        }
    }
    ctx->pc = 0x497608u;
    // 0x497608: 0x675823  subu        $t3, $v1, $a3
    ctx->pc = 0x497608u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49760c: 0x256a000b  addiu       $t2, $t3, 0xB
    ctx->pc = 0x49760cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 11));
    // 0x497610: 0x10a0018  mult        $zero, $t0, $t2
    ctx->pc = 0x497610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x497614: 0xa4fc2  srl         $t1, $t2, 31
    ctx->pc = 0x497614u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x497618: 0x0  nop
    ctx->pc = 0x497618u;
    // NOP
    // 0x49761c: 0x4010  mfhi        $t0
    ctx->pc = 0x49761cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x497620: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x497620u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x497624: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x497624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x497628: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x497628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x49762c: 0x14200046  bnez        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x49762Cu;
    {
        const bool branch_taken_0x49762c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x497630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49762Cu;
            // 0x497630: 0x2462ffa0  addiu       $v0, $v1, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49762c) {
            ctx->pc = 0x497748u;
            goto label_497748;
        }
    }
    ctx->pc = 0x497634u;
    // 0x497634: 0x67082b  sltu        $at, $v1, $a3
    ctx->pc = 0x497634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x497638: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x497638u;
    {
        const bool branch_taken_0x497638 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x49763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497638u;
            // 0x49763c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497638) {
            ctx->pc = 0x49766Cu;
            goto label_49766c;
        }
    }
    ctx->pc = 0x497640u;
    // 0x497640: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x497640u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x497644: 0x1694024  and         $t0, $t3, $t1
    ctx->pc = 0x497644u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x497648: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x497648u;
    {
        const bool branch_taken_0x497648 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x49764Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497648u;
            // 0x49764c: 0x640c0001  daddiu      $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x497648) {
            ctx->pc = 0x497660u;
            goto label_497660;
        }
    }
    ctx->pc = 0x497650u;
    // 0x497650: 0x1494024  and         $t0, $t2, $t1
    ctx->pc = 0x497650u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x497654: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x497654u;
    {
        const bool branch_taken_0x497654 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x497654) {
            ctx->pc = 0x497660u;
            goto label_497660;
        }
    }
    ctx->pc = 0x49765Cu;
    // 0x49765c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x49765cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497660:
    // 0x497660: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x497660u;
    {
        const bool branch_taken_0x497660 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x497660) {
            ctx->pc = 0x49766Cu;
            goto label_49766c;
        }
    }
    ctx->pc = 0x497668u;
    // 0x497668: 0x640d0001  daddiu      $t5, $zero, 0x1
    ctx->pc = 0x497668u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_49766c:
    // 0x49766c: 0x11a00036  beqz        $t5, . + 4 + (0x36 << 2)
    ctx->pc = 0x49766Cu;
    {
        const bool branch_taken_0x49766c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x49766c) {
            ctx->pc = 0x497748u;
            goto label_497748;
        }
    }
    ctx->pc = 0x497674u;
label_497674:
    // 0x497674: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x497674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x497678: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x497678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x49767c: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x49767cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x497680: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x497680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x497684: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x497684u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x497688: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x497688u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x49768c: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x49768cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x497690: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x497690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x497694: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x497694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x497698: 0xacc80010  sw          $t0, 0x10($a2)
    ctx->pc = 0x497698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 8));
    // 0x49769c: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x49769cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4976a0: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x4976a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
    // 0x4976a4: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x4976a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4976a8: 0xacc80018  sw          $t0, 0x18($a2)
    ctx->pc = 0x4976a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 8));
    // 0x4976ac: 0x8ce8001c  lw          $t0, 0x1C($a3)
    ctx->pc = 0x4976acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x4976b0: 0xacc8001c  sw          $t0, 0x1C($a2)
    ctx->pc = 0x4976b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 8));
    // 0x4976b4: 0x8ce80020  lw          $t0, 0x20($a3)
    ctx->pc = 0x4976b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x4976b8: 0xacc80020  sw          $t0, 0x20($a2)
    ctx->pc = 0x4976b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 8));
    // 0x4976bc: 0x8ce80024  lw          $t0, 0x24($a3)
    ctx->pc = 0x4976bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4976c0: 0xacc80024  sw          $t0, 0x24($a2)
    ctx->pc = 0x4976c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 8));
    // 0x4976c4: 0x8ce80028  lw          $t0, 0x28($a3)
    ctx->pc = 0x4976c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x4976c8: 0xacc80028  sw          $t0, 0x28($a2)
    ctx->pc = 0x4976c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 8));
    // 0x4976cc: 0x8ce8002c  lw          $t0, 0x2C($a3)
    ctx->pc = 0x4976ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x4976d0: 0xacc8002c  sw          $t0, 0x2C($a2)
    ctx->pc = 0x4976d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 8));
    // 0x4976d4: 0x8ce80030  lw          $t0, 0x30($a3)
    ctx->pc = 0x4976d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x4976d8: 0xacc80030  sw          $t0, 0x30($a2)
    ctx->pc = 0x4976d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 8));
    // 0x4976dc: 0x8ce80034  lw          $t0, 0x34($a3)
    ctx->pc = 0x4976dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x4976e0: 0xacc80034  sw          $t0, 0x34($a2)
    ctx->pc = 0x4976e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 8));
    // 0x4976e4: 0x8ce80038  lw          $t0, 0x38($a3)
    ctx->pc = 0x4976e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x4976e8: 0xacc80038  sw          $t0, 0x38($a2)
    ctx->pc = 0x4976e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 8));
    // 0x4976ec: 0x8ce8003c  lw          $t0, 0x3C($a3)
    ctx->pc = 0x4976ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x4976f0: 0xacc8003c  sw          $t0, 0x3C($a2)
    ctx->pc = 0x4976f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 8));
    // 0x4976f4: 0x8ce80040  lw          $t0, 0x40($a3)
    ctx->pc = 0x4976f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x4976f8: 0xacc80040  sw          $t0, 0x40($a2)
    ctx->pc = 0x4976f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 8));
    // 0x4976fc: 0x8ce80044  lw          $t0, 0x44($a3)
    ctx->pc = 0x4976fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x497700: 0xacc80044  sw          $t0, 0x44($a2)
    ctx->pc = 0x497700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 8));
    // 0x497704: 0x8ce80048  lw          $t0, 0x48($a3)
    ctx->pc = 0x497704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x497708: 0xacc80048  sw          $t0, 0x48($a2)
    ctx->pc = 0x497708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 8));
    // 0x49770c: 0x8ce8004c  lw          $t0, 0x4C($a3)
    ctx->pc = 0x49770cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x497710: 0xacc8004c  sw          $t0, 0x4C($a2)
    ctx->pc = 0x497710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 8));
    // 0x497714: 0x8ce80050  lw          $t0, 0x50($a3)
    ctx->pc = 0x497714u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x497718: 0xacc80050  sw          $t0, 0x50($a2)
    ctx->pc = 0x497718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 8));
    // 0x49771c: 0x8ce80054  lw          $t0, 0x54($a3)
    ctx->pc = 0x49771cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x497720: 0xacc80054  sw          $t0, 0x54($a2)
    ctx->pc = 0x497720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 8));
    // 0x497724: 0x8ce80058  lw          $t0, 0x58($a3)
    ctx->pc = 0x497724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x497728: 0xacc80058  sw          $t0, 0x58($a2)
    ctx->pc = 0x497728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 8));
    // 0x49772c: 0x8ce8005c  lw          $t0, 0x5C($a3)
    ctx->pc = 0x49772cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x497730: 0xacc8005c  sw          $t0, 0x5C($a2)
    ctx->pc = 0x497730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 8));
    // 0x497734: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x497734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x497738: 0xe2402b  sltu        $t0, $a3, $v0
    ctx->pc = 0x497738u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49773c: 0x1500ffcd  bnez        $t0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x49773Cu;
    {
        const bool branch_taken_0x49773c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x497740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49773Cu;
            // 0x497740: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49773c) {
            ctx->pc = 0x497674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497674;
        }
    }
    ctx->pc = 0x497744u;
    // 0x497744: 0x0  nop
    ctx->pc = 0x497744u;
    // NOP
label_497748:
    // 0x497748: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x497748u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49774c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x49774Cu;
    {
        const bool branch_taken_0x49774c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49774c) {
            ctx->pc = 0x497780u;
            goto label_497780;
        }
    }
    ctx->pc = 0x497754u;
label_497754:
    // 0x497754: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x497754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x497758: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x497758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x49775c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x49775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x497760: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x497760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x497764: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x497764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x497768: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x497768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x49776c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x49776cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x497770: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x497770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x497774: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x497774u;
    {
        const bool branch_taken_0x497774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497774u;
            // 0x497778: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497774) {
            ctx->pc = 0x497754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_497754;
        }
    }
    ctx->pc = 0x49777Cu;
    // 0x49777c: 0x0  nop
    ctx->pc = 0x49777cu;
    // NOP
label_497780:
    // 0x497780: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x497780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x497784: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x497784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497788: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x497788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x49778c: 0x3e00008  jr          $ra
    ctx->pc = 0x49778Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49778Cu;
            // 0x497790: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x497794u;
    // 0x497794: 0x0  nop
    ctx->pc = 0x497794u;
    // NOP
    // 0x497798: 0x0  nop
    ctx->pc = 0x497798u;
    // NOP
    // 0x49779c: 0x0  nop
    ctx->pc = 0x49779cu;
    // NOP
}
