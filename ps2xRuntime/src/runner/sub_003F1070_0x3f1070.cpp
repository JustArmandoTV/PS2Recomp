#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F1070
// Address: 0x3f1070 - 0x3f11b0
void sub_003F1070_0x3f1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1070_0x3f1070");
#endif

    switch (ctx->pc) {
        case 0x3f10ccu: goto label_3f10cc;
        case 0x3f10e8u: goto label_3f10e8;
        case 0x3f1148u: goto label_3f1148;
        default: break;
    }

    ctx->pc = 0x3f1070u;

    // 0x3f1070: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f1070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3f1074: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3f1074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3f1078: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f1078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3f107c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3f1080: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3f1080u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1084: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f1084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f1088: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3f1088u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f108c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f1090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f1090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f1094: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f1094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f1098: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x3f1098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3f109c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3f109cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3f10a0: 0x38a40001  xori        $a0, $a1, 0x1
    ctx->pc = 0x3f10a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x3f10a4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3f10a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3f10a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3f10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3f10ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f10acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f10b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f10b4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3f10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3f10b8: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x3f10b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3f10bc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3f10c0: 0x1860002f  blez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3F10C0u;
    {
        const bool branch_taken_0x3f10c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F10C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F10C0u;
            // 0x3f10c4: 0x2a49021  addu        $s2, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f10c0) {
            ctx->pc = 0x3F1180u;
            goto label_3f1180;
        }
    }
    ctx->pc = 0x3F10C8u;
    // 0x3f10c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f10c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f10cc:
    // 0x3f10cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3f10d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f10d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f10d4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3f10d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3f10d8: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x3F10D8u;
    {
        const bool branch_taken_0x3f10d8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3F10DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F10D8u;
            // 0x3f10dc: 0x738021  addu        $s0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f10d8) {
            ctx->pc = 0x3F1110u;
            goto label_3f1110;
        }
    }
    ctx->pc = 0x3F10E0u;
    // 0x3f10e0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3f10e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3f10e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f10e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f10e8:
    // 0x3f10e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3f10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f10ec: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F10ECu;
    {
        const bool branch_taken_0x3f10ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3f10ec) {
            ctx->pc = 0x3F1100u;
            goto label_3f1100;
        }
    }
    ctx->pc = 0x3F10F4u;
    // 0x3f10f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F10F4u;
    {
        const bool branch_taken_0x3f10f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f10f4) {
            ctx->pc = 0x3F1118u;
            goto label_3f1118;
        }
    }
    ctx->pc = 0x3F10FCu;
    // 0x3f10fc: 0x0  nop
    ctx->pc = 0x3f10fcu;
    // NOP
label_3f1100:
    // 0x3f1100: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3f1100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3f1104: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x3f1104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3f1108: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3F1108u;
    {
        const bool branch_taken_0x3f1108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F110Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1108u;
            // 0x3f110c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1108) {
            ctx->pc = 0x3F10E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f10e8;
        }
    }
    ctx->pc = 0x3F1110u;
label_3f1110:
    // 0x3f1110: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3f1110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f1114: 0x0  nop
    ctx->pc = 0x3f1114u;
    // NOP
label_3f1118:
    // 0x3f1118: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f1118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f111c: 0x14e30012  bne         $a3, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3F111Cu;
    {
        const bool branch_taken_0x3f111c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f111c) {
            ctx->pc = 0x3F1168u;
            goto label_3f1168;
        }
    }
    ctx->pc = 0x3F1124u;
    // 0x3f1124: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x3f1124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x3f1128: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x3f1128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x3f112c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3f112cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x3f1130: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x3f1130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x3f1134: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F1134u;
    {
        const bool branch_taken_0x3f1134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f1134) {
            ctx->pc = 0x3F1148u;
            goto label_3f1148;
        }
    }
    ctx->pc = 0x3F113Cu;
    // 0x3f113c: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x3f113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    // 0x3f1140: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x3F1140u;
    SET_GPR_U32(ctx, 31, 0x3F1148u);
    ctx->pc = 0x3F1144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1140u;
            // 0x3f1144: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1148u; }
        if (ctx->pc != 0x3F1148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1148u; }
        if (ctx->pc != 0x3F1148u) { return; }
    }
    ctx->pc = 0x3F1148u;
label_3f1148:
    // 0x3f1148: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x3f1148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x3f114c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3f114cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f1150: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3f1150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f1154: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x3f1154u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
    // 0x3f1158: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3f1158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3f115c: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x3f115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x3f1160: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f1160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f1164: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3f1164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3f1168:
    // 0x3f1168: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f1168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3f116c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3f116cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3f1170: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x3f1170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f1174: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3F1174u;
    {
        const bool branch_taken_0x3f1174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1174u;
            // 0x3f1178: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1174) {
            ctx->pc = 0x3F10CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f10cc;
        }
    }
    ctx->pc = 0x3F117Cu;
    // 0x3f117c: 0x0  nop
    ctx->pc = 0x3f117cu;
    // NOP
label_3f1180:
    // 0x3f1180: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3f1180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f1184: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f1184u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f1188: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f1188u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f118c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f118cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f1190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f1194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f1194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f119c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F119Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F11A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F119Cu;
            // 0x3f11a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F11A4u;
    // 0x3f11a4: 0x0  nop
    ctx->pc = 0x3f11a4u;
    // NOP
    // 0x3f11a8: 0x0  nop
    ctx->pc = 0x3f11a8u;
    // NOP
    // 0x3f11ac: 0x0  nop
    ctx->pc = 0x3f11acu;
    // NOP
}
