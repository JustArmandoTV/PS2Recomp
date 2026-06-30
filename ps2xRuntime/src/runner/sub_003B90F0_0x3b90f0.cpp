#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B90F0
// Address: 0x3b90f0 - 0x3b9220
void sub_003B90F0_0x3b90f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B90F0_0x3b90f0");
#endif

    switch (ctx->pc) {
        case 0x3b90f0u: goto label_3b90f0;
        case 0x3b90f4u: goto label_3b90f4;
        case 0x3b90f8u: goto label_3b90f8;
        case 0x3b90fcu: goto label_3b90fc;
        case 0x3b9100u: goto label_3b9100;
        case 0x3b9104u: goto label_3b9104;
        case 0x3b9108u: goto label_3b9108;
        case 0x3b910cu: goto label_3b910c;
        case 0x3b9110u: goto label_3b9110;
        case 0x3b9114u: goto label_3b9114;
        case 0x3b9118u: goto label_3b9118;
        case 0x3b911cu: goto label_3b911c;
        case 0x3b9120u: goto label_3b9120;
        case 0x3b9124u: goto label_3b9124;
        case 0x3b9128u: goto label_3b9128;
        case 0x3b912cu: goto label_3b912c;
        case 0x3b9130u: goto label_3b9130;
        case 0x3b9134u: goto label_3b9134;
        case 0x3b9138u: goto label_3b9138;
        case 0x3b913cu: goto label_3b913c;
        case 0x3b9140u: goto label_3b9140;
        case 0x3b9144u: goto label_3b9144;
        case 0x3b9148u: goto label_3b9148;
        case 0x3b914cu: goto label_3b914c;
        case 0x3b9150u: goto label_3b9150;
        case 0x3b9154u: goto label_3b9154;
        case 0x3b9158u: goto label_3b9158;
        case 0x3b915cu: goto label_3b915c;
        case 0x3b9160u: goto label_3b9160;
        case 0x3b9164u: goto label_3b9164;
        case 0x3b9168u: goto label_3b9168;
        case 0x3b916cu: goto label_3b916c;
        case 0x3b9170u: goto label_3b9170;
        case 0x3b9174u: goto label_3b9174;
        case 0x3b9178u: goto label_3b9178;
        case 0x3b917cu: goto label_3b917c;
        case 0x3b9180u: goto label_3b9180;
        case 0x3b9184u: goto label_3b9184;
        case 0x3b9188u: goto label_3b9188;
        case 0x3b918cu: goto label_3b918c;
        case 0x3b9190u: goto label_3b9190;
        case 0x3b9194u: goto label_3b9194;
        case 0x3b9198u: goto label_3b9198;
        case 0x3b919cu: goto label_3b919c;
        case 0x3b91a0u: goto label_3b91a0;
        case 0x3b91a4u: goto label_3b91a4;
        case 0x3b91a8u: goto label_3b91a8;
        case 0x3b91acu: goto label_3b91ac;
        case 0x3b91b0u: goto label_3b91b0;
        case 0x3b91b4u: goto label_3b91b4;
        case 0x3b91b8u: goto label_3b91b8;
        case 0x3b91bcu: goto label_3b91bc;
        case 0x3b91c0u: goto label_3b91c0;
        case 0x3b91c4u: goto label_3b91c4;
        case 0x3b91c8u: goto label_3b91c8;
        case 0x3b91ccu: goto label_3b91cc;
        case 0x3b91d0u: goto label_3b91d0;
        case 0x3b91d4u: goto label_3b91d4;
        case 0x3b91d8u: goto label_3b91d8;
        case 0x3b91dcu: goto label_3b91dc;
        case 0x3b91e0u: goto label_3b91e0;
        case 0x3b91e4u: goto label_3b91e4;
        case 0x3b91e8u: goto label_3b91e8;
        case 0x3b91ecu: goto label_3b91ec;
        case 0x3b91f0u: goto label_3b91f0;
        case 0x3b91f4u: goto label_3b91f4;
        case 0x3b91f8u: goto label_3b91f8;
        case 0x3b91fcu: goto label_3b91fc;
        case 0x3b9200u: goto label_3b9200;
        case 0x3b9204u: goto label_3b9204;
        case 0x3b9208u: goto label_3b9208;
        case 0x3b920cu: goto label_3b920c;
        case 0x3b9210u: goto label_3b9210;
        case 0x3b9214u: goto label_3b9214;
        case 0x3b9218u: goto label_3b9218;
        case 0x3b921cu: goto label_3b921c;
        default: break;
    }

    ctx->pc = 0x3b90f0u;

label_3b90f0:
    // 0x3b90f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b90f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b90f4:
    // 0x3b90f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b90f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3b90f8:
    // 0x3b90f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3b90f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3b90fc:
    // 0x3b90fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3b90fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3b9100:
    // 0x3b9100: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x3b9100u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3b9104:
    // 0x3b9104: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3b9104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3b9108:
    // 0x3b9108: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3b9108u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3b910c:
    // 0x3b910c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3b9110:
    // 0x3b9110: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3b9110u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b9114:
    // 0x3b9114: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b9114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3b9118:
    // 0x3b9118: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b9118u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b911c:
    // 0x3b911c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b9120:
    // 0x3b9120: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b9120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b9124:
    // 0x3b9124: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b9124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b9128:
    // 0x3b9128: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b9128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b912c:
    // 0x3b912c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b9130:
    // 0x3b9130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b9134:
    // 0x3b9134: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x3b9134u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
label_3b9138:
    // 0x3b9138: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x3b9138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3b913c:
    // 0x3b913c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3b913cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b9140:
    // 0x3b9140: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3b9140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b9144:
    // 0x3b9144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b9144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3b9148:
    // 0x3b9148: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b9148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b914c:
    // 0x3b914c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b914cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b9150:
    // 0x3b9150: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_3b9154:
    if (ctx->pc == 0x3B9154u) {
        ctx->pc = 0x3B9154u;
            // 0x3b9154: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B9158u;
        goto label_3b9158;
    }
    ctx->pc = 0x3B9150u;
    {
        const bool branch_taken_0x3b9150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9150u;
            // 0x3b9154: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9150) {
            ctx->pc = 0x3B91E4u;
            goto label_3b91e4;
        }
    }
    ctx->pc = 0x3B9158u;
label_3b9158:
    // 0x3b9158: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x3b9158u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3b915c:
    // 0x3b915c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3b9160:
    if (ctx->pc == 0x3B9160u) {
        ctx->pc = 0x3B9160u;
            // 0x3b9160: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B9164u;
        goto label_3b9164;
    }
    ctx->pc = 0x3B915Cu;
    {
        const bool branch_taken_0x3b915c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B915Cu;
            // 0x3b9160: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b915c) {
            ctx->pc = 0x3B9188u;
            goto label_3b9188;
        }
    }
    ctx->pc = 0x3B9164u;
label_3b9164:
    // 0x3b9164: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3b9164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b9168:
    // 0x3b9168: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3b9168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3b916c:
    // 0x3b916c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b916cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b9170:
    // 0x3b9170: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3b9170u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3b9174:
    // 0x3b9174: 0x0  nop
    ctx->pc = 0x3b9174u;
    // NOP
label_3b9178:
    // 0x3b9178: 0x0  nop
    ctx->pc = 0x3b9178u;
    // NOP
label_3b917c:
    // 0x3b917c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3b9180:
    if (ctx->pc == 0x3B9180u) {
        ctx->pc = 0x3B9184u;
        goto label_3b9184;
    }
    ctx->pc = 0x3B917Cu;
    {
        const bool branch_taken_0x3b917c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b917c) {
            ctx->pc = 0x3B9168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b9168;
        }
    }
    ctx->pc = 0x3B9184u;
label_3b9184:
    // 0x3b9184: 0x0  nop
    ctx->pc = 0x3b9184u;
    // NOP
label_3b9188:
    // 0x3b9188: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3b9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b918c:
    // 0x3b918c: 0xc040138  jal         func_1004E0
label_3b9190:
    if (ctx->pc == 0x3B9190u) {
        ctx->pc = 0x3B9190u;
            // 0x3b9190: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x3B9194u;
        goto label_3b9194;
    }
    ctx->pc = 0x3B918Cu;
    SET_GPR_U32(ctx, 31, 0x3B9194u);
    ctx->pc = 0x3B9190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B918Cu;
            // 0x3b9190: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9194u; }
        if (ctx->pc != 0x3B9194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9194u; }
        if (ctx->pc != 0x3B9194u) { return; }
    }
    ctx->pc = 0x3B9194u;
label_3b9194:
    // 0x3b9194: 0x8ea60010  lw          $a2, 0x10($s5)
    ctx->pc = 0x3b9194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3b9198:
    // 0x3b9198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b9198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b919c:
    // 0x3b919c: 0x26280001  addiu       $t0, $s1, 0x1
    ctx->pc = 0x3b919cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b91a0:
    // 0x3b91a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b91a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b91a4:
    // 0x3b91a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b91a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b91a8:
    // 0x3b91a8: 0xc0ee488  jal         func_3B9220
label_3b91ac:
    if (ctx->pc == 0x3B91ACu) {
        ctx->pc = 0x3B91ACu;
            // 0x3b91ac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B91B0u;
        goto label_3b91b0;
    }
    ctx->pc = 0x3B91A8u;
    SET_GPR_U32(ctx, 31, 0x3B91B0u);
    ctx->pc = 0x3B91ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B91A8u;
            // 0x3b91ac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9220u;
    if (runtime->hasFunction(0x3B9220u)) {
        auto targetFn = runtime->lookupFunction(0x3B9220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B91B0u; }
        if (ctx->pc != 0x3B91B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9220_0x3b9220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B91B0u; }
        if (ctx->pc != 0x3B91B0u) { return; }
    }
    ctx->pc = 0x3B91B0u;
label_3b91b0:
    // 0x3b91b0: 0x8eb90048  lw          $t9, 0x48($s5)
    ctx->pc = 0x3b91b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3b91b4:
    // 0x3b91b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b91b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b91b8:
    // 0x3b91b8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3b91b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b91bc:
    // 0x3b91bc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3b91bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b91c0:
    // 0x3b91c0: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x3b91c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b91c4:
    // 0x3b91c4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3b91c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b91c8:
    // 0x3b91c8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3b91c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3b91cc:
    // 0x3b91cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b91ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b91d0:
    // 0x3b91d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b91d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b91d4:
    // 0x3b91d4: 0x320f809  jalr        $t9
label_3b91d8:
    if (ctx->pc == 0x3B91D8u) {
        ctx->pc = 0x3B91D8u;
            // 0x3b91d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B91DCu;
        goto label_3b91dc;
    }
    ctx->pc = 0x3B91D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B91DCu);
        ctx->pc = 0x3B91D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B91D4u;
            // 0x3b91d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B91DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B91DCu; }
            if (ctx->pc != 0x3B91DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3B91DCu;
label_3b91dc:
    // 0x3b91dc: 0xc04008c  jal         func_100230
label_3b91e0:
    if (ctx->pc == 0x3B91E0u) {
        ctx->pc = 0x3B91E0u;
            // 0x3b91e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B91E4u;
        goto label_3b91e4;
    }
    ctx->pc = 0x3B91DCu;
    SET_GPR_U32(ctx, 31, 0x3B91E4u);
    ctx->pc = 0x3B91E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B91DCu;
            // 0x3b91e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B91E4u; }
        if (ctx->pc != 0x3B91E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B91E4u; }
        if (ctx->pc != 0x3B91E4u) { return; }
    }
    ctx->pc = 0x3B91E4u;
label_3b91e4:
    // 0x3b91e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b91e8:
    // 0x3b91e8: 0xa2a3002c  sb          $v1, 0x2C($s5)
    ctx->pc = 0x3b91e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 44), (uint8_t)GPR_U32(ctx, 3));
label_3b91ec:
    // 0x3b91ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b91ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3b91f0:
    // 0x3b91f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3b91f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b91f4:
    // 0x3b91f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3b91f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b91f8:
    // 0x3b91f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3b91f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b91fc:
    // 0x3b91fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b91fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b9200:
    // 0x3b9200: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b9200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b9204:
    // 0x3b9204: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b9204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b9208:
    // 0x3b9208: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b9208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b920c:
    // 0x3b920c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b920cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b9210:
    // 0x3b9210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9214:
    // 0x3b9214: 0x3e00008  jr          $ra
label_3b9218:
    if (ctx->pc == 0x3B9218u) {
        ctx->pc = 0x3B9218u;
            // 0x3b9218: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3B921Cu;
        goto label_3b921c;
    }
    ctx->pc = 0x3B9214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9214u;
            // 0x3b9218: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B921Cu;
label_3b921c:
    // 0x3b921c: 0x0  nop
    ctx->pc = 0x3b921cu;
    // NOP
}
