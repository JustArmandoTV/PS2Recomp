#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001041D0
// Address: 0x1041d0 - 0x104358
void sub_001041D0_0x1041d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001041D0_0x1041d0");
#endif

    switch (ctx->pc) {
        case 0x104264u: goto label_104264;
        case 0x104268u: goto label_104268;
        default: break;
    }

    ctx->pc = 0x1041d0u;

    // 0x1041d0: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x1041d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x1041d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1041d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1041d8: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1041D8u;
    {
        const bool branch_taken_0x1041d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1041d8) {
            ctx->pc = 0x1042F0u;
            goto label_1042f0;
        }
    }
    ctx->pc = 0x1041E0u;
    // 0x1041e0: 0x8c820188  lw          $v0, 0x188($a0)
    ctx->pc = 0x1041e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x1041e4: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1041E4u;
    {
        const bool branch_taken_0x1041e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1041e4) {
            ctx->pc = 0x1041E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1041E4u;
            // 0x1041e8: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104278u;
            goto label_104278;
        }
    }
    ctx->pc = 0x1041ECu;
    // 0x1041ec: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1041ECu;
    {
        const bool branch_taken_0x1041ec = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1041F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1041ECu;
            // 0x1041f0: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041ec) {
            ctx->pc = 0x104200u;
            goto label_104200;
        }
    }
    ctx->pc = 0x1041F4u;
    // 0x1041f4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1041f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1041f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1041F8u;
    {
        const bool branch_taken_0x1041f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1041F8u;
            // 0x1041fc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041f8) {
            ctx->pc = 0x104204u;
            goto label_104204;
        }
    }
    ctx->pc = 0x104200u;
label_104200:
    // 0x104200: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x104200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_104204:
    // 0x104204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104208: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x104208u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10420c: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10420Cu;
    {
        const bool branch_taken_0x10420c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x104210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10420Cu;
            // 0x104210: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10420c) {
            ctx->pc = 0x104220u;
            goto label_104220;
        }
    }
    ctx->pc = 0x104214u;
    // 0x104214: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x104214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x104218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104218u;
    {
        const bool branch_taken_0x104218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104218u;
            // 0x10421c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104218) {
            ctx->pc = 0x104224u;
            goto label_104224;
        }
    }
    ctx->pc = 0x104220u;
label_104220:
    // 0x104220: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x104220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_104224:
    // 0x104224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104228: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x104228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10422c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10422cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x104230: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x104230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x104234: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x104234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x104238: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x104238u;
    {
        const bool branch_taken_0x104238 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x10423Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104238u;
            // 0x10423c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104238) {
            ctx->pc = 0x104244u;
            goto label_104244;
        }
    }
    ctx->pc = 0x104240u;
    // 0x104240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_104244:
    // 0x104244: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104244u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10424c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x10424cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x104250: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x104250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x104254: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x104254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x104258: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104258u;
    {
        const bool branch_taken_0x104258 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x10425Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104258u;
            // 0x10425c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104258) {
            ctx->pc = 0x104264u;
            goto label_104264;
        }
    }
    ctx->pc = 0x104260u;
    // 0x104260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_104264:
    // 0x104264: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104264u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_104268:
    // 0x104268: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x104268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10426c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x104270: 0x3e00008  jr          $ra
    ctx->pc = 0x104270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104270u;
            // 0x104274: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104278u;
label_104278:
    // 0x104278: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x104278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10427c: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x10427Cu;
    {
        const bool branch_taken_0x10427c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x104280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10427Cu;
            // 0x104280: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10427c) {
            ctx->pc = 0x104288u;
            goto label_104288;
        }
    }
    ctx->pc = 0x104284u;
    // 0x104284: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_104288:
    // 0x104288: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10428c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104290: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x104290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x104294: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x104294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x104298: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x104298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10429c: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10429Cu;
    {
        const bool branch_taken_0x10429c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1042A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10429Cu;
            // 0x1042a0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10429c) {
            ctx->pc = 0x1042A8u;
            goto label_1042a8;
        }
    }
    ctx->pc = 0x1042A4u;
    // 0x1042a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1042a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1042a8:
    // 0x1042a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1042a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1042ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1042acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1042b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1042b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1042b4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1042b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1042b8: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1042B8u;
    {
        const bool branch_taken_0x1042b8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1042BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1042B8u;
            // 0x1042bc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042b8) {
            ctx->pc = 0x1042CCu;
            goto label_1042cc;
        }
    }
    ctx->pc = 0x1042C0u;
    // 0x1042c0: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1042c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1042c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1042C4u;
    {
        const bool branch_taken_0x1042c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1042C4u;
            // 0x1042c8: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042c4) {
            ctx->pc = 0x1042D0u;
            goto label_1042d0;
        }
    }
    ctx->pc = 0x1042CCu;
label_1042cc:
    // 0x1042cc: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x1042ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_1042d0:
    // 0x1042d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1042d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1042d4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1042d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1042d8: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1042D8u;
    {
        const bool branch_taken_0x1042d8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1042DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1042D8u;
            // 0x1042dc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042d8) {
            ctx->pc = 0x1042E8u;
            goto label_1042e8;
        }
    }
    ctx->pc = 0x1042E0u;
    // 0x1042e0: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1042E0u;
    {
        const bool branch_taken_0x1042e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1042E0u;
            // 0x1042e4: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042e0) {
            ctx->pc = 0x104264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_104264;
        }
    }
    ctx->pc = 0x1042E8u;
label_1042e8:
    // 0x1042e8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1042E8u;
    {
        const bool branch_taken_0x1042e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1042E8u;
            // 0x1042ec: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042e8) {
            ctx->pc = 0x104268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_104268;
        }
    }
    ctx->pc = 0x1042F0u;
label_1042f0:
    // 0x1042f0: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1042F0u;
    {
        const bool branch_taken_0x1042f0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1042F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1042F0u;
            // 0x1042f4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042f0) {
            ctx->pc = 0x104304u;
            goto label_104304;
        }
    }
    ctx->pc = 0x1042F8u;
    // 0x1042f8: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1042f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1042fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1042FCu;
    {
        const bool branch_taken_0x1042fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1042FCu;
            // 0x104300: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042fc) {
            ctx->pc = 0x104308u;
            goto label_104308;
        }
    }
    ctx->pc = 0x104304u;
label_104304:
    // 0x104304: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x104304u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_104308:
    // 0x104308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10430c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10430cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x104310: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104310u;
    {
        const bool branch_taken_0x104310 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x104314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104310u;
            // 0x104314: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104310) {
            ctx->pc = 0x104324u;
            goto label_104324;
        }
    }
    ctx->pc = 0x104318u;
    // 0x104318: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x104318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10431c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10431Cu;
    {
        const bool branch_taken_0x10431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10431Cu;
            // 0x104320: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10431c) {
            ctx->pc = 0x104328u;
            goto label_104328;
        }
    }
    ctx->pc = 0x104324u;
label_104324:
    // 0x104324: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x104324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_104328:
    // 0x104328: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x104328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10432c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x10432cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x104330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x104330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104334: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x104334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x104338: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x104338u;
    {
        const bool branch_taken_0x104338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104338u;
            // 0x10433c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104338) {
            ctx->pc = 0x10434Cu;
            goto label_10434c;
        }
    }
    ctx->pc = 0x104340u;
    // 0x104340: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x104340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x104344: 0x3e00008  jr          $ra
    ctx->pc = 0x104344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104344u;
            // 0x104348: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10434Cu;
label_10434c:
    // 0x10434c: 0x3e00008  jr          $ra
    ctx->pc = 0x10434Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10434Cu;
            // 0x104350: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104354u;
    // 0x104354: 0x0  nop
    ctx->pc = 0x104354u;
    // NOP
}
