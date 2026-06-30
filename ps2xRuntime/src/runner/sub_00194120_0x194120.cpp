#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194120
// Address: 0x194120 - 0x1941e8
void sub_00194120_0x194120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194120_0x194120");
#endif

    switch (ctx->pc) {
        case 0x19414cu: goto label_19414c;
        default: break;
    }

    ctx->pc = 0x194120u;

    // 0x194120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x194124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19412c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x194130: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194134: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x194134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x194138: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x194138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19413c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x194140: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194144: 0xc06599a  jal         func_196668
    ctx->pc = 0x194144u;
    SET_GPR_U32(ctx, 31, 0x19414Cu);
    ctx->pc = 0x194148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194144u;
            // 0x194148: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19414Cu; }
        if (ctx->pc != 0x19414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19414Cu; }
        if (ctx->pc != 0x19414Cu) { return; }
    }
    ctx->pc = 0x19414Cu;
label_19414c:
    // 0x19414c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x19414cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x194150: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x194150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x194154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x194154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194158: 0x34a5020f  ori         $a1, $a1, 0x20F
    ctx->pc = 0x194158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)527);
    // 0x19415c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19415Cu;
    {
        const bool branch_taken_0x19415c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19415Cu;
            // 0x194160: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19415c) {
            ctx->pc = 0x194180u;
            goto label_194180;
        }
    }
    ctx->pc = 0x194164u;
    // 0x194164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x194164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x194168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19416c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19416cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194170: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x194170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x194174: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194178: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x194178u;
    ctx->pc = 0x19417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194178u;
            // 0x19417c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x194180u;
label_194180:
    // 0x194180: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x194180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x194184: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x194184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x194188: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x194188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x19418c: 0x8e0302dc  lw          $v1, 0x2DC($s0)
    ctx->pc = 0x19418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x194190: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x194190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x194194: 0x8e0402c8  lw          $a0, 0x2C8($s0)
    ctx->pc = 0x194194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x194198: 0x54860003  bnel        $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x194198u;
    {
        const bool branch_taken_0x194198 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x194198) {
            ctx->pc = 0x19419Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194198u;
            // 0x19419c: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1941A8u;
            goto label_1941a8;
        }
    }
    ctx->pc = 0x1941A0u;
    // 0x1941a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1941A0u;
    {
        const bool branch_taken_0x1941a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1941A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941A0u;
            // 0x1941a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941a0) {
            ctx->pc = 0x1941C0u;
            goto label_1941c0;
        }
    }
    ctx->pc = 0x1941A8u;
label_1941a8:
    // 0x1941a8: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x1941a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x1941ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1941ACu;
    {
        const bool branch_taken_0x1941ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1941ac) {
            ctx->pc = 0x1941B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1941ACu;
            // 0x1941b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1941B4u;
            goto label_1941b4;
        }
    }
    ctx->pc = 0x1941B4u;
label_1941b4:
    // 0x1941b4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1941b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1941b8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1941b8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1941bc: 0x1012  mflo        $v0
    ctx->pc = 0x1941bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1941c0:
    // 0x1941c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1941c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1941c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1941c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1941c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1941c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1941ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1941d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1941d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1941d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1941d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1941d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1941d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1941dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1941DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1941E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1941DCu;
            // 0x1941e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1941E4u;
    // 0x1941e4: 0x0  nop
    ctx->pc = 0x1941e4u;
    // NOP
}
