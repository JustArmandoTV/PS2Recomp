#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012F5C8
// Address: 0x12f5c8 - 0x12f758
void sub_0012F5C8_0x12f5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F5C8_0x12f5c8");
#endif

    switch (ctx->pc) {
        case 0x12f5e4u: goto label_12f5e4;
        case 0x12f604u: goto label_12f604;
        case 0x12f644u: goto label_12f644;
        case 0x12f660u: goto label_12f660;
        case 0x12f6e4u: goto label_12f6e4;
        default: break;
    }

    ctx->pc = 0x12f5c8u;

    // 0x12f5c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f5cc: 0x4a1002e  bgez        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x12F5CCu;
    {
        const bool branch_taken_0x12f5cc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x12F5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5CCu;
            // 0x12f5d0: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5cc) {
            ctx->pc = 0x12F688u;
            goto label_12f688;
        }
    }
    ctx->pc = 0x12F5D4u;
    // 0x12f5d4: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12f5d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12f5d8: 0x52823  negu        $a1, $a1
    ctx->pc = 0x12f5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x12f5dc: 0xa08f0001  sb          $t7, 0x1($a0)
    ctx->pc = 0x12f5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 15));
    // 0x12f5e0: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x12f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_12f5e4:
    // 0x12f5e4: 0x27ad0028  addiu       $t5, $sp, 0x28
    ctx->pc = 0x12f5e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x12f5e8: 0x28af000a  slti        $t7, $a1, 0xA
    ctx->pc = 0x12f5e8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12f5ec: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x12F5ECu;
    {
        const bool branch_taken_0x12f5ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5ECu;
            // 0x12f5f0: 0x1a0502d  daddu       $t2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5ec) {
            ctx->pc = 0x12F66Cu;
            goto label_12f66c;
        }
    }
    ctx->pc = 0x12F5F4u;
    // 0x12f5f4: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x12f5f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5f8: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x12f5f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12f5fc: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x12f5fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12f600: 0xad001a  div         $zero, $a1, $t5
    ctx->pc = 0x12f600u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_12f604:
    // 0x12f604: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12f604u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12f608: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F608u;
    {
        const bool branch_taken_0x12f608 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f608) {
            ctx->pc = 0x12F60Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F608u;
            // 0x12f60c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F610u;
            goto label_12f610;
        }
    }
    ctx->pc = 0x12F610u;
label_12f610:
    // 0x12f610: 0x7810  mfhi        $t7
    ctx->pc = 0x12f610u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x12f614: 0x7012  mflo        $t6
    ctx->pc = 0x12f614u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x12f618: 0x25ef0030  addiu       $t7, $t7, 0x30
    ctx->pc = 0x12f618u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 48));
    // 0x12f61c: 0x2812  mflo        $a1
    ctx->pc = 0x12f61cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x12f620: 0xa18f0000  sb          $t7, 0x0($t4)
    ctx->pc = 0x12f620u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12f624: 0x29ce000a  slti        $t6, $t6, 0xA
    ctx->pc = 0x12f624u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12f628: 0x51c0fff6  beql        $t6, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x12F628u;
    {
        const bool branch_taken_0x12f628 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f628) {
            ctx->pc = 0x12F62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F628u;
            // 0x12f62c: 0xad001a  div         $zero, $a1, $t5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f604;
        }
    }
    ctx->pc = 0x12F630u;
    // 0x12f630: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x12f630u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12f634: 0x24ae0030  addiu       $t6, $a1, 0x30
    ctx->pc = 0x12f634u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f638: 0x1aa782b  sltu        $t7, $t5, $t2
    ctx->pc = 0x12f638u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12f63c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F63Cu;
    {
        const bool branch_taken_0x12f63c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F63Cu;
            // 0x12f640: 0xa1ae0000  sb          $t6, 0x0($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f63c) {
            ctx->pc = 0x12F660u;
            goto label_12f660;
        }
    }
    ctx->pc = 0x12F644u;
label_12f644:
    // 0x12f644: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12f644u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x12f648: 0xa04f0000  sb          $t7, 0x0($v0)
    ctx->pc = 0x12f648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12f64c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12f64cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12f650: 0x1aa782b  sltu        $t7, $t5, $t2
    ctx->pc = 0x12f650u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12f654: 0x0  nop
    ctx->pc = 0x12f654u;
    // NOP
    // 0x12f658: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F658u;
    {
        const bool branch_taken_0x12f658 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F658u;
            // 0x12f65c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f658) {
            ctx->pc = 0x12F644u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f644;
        }
    }
    ctx->pc = 0x12F660u;
label_12f660:
    // 0x12f660: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x12f660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12f664: 0x3e00008  jr          $ra
    ctx->pc = 0x12F664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F664u;
            // 0x12f668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F66Cu;
label_12f66c:
    // 0x12f66c: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12f66cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12f670: 0x24ae0030  addiu       $t6, $a1, 0x30
    ctx->pc = 0x12f670u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12f674: 0xa04f0000  sb          $t7, 0x0($v0)
    ctx->pc = 0x12f674u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12f678: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f67c: 0xa04e0000  sb          $t6, 0x0($v0)
    ctx->pc = 0x12f67cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x12f680: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12F680u;
    {
        const bool branch_taken_0x12f680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F680u;
            // 0x12f684: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f680) {
            ctx->pc = 0x12F660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f660;
        }
    }
    ctx->pc = 0x12F688u;
label_12f688:
    // 0x12f688: 0x240f002b  addiu       $t7, $zero, 0x2B
    ctx->pc = 0x12f688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12f68c: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x12f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x12f690: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x12F690u;
    {
        const bool branch_taken_0x12f690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F690u;
            // 0x12f694: 0xa08f0001  sb          $t7, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f690) {
            ctx->pc = 0x12F5E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f5e4;
        }
    }
    ctx->pc = 0x12F698u;
    // 0x12f698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f69c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f6a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12f6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12f6a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12f6a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12f6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12f6b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12f6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6b4: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12f6b8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F6B8u;
    {
        const bool branch_taken_0x12f6b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6B8u;
            // 0x12f6bc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6b8) {
            ctx->pc = 0x12F6D0u;
            goto label_12f6d0;
        }
    }
    ctx->pc = 0x12F6C0u;
    // 0x12f6c0: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12f6c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12f6c4: 0x8dee1ad8  lw          $t6, 0x1AD8($t7)
    ctx->pc = 0x12f6c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12f6c8: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x12f6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
    // 0x12f6cc: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x12f6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12f6d0:
    // 0x12f6d0: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x12f6d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x12f6d4: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F6D4u;
    {
        const bool branch_taken_0x12f6d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f6d4) {
            ctx->pc = 0x12F6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6D4u;
            // 0x12f6d8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F6E8u;
            goto label_12f6e8;
        }
    }
    ctx->pc = 0x12F6DCu;
    // 0x12f6dc: 0xc049e72  jal         func_1279C8
    ctx->pc = 0x12F6DCu;
    SET_GPR_U32(ctx, 31, 0x12F6E4u);
    ctx->pc = 0x1279C8u;
    if (runtime->hasFunction(0x1279C8u)) {
        auto targetFn = runtime->lookupFunction(0x1279C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6E4u; }
        if (ctx->pc != 0x12F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001279C8_0x1279c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6E4u; }
        if (ctx->pc != 0x12F6E4u) { return; }
    }
    ctx->pc = 0x12F6E4u;
label_12f6e4:
    // 0x12f6e4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_12f6e8:
    // 0x12f6e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12f6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12f6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12f6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12f6f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12f6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f6fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12f6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f700: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12f700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f704: 0x804bdd6  j           func_12F758
    ctx->pc = 0x12F704u;
    ctx->pc = 0x12F708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F704u;
            // 0x12f708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F758u;
    if (runtime->hasFunction(0x12F758u)) {
        auto targetFn = runtime->lookupFunction(0x12F758u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012F758_0x12f758(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12F70Cu;
    // 0x12f70c: 0x0  nop
    ctx->pc = 0x12f70cu;
    // NOP
    // 0x12f710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f714: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x12f714u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f71c: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12f71cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12f720: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12f720u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f724: 0x8de41ad8  lw          $a0, 0x1AD8($t7)
    ctx->pc = 0x12f724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12f728: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12f728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f72c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f730: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x12f730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f734: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x12f734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f738: 0x804bdd6  j           func_12F758
    ctx->pc = 0x12F738u;
    ctx->pc = 0x12F73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F738u;
            // 0x12f73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F758u;
    if (runtime->hasFunction(0x12F758u)) {
        auto targetFn = runtime->lookupFunction(0x12F758u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012F758_0x12f758(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12F740u;
    // 0x12f740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f74c: 0x804bdd6  j           func_12F758
    ctx->pc = 0x12F74Cu;
    ctx->pc = 0x12F750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F74Cu;
            // 0x12f750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F758u;
    if (runtime->hasFunction(0x12F758u)) {
        auto targetFn = runtime->lookupFunction(0x12F758u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012F758_0x12f758(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12F754u;
    // 0x12f754: 0x0  nop
    ctx->pc = 0x12f754u;
    // NOP
}
