#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048B250
// Address: 0x48b250 - 0x48b360
void sub_0048B250_0x48b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B250_0x48b250");
#endif

    switch (ctx->pc) {
        case 0x48b250u: goto label_48b250;
        case 0x48b254u: goto label_48b254;
        case 0x48b258u: goto label_48b258;
        case 0x48b25cu: goto label_48b25c;
        case 0x48b260u: goto label_48b260;
        case 0x48b264u: goto label_48b264;
        case 0x48b268u: goto label_48b268;
        case 0x48b26cu: goto label_48b26c;
        case 0x48b270u: goto label_48b270;
        case 0x48b274u: goto label_48b274;
        case 0x48b278u: goto label_48b278;
        case 0x48b27cu: goto label_48b27c;
        case 0x48b280u: goto label_48b280;
        case 0x48b284u: goto label_48b284;
        case 0x48b288u: goto label_48b288;
        case 0x48b28cu: goto label_48b28c;
        case 0x48b290u: goto label_48b290;
        case 0x48b294u: goto label_48b294;
        case 0x48b298u: goto label_48b298;
        case 0x48b29cu: goto label_48b29c;
        case 0x48b2a0u: goto label_48b2a0;
        case 0x48b2a4u: goto label_48b2a4;
        case 0x48b2a8u: goto label_48b2a8;
        case 0x48b2acu: goto label_48b2ac;
        case 0x48b2b0u: goto label_48b2b0;
        case 0x48b2b4u: goto label_48b2b4;
        case 0x48b2b8u: goto label_48b2b8;
        case 0x48b2bcu: goto label_48b2bc;
        case 0x48b2c0u: goto label_48b2c0;
        case 0x48b2c4u: goto label_48b2c4;
        case 0x48b2c8u: goto label_48b2c8;
        case 0x48b2ccu: goto label_48b2cc;
        case 0x48b2d0u: goto label_48b2d0;
        case 0x48b2d4u: goto label_48b2d4;
        case 0x48b2d8u: goto label_48b2d8;
        case 0x48b2dcu: goto label_48b2dc;
        case 0x48b2e0u: goto label_48b2e0;
        case 0x48b2e4u: goto label_48b2e4;
        case 0x48b2e8u: goto label_48b2e8;
        case 0x48b2ecu: goto label_48b2ec;
        case 0x48b2f0u: goto label_48b2f0;
        case 0x48b2f4u: goto label_48b2f4;
        case 0x48b2f8u: goto label_48b2f8;
        case 0x48b2fcu: goto label_48b2fc;
        case 0x48b300u: goto label_48b300;
        case 0x48b304u: goto label_48b304;
        case 0x48b308u: goto label_48b308;
        case 0x48b30cu: goto label_48b30c;
        case 0x48b310u: goto label_48b310;
        case 0x48b314u: goto label_48b314;
        case 0x48b318u: goto label_48b318;
        case 0x48b31cu: goto label_48b31c;
        case 0x48b320u: goto label_48b320;
        case 0x48b324u: goto label_48b324;
        case 0x48b328u: goto label_48b328;
        case 0x48b32cu: goto label_48b32c;
        case 0x48b330u: goto label_48b330;
        case 0x48b334u: goto label_48b334;
        case 0x48b338u: goto label_48b338;
        case 0x48b33cu: goto label_48b33c;
        case 0x48b340u: goto label_48b340;
        case 0x48b344u: goto label_48b344;
        case 0x48b348u: goto label_48b348;
        case 0x48b34cu: goto label_48b34c;
        case 0x48b350u: goto label_48b350;
        case 0x48b354u: goto label_48b354;
        case 0x48b358u: goto label_48b358;
        case 0x48b35cu: goto label_48b35c;
        default: break;
    }

    ctx->pc = 0x48b250u;

label_48b250:
    // 0x48b250: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x48b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_48b254:
    // 0x48b254: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x48b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_48b258:
    // 0x48b258: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x48b258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_48b25c:
    // 0x48b25c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x48b25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_48b260:
    // 0x48b260: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x48b260u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48b264:
    // 0x48b264: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48b264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48b268:
    // 0x48b268: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48b26c:
    // 0x48b26c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48b26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48b270:
    // 0x48b270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48b274:
    // 0x48b274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48b274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48b278:
    // 0x48b278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48b278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48b27c:
    // 0x48b27c: 0x90950008  lbu         $s5, 0x8($a0)
    ctx->pc = 0x48b27cu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_48b280:
    // 0x48b280: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x48b280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_48b284:
    // 0x48b284: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x48b284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_48b288:
    // 0x48b288: 0x8c7489e8  lw          $s4, -0x7618($v1)
    ctx->pc = 0x48b288u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_48b28c:
    // 0x48b28c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48b28cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b290:
    // 0x48b290: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x48b290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_48b294:
    // 0x48b294: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x48b294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_48b298:
    // 0x48b298: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x48b298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48b29c:
    // 0x48b29c: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x48b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_48b2a0:
    // 0x48b2a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b2a4:
    // 0x48b2a4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x48b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_48b2a8:
    // 0x48b2a8: 0xc3b004  sllv        $s6, $v1, $a2
    ctx->pc = 0x48b2a8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_48b2ac:
    // 0x48b2ac: 0x2492000c  addiu       $s2, $a0, 0xC
    ctx->pc = 0x48b2acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_48b2b0:
    // 0x48b2b0: 0x2c08027  not         $s0, $s6
    ctx->pc = 0x48b2b0u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 22) | GPR_U64(ctx, 0)));
label_48b2b4:
    // 0x48b2b4: 0x0  nop
    ctx->pc = 0x48b2b4u;
    // NOP
label_48b2b8:
    // 0x48b2b8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x48b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_48b2bc:
    // 0x48b2bc: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x48b2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
label_48b2c0:
    // 0x48b2c0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_48b2c4:
    if (ctx->pc == 0x48B2C4u) {
        ctx->pc = 0x48B2C8u;
        goto label_48b2c8;
    }
    ctx->pc = 0x48B2C0u;
    {
        const bool branch_taken_0x48b2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b2c0) {
            ctx->pc = 0x48B308u;
            goto label_48b308;
        }
    }
    ctx->pc = 0x48B2C8u;
label_48b2c8:
    // 0x48b2c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x48b2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_48b2cc:
    // 0x48b2cc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x48b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_48b2d0:
    // 0x48b2d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_48b2d4:
    // 0x48b2d4: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_48b2d8:
    if (ctx->pc == 0x48B2D8u) {
        ctx->pc = 0x48B2DCu;
        goto label_48b2dc;
    }
    ctx->pc = 0x48B2D4u;
    {
        const bool branch_taken_0x48b2d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48b2d4) {
            ctx->pc = 0x48B2F0u;
            goto label_48b2f0;
        }
    }
    ctx->pc = 0x48B2DCu;
label_48b2dc:
    // 0x48b2dc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x48b2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48b2e0:
    // 0x48b2e0: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x48b2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_48b2e4:
    // 0x48b2e4: 0x320f809  jalr        $t9
label_48b2e8:
    if (ctx->pc == 0x48B2E8u) {
        ctx->pc = 0x48B2E8u;
            // 0x48b2e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48B2ECu;
        goto label_48b2ec;
    }
    ctx->pc = 0x48B2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48B2ECu);
        ctx->pc = 0x48B2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B2E4u;
            // 0x48b2e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48B2ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48B2ECu; }
            if (ctx->pc != 0x48B2ECu) { return; }
        }
        }
    }
    ctx->pc = 0x48B2ECu;
label_48b2ec:
    // 0x48b2ec: 0x0  nop
    ctx->pc = 0x48b2ecu;
    // NOP
label_48b2f0:
    // 0x48b2f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b2f4:
    // 0x48b2f4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x48b2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_48b2f8:
    // 0x48b2f8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x48b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_48b2fc:
    // 0x48b2fc: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x48b2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_48b300:
    // 0x48b300: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x48b300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_48b304:
    // 0x48b304: 0x0  nop
    ctx->pc = 0x48b304u;
    // NOP
label_48b308:
    // 0x48b308: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x48b308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_48b30c:
    // 0x48b30c: 0x2e630004  sltiu       $v1, $s3, 0x4
    ctx->pc = 0x48b30cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_48b310:
    // 0x48b310: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x48b310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_48b314:
    // 0x48b314: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_48b318:
    if (ctx->pc == 0x48B318u) {
        ctx->pc = 0x48B318u;
            // 0x48b318: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x48B31Cu;
        goto label_48b31c;
    }
    ctx->pc = 0x48B314u;
    {
        const bool branch_taken_0x48b314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B314u;
            // 0x48b318: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b314) {
            ctx->pc = 0x48B2B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48b2b8;
        }
    }
    ctx->pc = 0x48B31Cu;
label_48b31c:
    // 0x48b31c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x48b31cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_48b320:
    // 0x48b320: 0x16a0ffd7  bnez        $s5, . + 4 + (-0x29 << 2)
label_48b324:
    if (ctx->pc == 0x48B324u) {
        ctx->pc = 0x48B328u;
        goto label_48b328;
    }
    ctx->pc = 0x48B320u;
    {
        const bool branch_taken_0x48b320 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b320) {
            ctx->pc = 0x48B280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48b280;
        }
    }
    ctx->pc = 0x48B328u;
label_48b328:
    // 0x48b328: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x48b328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_48b32c:
    // 0x48b32c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x48b32cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_48b330:
    // 0x48b330: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48b330u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_48b334:
    // 0x48b334: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48b334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48b338:
    // 0x48b338: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48b338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48b33c:
    // 0x48b33c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48b33cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48b340:
    // 0x48b340: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48b340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48b344:
    // 0x48b344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48b344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48b348:
    // 0x48b348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48b348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48b34c:
    // 0x48b34c: 0x3e00008  jr          $ra
label_48b350:
    if (ctx->pc == 0x48B350u) {
        ctx->pc = 0x48B350u;
            // 0x48b350: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x48B354u;
        goto label_48b354;
    }
    ctx->pc = 0x48B34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B34Cu;
            // 0x48b350: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48B354u;
label_48b354:
    // 0x48b354: 0x0  nop
    ctx->pc = 0x48b354u;
    // NOP
label_48b358:
    // 0x48b358: 0x0  nop
    ctx->pc = 0x48b358u;
    // NOP
label_48b35c:
    // 0x48b35c: 0x0  nop
    ctx->pc = 0x48b35cu;
    // NOP
}
