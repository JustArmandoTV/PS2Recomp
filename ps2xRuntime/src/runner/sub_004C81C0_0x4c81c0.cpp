#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C81C0
// Address: 0x4c81c0 - 0x4c8260
void sub_004C81C0_0x4c81c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C81C0_0x4c81c0");
#endif

    switch (ctx->pc) {
        case 0x4c81c0u: goto label_4c81c0;
        case 0x4c81c4u: goto label_4c81c4;
        case 0x4c81c8u: goto label_4c81c8;
        case 0x4c81ccu: goto label_4c81cc;
        case 0x4c81d0u: goto label_4c81d0;
        case 0x4c81d4u: goto label_4c81d4;
        case 0x4c81d8u: goto label_4c81d8;
        case 0x4c81dcu: goto label_4c81dc;
        case 0x4c81e0u: goto label_4c81e0;
        case 0x4c81e4u: goto label_4c81e4;
        case 0x4c81e8u: goto label_4c81e8;
        case 0x4c81ecu: goto label_4c81ec;
        case 0x4c81f0u: goto label_4c81f0;
        case 0x4c81f4u: goto label_4c81f4;
        case 0x4c81f8u: goto label_4c81f8;
        case 0x4c81fcu: goto label_4c81fc;
        case 0x4c8200u: goto label_4c8200;
        case 0x4c8204u: goto label_4c8204;
        case 0x4c8208u: goto label_4c8208;
        case 0x4c820cu: goto label_4c820c;
        case 0x4c8210u: goto label_4c8210;
        case 0x4c8214u: goto label_4c8214;
        case 0x4c8218u: goto label_4c8218;
        case 0x4c821cu: goto label_4c821c;
        case 0x4c8220u: goto label_4c8220;
        case 0x4c8224u: goto label_4c8224;
        case 0x4c8228u: goto label_4c8228;
        case 0x4c822cu: goto label_4c822c;
        case 0x4c8230u: goto label_4c8230;
        case 0x4c8234u: goto label_4c8234;
        case 0x4c8238u: goto label_4c8238;
        case 0x4c823cu: goto label_4c823c;
        case 0x4c8240u: goto label_4c8240;
        case 0x4c8244u: goto label_4c8244;
        case 0x4c8248u: goto label_4c8248;
        case 0x4c824cu: goto label_4c824c;
        case 0x4c8250u: goto label_4c8250;
        case 0x4c8254u: goto label_4c8254;
        case 0x4c8258u: goto label_4c8258;
        case 0x4c825cu: goto label_4c825c;
        default: break;
    }

    ctx->pc = 0x4c81c0u;

label_4c81c0:
    // 0x4c81c0: 0x3e00008  jr          $ra
label_4c81c4:
    if (ctx->pc == 0x4C81C4u) {
        ctx->pc = 0x4C81C4u;
            // 0x4c81c4: 0xc48000f0  lwc1        $f0, 0xF0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4C81C8u;
        goto label_4c81c8;
    }
    ctx->pc = 0x4C81C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C81C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C81C0u;
            // 0x4c81c4: 0xc48000f0  lwc1        $f0, 0xF0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C81C8u;
label_4c81c8:
    // 0x4c81c8: 0x0  nop
    ctx->pc = 0x4c81c8u;
    // NOP
label_4c81cc:
    // 0x4c81cc: 0x0  nop
    ctx->pc = 0x4c81ccu;
    // NOP
label_4c81d0:
    // 0x4c81d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c81d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c81d4:
    // 0x4c81d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4c81d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4c81d8:
    // 0x4c81d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c81d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c81dc:
    // 0x4c81dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c81dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c81e0:
    // 0x4c81e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c81e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c81e4:
    // 0x4c81e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c81e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c81e8:
    // 0x4c81e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c81e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c81ec:
    // 0x4c81ec: 0x8c90007c  lw          $s0, 0x7C($a0)
    ctx->pc = 0x4c81ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c81f0:
    // 0x4c81f0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4c81f4:
    if (ctx->pc == 0x4C81F4u) {
        ctx->pc = 0x4C81F4u;
            // 0x4c81f4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C81F8u;
        goto label_4c81f8;
    }
    ctx->pc = 0x4C81F0u;
    {
        const bool branch_taken_0x4c81f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C81F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C81F0u;
            // 0x4c81f4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c81f0) {
            ctx->pc = 0x4C8238u;
            goto label_4c8238;
        }
    }
    ctx->pc = 0x4C81F8u;
label_4c81f8:
    // 0x4c81f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c81f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c81fc:
    // 0x4c81fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c81fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c8200:
    // 0x4c8200: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4c8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4c8204:
    // 0x4c8204: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4c8204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4c8208:
    // 0x4c8208: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4c8208u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c820c:
    // 0x4c820c: 0xae8000d0  sw          $zero, 0xD0($s4)
    ctx->pc = 0x4c820cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 0));
label_4c8210:
    // 0x4c8210: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4c8210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4c8214:
    // 0x4c8214: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4c8214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4c8218:
    // 0x4c8218: 0x320f809  jalr        $t9
label_4c821c:
    if (ctx->pc == 0x4C821Cu) {
        ctx->pc = 0x4C821Cu;
            // 0x4c821c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8220u;
        goto label_4c8220;
    }
    ctx->pc = 0x4C8218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C8220u);
        ctx->pc = 0x4C821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8218u;
            // 0x4c821c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C8220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C8220u; }
            if (ctx->pc != 0x4C8220u) { return; }
        }
        }
    }
    ctx->pc = 0x4C8220u;
label_4c8220:
    // 0x4c8220: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4c8220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c8224:
    // 0x4c8224: 0xae8000d8  sw          $zero, 0xD8($s4)
    ctx->pc = 0x4c8224u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 0));
label_4c8228:
    // 0x4c8228: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4c8228u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c822c:
    // 0x4c822c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_4c8230:
    if (ctx->pc == 0x4C8230u) {
        ctx->pc = 0x4C8230u;
            // 0x4c8230: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4C8234u;
        goto label_4c8234;
    }
    ctx->pc = 0x4C822Cu;
    {
        const bool branch_taken_0x4c822c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C822Cu;
            // 0x4c8230: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c822c) {
            ctx->pc = 0x4C8200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c8200;
        }
    }
    ctx->pc = 0x4C8234u;
label_4c8234:
    // 0x4c8234: 0x0  nop
    ctx->pc = 0x4c8234u;
    // NOP
label_4c8238:
    // 0x4c8238: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4c8238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c823c:
    // 0x4c823c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c823cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c8240:
    // 0x4c8240: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c8240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c8244:
    // 0x4c8244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c8244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c8248:
    // 0x4c8248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c8248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c824c:
    // 0x4c824c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c824cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c8250:
    // 0x4c8250: 0x3e00008  jr          $ra
label_4c8254:
    if (ctx->pc == 0x4C8254u) {
        ctx->pc = 0x4C8254u;
            // 0x4c8254: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C8258u;
        goto label_4c8258;
    }
    ctx->pc = 0x4C8250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8250u;
            // 0x4c8254: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C8258u;
label_4c8258:
    // 0x4c8258: 0x0  nop
    ctx->pc = 0x4c8258u;
    // NOP
label_4c825c:
    // 0x4c825c: 0x0  nop
    ctx->pc = 0x4c825cu;
    // NOP
}
