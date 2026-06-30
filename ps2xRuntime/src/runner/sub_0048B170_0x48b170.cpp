#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048B170
// Address: 0x48b170 - 0x48b250
void sub_0048B170_0x48b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B170_0x48b170");
#endif

    switch (ctx->pc) {
        case 0x48b170u: goto label_48b170;
        case 0x48b174u: goto label_48b174;
        case 0x48b178u: goto label_48b178;
        case 0x48b17cu: goto label_48b17c;
        case 0x48b180u: goto label_48b180;
        case 0x48b184u: goto label_48b184;
        case 0x48b188u: goto label_48b188;
        case 0x48b18cu: goto label_48b18c;
        case 0x48b190u: goto label_48b190;
        case 0x48b194u: goto label_48b194;
        case 0x48b198u: goto label_48b198;
        case 0x48b19cu: goto label_48b19c;
        case 0x48b1a0u: goto label_48b1a0;
        case 0x48b1a4u: goto label_48b1a4;
        case 0x48b1a8u: goto label_48b1a8;
        case 0x48b1acu: goto label_48b1ac;
        case 0x48b1b0u: goto label_48b1b0;
        case 0x48b1b4u: goto label_48b1b4;
        case 0x48b1b8u: goto label_48b1b8;
        case 0x48b1bcu: goto label_48b1bc;
        case 0x48b1c0u: goto label_48b1c0;
        case 0x48b1c4u: goto label_48b1c4;
        case 0x48b1c8u: goto label_48b1c8;
        case 0x48b1ccu: goto label_48b1cc;
        case 0x48b1d0u: goto label_48b1d0;
        case 0x48b1d4u: goto label_48b1d4;
        case 0x48b1d8u: goto label_48b1d8;
        case 0x48b1dcu: goto label_48b1dc;
        case 0x48b1e0u: goto label_48b1e0;
        case 0x48b1e4u: goto label_48b1e4;
        case 0x48b1e8u: goto label_48b1e8;
        case 0x48b1ecu: goto label_48b1ec;
        case 0x48b1f0u: goto label_48b1f0;
        case 0x48b1f4u: goto label_48b1f4;
        case 0x48b1f8u: goto label_48b1f8;
        case 0x48b1fcu: goto label_48b1fc;
        case 0x48b200u: goto label_48b200;
        case 0x48b204u: goto label_48b204;
        case 0x48b208u: goto label_48b208;
        case 0x48b20cu: goto label_48b20c;
        case 0x48b210u: goto label_48b210;
        case 0x48b214u: goto label_48b214;
        case 0x48b218u: goto label_48b218;
        case 0x48b21cu: goto label_48b21c;
        case 0x48b220u: goto label_48b220;
        case 0x48b224u: goto label_48b224;
        case 0x48b228u: goto label_48b228;
        case 0x48b22cu: goto label_48b22c;
        case 0x48b230u: goto label_48b230;
        case 0x48b234u: goto label_48b234;
        case 0x48b238u: goto label_48b238;
        case 0x48b23cu: goto label_48b23c;
        case 0x48b240u: goto label_48b240;
        case 0x48b244u: goto label_48b244;
        case 0x48b248u: goto label_48b248;
        case 0x48b24cu: goto label_48b24c;
        default: break;
    }

    ctx->pc = 0x48b170u;

label_48b170:
    // 0x48b170: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_48b174:
    // 0x48b174: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x48b174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_48b178:
    // 0x48b178: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x48b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_48b17c:
    // 0x48b17c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x48b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_48b180:
    // 0x48b180: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48b184:
    // 0x48b184: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x48b184u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_48b188:
    // 0x48b188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48b188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48b18c:
    // 0x48b18c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48b190:
    // 0x48b190: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x48b190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b194:
    // 0x48b194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48b198:
    // 0x48b198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48b19c:
    // 0x48b19c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48b19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48b1a0:
    // 0x48b1a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48b1a4:
    // 0x48b1a4: 0x8c7589e8  lw          $s5, -0x7618($v1)
    ctx->pc = 0x48b1a4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_48b1a8:
    // 0x48b1a8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x48b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48b1ac:
    // 0x48b1ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b1b0:
    // 0x48b1b0: 0xe38804  sllv        $s1, $v1, $a3
    ctx->pc = 0x48b1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_48b1b4:
    // 0x48b1b4: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x48b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_48b1b8:
    // 0x48b1b8: 0x2208027  not         $s0, $s1
    ctx->pc = 0x48b1b8u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 17) | GPR_U64(ctx, 0)));
label_48b1bc:
    // 0x48b1bc: 0x2473000c  addiu       $s3, $v1, 0xC
    ctx->pc = 0x48b1bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_48b1c0:
    // 0x48b1c0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x48b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_48b1c4:
    // 0x48b1c4: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x48b1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_48b1c8:
    // 0x48b1c8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_48b1cc:
    if (ctx->pc == 0x48B1CCu) {
        ctx->pc = 0x48B1D0u;
        goto label_48b1d0;
    }
    ctx->pc = 0x48B1C8u;
    {
        const bool branch_taken_0x48b1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b1c8) {
            ctx->pc = 0x48B210u;
            goto label_48b210;
        }
    }
    ctx->pc = 0x48B1D0u;
label_48b1d0:
    // 0x48b1d0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x48b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_48b1d4:
    // 0x48b1d4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x48b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_48b1d8:
    // 0x48b1d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_48b1dc:
    // 0x48b1dc: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_48b1e0:
    if (ctx->pc == 0x48B1E0u) {
        ctx->pc = 0x48B1E4u;
        goto label_48b1e4;
    }
    ctx->pc = 0x48B1DCu;
    {
        const bool branch_taken_0x48b1dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48b1dc) {
            ctx->pc = 0x48B1F8u;
            goto label_48b1f8;
        }
    }
    ctx->pc = 0x48B1E4u;
label_48b1e4:
    // 0x48b1e4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48b1e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48b1e8:
    // 0x48b1e8: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x48b1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_48b1ec:
    // 0x48b1ec: 0x320f809  jalr        $t9
label_48b1f0:
    if (ctx->pc == 0x48B1F0u) {
        ctx->pc = 0x48B1F0u;
            // 0x48b1f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48B1F4u;
        goto label_48b1f4;
    }
    ctx->pc = 0x48B1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48B1F4u);
        ctx->pc = 0x48B1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B1ECu;
            // 0x48b1f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48B1F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48B1F4u; }
            if (ctx->pc != 0x48B1F4u) { return; }
        }
        }
    }
    ctx->pc = 0x48B1F4u;
label_48b1f4:
    // 0x48b1f4: 0x0  nop
    ctx->pc = 0x48b1f4u;
    // NOP
label_48b1f8:
    // 0x48b1f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b1fc:
    // 0x48b1fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x48b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_48b200:
    // 0x48b200: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x48b200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_48b204:
    // 0x48b204: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x48b204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_48b208:
    // 0x48b208: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x48b208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_48b20c:
    // 0x48b20c: 0x0  nop
    ctx->pc = 0x48b20cu;
    // NOP
label_48b210:
    // 0x48b210: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x48b210u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_48b214:
    // 0x48b214: 0x2e830004  sltiu       $v1, $s4, 0x4
    ctx->pc = 0x48b214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_48b218:
    // 0x48b218: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x48b218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_48b21c:
    // 0x48b21c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_48b220:
    if (ctx->pc == 0x48B220u) {
        ctx->pc = 0x48B220u;
            // 0x48b220: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x48B224u;
        goto label_48b224;
    }
    ctx->pc = 0x48B21Cu;
    {
        const bool branch_taken_0x48b21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B21Cu;
            // 0x48b220: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b21c) {
            ctx->pc = 0x48B1C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48b1c0;
        }
    }
    ctx->pc = 0x48B224u;
label_48b224:
    // 0x48b224: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x48b224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_48b228:
    // 0x48b228: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48b228u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48b22c:
    // 0x48b22c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48b22cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48b230:
    // 0x48b230: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48b230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48b234:
    // 0x48b234: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48b234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48b238:
    // 0x48b238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48b238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48b23c:
    // 0x48b23c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48b23cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48b240:
    // 0x48b240: 0x3e00008  jr          $ra
label_48b244:
    if (ctx->pc == 0x48B244u) {
        ctx->pc = 0x48B244u;
            // 0x48b244: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x48B248u;
        goto label_48b248;
    }
    ctx->pc = 0x48B240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B240u;
            // 0x48b244: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48B248u;
label_48b248:
    // 0x48b248: 0x0  nop
    ctx->pc = 0x48b248u;
    // NOP
label_48b24c:
    // 0x48b24c: 0x0  nop
    ctx->pc = 0x48b24cu;
    // NOP
}
