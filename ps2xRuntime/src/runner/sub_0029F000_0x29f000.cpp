#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029F000
// Address: 0x29f000 - 0x29f160
void sub_0029F000_0x29f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F000_0x29f000");
#endif

    switch (ctx->pc) {
        case 0x29f024u: goto label_29f024;
        case 0x29f058u: goto label_29f058;
        case 0x29f08cu: goto label_29f08c;
        case 0x29f0c0u: goto label_29f0c0;
        default: break;
    }

    ctx->pc = 0x29f000u;

    // 0x29f000: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x29f000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29f004: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F004u;
    {
        const bool branch_taken_0x29f004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f004) {
            ctx->pc = 0x29F008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F004u;
            // 0x29f008: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F01Cu;
            goto label_29f01c;
        }
    }
    ctx->pc = 0x29F00Cu;
    // 0x29f00c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x29f00cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f010: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x29f010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f014: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x29f014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f018: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f01c:
    // 0x29f01c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x29f01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f020: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x29f020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29f024:
    // 0x29f024: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x29f024u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x29f028: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x29f028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x29f02c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x29f02cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29f030: 0x4e00003  bltz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F030u;
    {
        const bool branch_taken_0x29f030 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x29f030) {
            ctx->pc = 0x29F040u;
            goto label_29f040;
        }
    }
    ctx->pc = 0x29F038u;
    // 0x29f038: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x29F038u;
    {
        const bool branch_taken_0x29f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F038u;
            // 0x29f03c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f038) {
            ctx->pc = 0x29F024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f024;
        }
    }
    ctx->pc = 0x29F040u;
label_29f040:
    // 0x29f040: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x29f040u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29f044: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x29f044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x29f048: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x29f048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29f04c: 0x4e0000e  bltz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x29F04Cu;
    {
        const bool branch_taken_0x29f04c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x29f04c) {
            ctx->pc = 0x29F088u;
            goto label_29f088;
        }
    }
    ctx->pc = 0x29F054u;
    // 0x29f054: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29f058:
    // 0x29f058: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29f058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29f05c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29f060: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x29f060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f064: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x29f064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x29f068: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x29f068u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29f06c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f070: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x29f070u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f074: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x29f074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x29f078: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x29f078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29f07c: 0x4e3fff6  bgezl       $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x29F07Cu;
    {
        const bool branch_taken_0x29f07c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x29f07c) {
            ctx->pc = 0x29F080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F07Cu;
            // 0x29f080: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f058;
        }
    }
    ctx->pc = 0x29F084u;
    // 0x29f084: 0x0  nop
    ctx->pc = 0x29f084u;
    // NOP
label_29f088:
    // 0x29f088: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x29f088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29f08c:
    // 0x29f08c: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x29f08cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x29f090: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x29f090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x29f094: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x29f094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29f098: 0x4e00003  bltz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F098u;
    {
        const bool branch_taken_0x29f098 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x29f098) {
            ctx->pc = 0x29F0A8u;
            goto label_29f0a8;
        }
    }
    ctx->pc = 0x29F0A0u;
    // 0x29f0a0: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x29F0A0u;
    {
        const bool branch_taken_0x29f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F0A0u;
            // 0x29f0a4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f0a0) {
            ctx->pc = 0x29F08Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f08c;
        }
    }
    ctx->pc = 0x29F0A8u;
label_29f0a8:
    // 0x29f0a8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x29f0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29f0ac: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x29f0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x29f0b0: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x29f0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29f0b4: 0x4e0000e  bltz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x29F0B4u;
    {
        const bool branch_taken_0x29f0b4 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x29f0b4) {
            ctx->pc = 0x29F0F0u;
            goto label_29f0f0;
        }
    }
    ctx->pc = 0x29F0BCu;
    // 0x29f0bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29f0c0:
    // 0x29f0c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x29f0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29f0c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x29f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29f0c8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x29f0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f0cc: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x29f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x29f0d0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x29f0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29f0d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f0d8: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x29f0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f0dc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x29f0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x29f0e0: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x29f0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29f0e4: 0x4e3fff6  bgezl       $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x29F0E4u;
    {
        const bool branch_taken_0x29f0e4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x29f0e4) {
            ctx->pc = 0x29F0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F0E4u;
            // 0x29f0e8: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F0C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f0c0;
        }
    }
    ctx->pc = 0x29F0ECu;
    // 0x29f0ec: 0x0  nop
    ctx->pc = 0x29f0ecu;
    // NOP
label_29f0f0:
    // 0x29f0f0: 0x10a60017  beq         $a1, $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x29F0F0u;
    {
        const bool branch_taken_0x29f0f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x29f0f0) {
            ctx->pc = 0x29F150u;
            goto label_29f150;
        }
    }
    ctx->pc = 0x29F0F8u;
    // 0x29f0f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f0fc: 0x55880  sll         $t3, $a1, 2
    ctx->pc = 0x29f0fcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29f100: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x29f100u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29f104: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x29f104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x29f108: 0x6b5021  addu        $t2, $v1, $t3
    ctx->pc = 0x29f108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29f10c: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x29f10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29f110: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x29f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29f114: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x29F114u;
    {
        const bool branch_taken_0x29f114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F114u;
            // 0x29f118: 0x8d490000  lw          $t1, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f114) {
            ctx->pc = 0x29F138u;
            goto label_29f138;
        }
    }
    ctx->pc = 0x29F11Cu;
    // 0x29f11c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x29f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x29f120: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x29f120u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x29f124: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29f124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f128: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f12c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29f130: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29F130u;
    {
        const bool branch_taken_0x29f130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F130u;
            // 0x29f134: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f130) {
            ctx->pc = 0x29F150u;
            goto label_29f150;
        }
    }
    ctx->pc = 0x29F138u;
label_29f138:
    // 0x29f138: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29f13c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x29f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x29f140: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29f140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f144: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f148: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x29f148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x29f14c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x29f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_29f150:
    // 0x29f150: 0x3e00008  jr          $ra
    ctx->pc = 0x29F150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F158u;
    // 0x29f158: 0x0  nop
    ctx->pc = 0x29f158u;
    // NOP
    // 0x29f15c: 0x0  nop
    ctx->pc = 0x29f15cu;
    // NOP
}
