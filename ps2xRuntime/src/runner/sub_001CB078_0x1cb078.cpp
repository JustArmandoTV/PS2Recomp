#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB078
// Address: 0x1cb078 - 0x1cb348
void sub_001CB078_0x1cb078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB078_0x1cb078");
#endif

    switch (ctx->pc) {
        case 0x1cb0f4u: goto label_1cb0f4;
        case 0x1cb188u: goto label_1cb188;
        case 0x1cb190u: goto label_1cb190;
        case 0x1cb198u: goto label_1cb198;
        case 0x1cb1ecu: goto label_1cb1ec;
        case 0x1cb214u: goto label_1cb214;
        case 0x1cb2ecu: goto label_1cb2ec;
        case 0x1cb2f4u: goto label_1cb2f4;
        default: break;
    }

    ctx->pc = 0x1cb078u;

    // 0x1cb078: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cb078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cb07c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cb07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1cb080: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cb080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb084: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cb084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cb088: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb08c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1cb08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1cb090: 0x11a080  sll         $s4, $s1, 2
    ctx->pc = 0x1cb090u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1cb094: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1cb094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1cb098: 0x26950bb0  addiu       $s5, $s4, 0xBB0
    ctx->pc = 0x1cb098u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 2992));
    // 0x1cb09c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1cb09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1cb0a0: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1cb0a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x1cb0a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cb0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cb0a8: 0x26d2a70c  addiu       $s2, $s6, -0x58F4
    ctx->pc = 0x1cb0a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944524));
    // 0x1cb0ac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1cb0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1cb0b0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1cb0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1cb0b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cb0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1cb0b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1cb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cb0bc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1cb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1cb0c0: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x1cb0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1cb0c4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1cb0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb0c8: 0x56040094  bnel        $s0, $a0, . + 4 + (0x94 << 2)
    ctx->pc = 0x1CB0C8u;
    {
        const bool branch_taken_0x1cb0c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cb0c8) {
            ctx->pc = 0x1CB0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0C8u;
            // 0x1cb0cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB31Cu;
            goto label_1cb31c;
        }
    }
    ctx->pc = 0x1CB0D0u;
    // 0x1cb0d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1cb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1cb0d4: 0x8c430c70  lw          $v1, 0xC70($v0)
    ctx->pc = 0x1cb0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3184)));
    // 0x1cb0d8: 0x54600090  bnel        $v1, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x1CB0D8u;
    {
        const bool branch_taken_0x1cb0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb0d8) {
            ctx->pc = 0x1CB0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0D8u;
            // 0x1cb0dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB31Cu;
            goto label_1cb31c;
        }
    }
    ctx->pc = 0x1CB0E0u;
    // 0x1cb0e0: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x1cb0e0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x1cb0e4: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x1cb0e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1cb0e8: 0x8ee6a704  lw          $a2, -0x58FC($s7)
    ctx->pc = 0x1cb0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944516)));
    // 0x1cb0ec: 0xc046262  jal         func_118988
    ctx->pc = 0x1CB0ECu;
    SET_GPR_U32(ctx, 31, 0x1CB0F4u);
    ctx->pc = 0x1CB0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0ECu;
            // 0x1cb0f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0F4u; }
        if (ctx->pc != 0x1CB0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0F4u; }
        if (ctx->pc != 0x1CB0F4u) { return; }
    }
    ctx->pc = 0x1CB0F4u;
label_1cb0f4:
    // 0x1cb0f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cb0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cb0f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0fc: 0x14900086  bne         $a0, $s0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1CB0FCu;
    {
        const bool branch_taken_0x1cb0fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CB100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB0FCu;
            // 0x1cb100: 0xac640ac4  sw          $a0, 0xAC4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2756), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0fc) {
            ctx->pc = 0x1CB318u;
            goto label_1cb318;
        }
    }
    ctx->pc = 0x1CB104u;
    // 0x1cb104: 0x119840  sll         $s3, $s1, 1
    ctx->pc = 0x1cb104u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1cb108: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1cb108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1cb10c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb110: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cb110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cb114: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1cb114u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb118: 0x24c80eb0  addiu       $t0, $a2, 0xEB0
    ctx->pc = 0x1cb118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 3760));
    // 0x1cb11c: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x1cb11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1cb120: 0x90b0000e  lbu         $s0, 0xE($a1)
    ctx->pc = 0x1cb120u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x1cb124: 0x1604006a  bne         $s0, $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1CB124u;
    {
        const bool branch_taken_0x1cb124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CB128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB124u;
            // 0x1cb128: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb124) {
            ctx->pc = 0x1CB2D0u;
            goto label_1cb2d0;
        }
    }
    ctx->pc = 0x1CB12Cu;
    // 0x1cb12c: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x1cb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1cb130: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1cb130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cb134: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x1cb134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cb138: 0x8c630edc  lw          $v1, 0xEDC($v1)
    ctx->pc = 0x1cb138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3804)));
    // 0x1cb13c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb140: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1cb140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cb144: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB144u;
    {
        const bool branch_taken_0x1cb144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb144) {
            ctx->pc = 0x1CB148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB144u;
            // 0x1cb148: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB14Cu;
            goto label_1cb14c;
        }
    }
    ctx->pc = 0x1CB14Cu;
label_1cb14c:
    // 0x1cb14c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1cb14cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cb150: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cb150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cb154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb158: 0x24e2000c  addiu       $v0, $a3, 0xC
    ctx->pc = 0x1cb158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1cb15c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1cb15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1cb160: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x1cb160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cb164: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1cb164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb168: 0x8d060ec0  lw          $a2, 0xEC0($t0)
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3776)));
    // 0x1cb16c: 0x8c430ee0  lw          $v1, 0xEE0($v0)
    ctx->pc = 0x1cb16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3808)));
    // 0x1cb170: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1cb170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1cb174: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1cb174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1cb178: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1cb178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1cb17c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1cb17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1cb180: 0xc043ca2  jal         func_10F288
    ctx->pc = 0x1CB180u;
    SET_GPR_U32(ctx, 31, 0x1CB188u);
    ctx->pc = 0x1CB184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB180u;
            // 0x1cb184: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F288u;
    if (runtime->hasFunction(0x10F288u)) {
        auto targetFn = runtime->lookupFunction(0x10F288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB188u; }
        if (ctx->pc != 0x1CB188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F288_0x10f288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB188u; }
        if (ctx->pc != 0x1CB188u) { return; }
    }
    ctx->pc = 0x1CB188u;
label_1cb188:
    // 0x1cb188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb18c: 0x0  nop
    ctx->pc = 0x1cb18cu;
    // NOP
label_1cb190:
    // 0x1cb190: 0xc0431c0  jal         func_10C700
    ctx->pc = 0x1CB190u;
    SET_GPR_U32(ctx, 31, 0x1CB198u);
    ctx->pc = 0x1CB194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB190u;
            // 0x1cb194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C700u;
    if (runtime->hasFunction(0x10C700u)) {
        auto targetFn = runtime->lookupFunction(0x10C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB198u; }
        if (ctx->pc != 0x1CB198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C700_0x10c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB198u; }
        if (ctx->pc != 0x1CB198u) { return; }
    }
    ctx->pc = 0x1CB198u;
label_1cb198:
    // 0x1cb198: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1CB198u;
    {
        const bool branch_taken_0x1cb198 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CB19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB198u;
            // 0x1cb19c: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb198) {
            ctx->pc = 0x1CB190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cb190;
        }
    }
    ctx->pc = 0x1CB1A0u;
    // 0x1cb1a0: 0x26d5a70c  addiu       $s5, $s6, -0x58F4
    ctx->pc = 0x1cb1a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944524));
    // 0x1cb1a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb1a8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1cb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1cb1ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cb1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cb1b0: 0x8ee6a704  lw          $a2, -0x58FC($s7)
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944516)));
    // 0x1cb1b4: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1cb1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb1b8: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x1cb1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1cb1bc: 0x26320ec0  addiu       $s2, $s1, 0xEC0
    ctx->pc = 0x1cb1bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 3776));
    // 0x1cb1c0: 0x26330eb0  addiu       $s3, $s1, 0xEB0
    ctx->pc = 0x1cb1c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3760));
    // 0x1cb1c4: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1cb1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1cb1c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1cb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1cb1cc: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1cb1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1cb1d0: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x1cb1d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb1d4: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x1cb1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb1d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb1dc: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x1cb1dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb1e0: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x1cb1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x1cb1e4: 0xc046262  jal         func_118988
    ctx->pc = 0x1CB1E4u;
    SET_GPR_U32(ctx, 31, 0x1CB1ECu);
    ctx->pc = 0x1CB1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1E4u;
            // 0x1cb1e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1ECu; }
        if (ctx->pc != 0x1CB1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1ECu; }
        if (ctx->pc != 0x1CB1ECu) { return; }
    }
    ctx->pc = 0x1CB1ECu;
label_1cb1ec:
    // 0x1cb1ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1f0: 0x603001f  bgezl       $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CB1F0u;
    {
        const bool branch_taken_0x1cb1f0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1cb1f0) {
            ctx->pc = 0x1CB1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB1F0u;
            // 0x1cb1f4: 0x8eaa0000  lw          $t2, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB270u;
            goto label_1cb270;
        }
    }
    ctx->pc = 0x1CB1F8u;
    // 0x1cb1f8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1cb1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1cb1fc: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x1cb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1cb200: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x1cb200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x1cb204: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB204u;
    {
        const bool branch_taken_0x1cb204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB204u;
            // 0x1cb208: 0x921021  addu        $v0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb204) {
            ctx->pc = 0x1CB218u;
            goto label_1cb218;
        }
    }
    ctx->pc = 0x1CB20Cu;
    // 0x1cb20c: 0xc045262  jal         func_114988
    ctx->pc = 0x1CB20Cu;
    SET_GPR_U32(ctx, 31, 0x1CB214u);
    ctx->pc = 0x1CB210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB20Cu;
            // 0x1cb210: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB214u; }
        if (ctx->pc != 0x1CB214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB214u; }
        if (ctx->pc != 0x1CB214u) { return; }
    }
    ctx->pc = 0x1CB214u;
label_1cb214:
    // 0x1cb214: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1cb214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1cb218:
    // 0x1cb218: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x1cb218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x1cb21c: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB21Cu;
    {
        const bool branch_taken_0x1cb21c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb21c) {
            ctx->pc = 0x1CB220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB21Cu;
            // 0x1cb220: 0x2402ff37  addiu       $v0, $zero, -0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967095));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB230u;
            goto label_1cb230;
        }
    }
    ctx->pc = 0x1CB224u;
    // 0x1cb224: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x1cb224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1cb228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB228u;
    {
        const bool branch_taken_0x1cb228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB228u;
            // 0x1cb22c: 0x2402fff2  addiu       $v0, $zero, -0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb228) {
            ctx->pc = 0x1CB244u;
            goto label_1cb244;
        }
    }
    ctx->pc = 0x1CB230u;
label_1cb230:
    // 0x1cb230: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB230u;
    {
        const bool branch_taken_0x1cb230 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB230u;
            // 0x1cb234: 0x2841821  addu        $v1, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb230) {
            ctx->pc = 0x1CB240u;
            goto label_1cb240;
        }
    }
    ctx->pc = 0x1CB238u;
    // 0x1cb238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB238u;
    {
        const bool branch_taken_0x1cb238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB238u;
            // 0x1cb23c: 0x2402fff1  addiu       $v0, $zero, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb238) {
            ctx->pc = 0x1CB244u;
            goto label_1cb244;
        }
    }
    ctx->pc = 0x1CB240u;
label_1cb240:
    // 0x1cb240: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1cb240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1cb244:
    // 0x1cb244: 0xac620d3c  sw          $v0, 0xD3C($v1)
    ctx->pc = 0x1cb244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3388), GPR_U32(ctx, 2));
    // 0x1cb248: 0x8ec2a70c  lw          $v0, -0x58F4($s6)
    ctx->pc = 0x1cb248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944524)));
    // 0x1cb24c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cb24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb250: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1cb250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cb254: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1cb254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1cb258: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1cb258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1cb25c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cb25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb260: 0xac440bb0  sw          $a0, 0xBB0($v0)
    ctx->pc = 0x1cb260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2992), GPR_U32(ctx, 4));
    // 0x1cb264: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1CB264u;
    {
        const bool branch_taken_0x1cb264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB264u;
            // 0x1cb268: 0xac650df0  sw          $a1, 0xDF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3568), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb264) {
            ctx->pc = 0x1CB318u;
            goto label_1cb318;
        }
    }
    ctx->pc = 0x1CB26Cu;
    // 0x1cb26c: 0x0  nop
    ctx->pc = 0x1cb26cu;
    // NOP
label_1cb270:
    // 0x1cb270: 0x26270ed0  addiu       $a3, $s1, 0xED0
    ctx->pc = 0x1cb270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 3792));
    // 0x1cb274: 0x26290ee0  addiu       $t1, $s1, 0xEE0
    ctx->pc = 0x1cb274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 3808));
    // 0x1cb278: 0x25440014  addiu       $a0, $t2, 0x14
    ctx->pc = 0x1cb278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x1cb27c: 0x2546000c  addiu       $a2, $t2, 0xC
    ctx->pc = 0x1cb27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x1cb280: 0x924021  addu        $t0, $a0, $s2
    ctx->pc = 0x1cb280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1cb284: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1cb284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1cb288: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cb288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb28c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1cb28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1cb290: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1cb290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cb294: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1cb294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1cb298: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1cb298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cb29c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cb2a0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1cb2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1cb2a4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cb2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb2a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1cb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cb2ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cb2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cb2b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1cb2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cb2b4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1cb2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1cb2b8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CB2B8u;
    {
        const bool branch_taken_0x1cb2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2B8u;
            // 0x1cb2bc: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2b8) {
            ctx->pc = 0x1CB318u;
            goto label_1cb318;
        }
    }
    ctx->pc = 0x1CB2C0u;
    // 0x1cb2c0: 0x1531821  addu        $v1, $t2, $s3
    ctx->pc = 0x1cb2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 19)));
    // 0x1cb2c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cb2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb2c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CB2C8u;
    {
        const bool branch_taken_0x1cb2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2C8u;
            // 0x1cb2cc: 0xa062000e  sb          $v0, 0xE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2c8) {
            ctx->pc = 0x1CB318u;
            goto label_1cb318;
        }
    }
    ctx->pc = 0x1CB2D0u;
label_1cb2d0:
    // 0x1cb2d0: 0x56020012  bnel        $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB2D0u;
    {
        const bool branch_taken_0x1cb2d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb2d0) {
            ctx->pc = 0x1CB2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2D0u;
            // 0x1cb2d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB31Cu;
            goto label_1cb31c;
        }
    }
    ctx->pc = 0x1CB2D8u;
    // 0x1cb2d8: 0x90a2000d  lbu         $v0, 0xD($a1)
    ctx->pc = 0x1cb2d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13)));
    // 0x1cb2dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB2DCu;
    {
        const bool branch_taken_0x1cb2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2DCu;
            // 0x1cb2e0: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2dc) {
            ctx->pc = 0x1CB2ECu;
            goto label_1cb2ec;
        }
    }
    ctx->pc = 0x1CB2E4u;
    // 0x1cb2e4: 0xc045262  jal         func_114988
    ctx->pc = 0x1CB2E4u;
    SET_GPR_U32(ctx, 31, 0x1CB2ECu);
    ctx->pc = 0x1CB2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2E4u;
            // 0x1cb2e8: 0x8c440ecc  lw          $a0, 0xECC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3788)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2ECu; }
        if (ctx->pc != 0x1CB2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2ECu; }
        if (ctx->pc != 0x1CB2ECu) { return; }
    }
    ctx->pc = 0x1CB2ECu;
label_1cb2ec:
    // 0x1cb2ec: 0xc0726d0  jal         func_1C9B40
    ctx->pc = 0x1CB2ECu;
    SET_GPR_U32(ctx, 31, 0x1CB2F4u);
    ctx->pc = 0x1CB2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2ECu;
            // 0x1cb2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9B40u;
    if (runtime->hasFunction(0x1C9B40u)) {
        auto targetFn = runtime->lookupFunction(0x1C9B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2F4u; }
        if (ctx->pc != 0x1CB2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9B40_0x1c9b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2F4u; }
        if (ctx->pc != 0x1CB2F4u) { return; }
    }
    ctx->pc = 0x1CB2F4u;
label_1cb2f4:
    // 0x1cb2f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cb2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cb2f8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1cb2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cb2fc: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1cb2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1cb300: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x1cb300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1cb304: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x1cb304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1cb308: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1cb308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb30c: 0xac620d30  sw          $v0, 0xD30($v1)
    ctx->pc = 0x1cb30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3376), GPR_U32(ctx, 2));
    // 0x1cb310: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1cb310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1cb314: 0xaca60df0  sw          $a2, 0xDF0($a1)
    ctx->pc = 0x1cb314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3568), GPR_U32(ctx, 6));
label_1cb318:
    // 0x1cb318: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cb318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb31c:
    // 0x1cb31c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cb31cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb320: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cb320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb324: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1cb324u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cb328: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1cb328u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb32c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1cb32cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cb330: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1cb330u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb334: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1cb334u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cb338: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cb338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cb33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB33Cu;
            // 0x1cb340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB344u;
    // 0x1cb344: 0x0  nop
    ctx->pc = 0x1cb344u;
    // NOP
}
