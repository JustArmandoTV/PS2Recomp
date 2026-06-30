#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001181E0
// Address: 0x1181e0 - 0x118290
void sub_001181E0_0x1181e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001181E0_0x1181e0");
#endif

    switch (ctx->pc) {
        case 0x1181e0u: goto label_1181e0;
        case 0x1181e4u: goto label_1181e4;
        case 0x1181e8u: goto label_1181e8;
        case 0x1181ecu: goto label_1181ec;
        case 0x1181f0u: goto label_1181f0;
        case 0x1181f4u: goto label_1181f4;
        case 0x1181f8u: goto label_1181f8;
        case 0x1181fcu: goto label_1181fc;
        case 0x118200u: goto label_118200;
        case 0x118204u: goto label_118204;
        case 0x118208u: goto label_118208;
        case 0x11820cu: goto label_11820c;
        case 0x118210u: goto label_118210;
        case 0x118214u: goto label_118214;
        case 0x118218u: goto label_118218;
        case 0x11821cu: goto label_11821c;
        case 0x118220u: goto label_118220;
        case 0x118224u: goto label_118224;
        case 0x118228u: goto label_118228;
        case 0x11822cu: goto label_11822c;
        case 0x118230u: goto label_118230;
        case 0x118234u: goto label_118234;
        case 0x118238u: goto label_118238;
        case 0x11823cu: goto label_11823c;
        case 0x118240u: goto label_118240;
        case 0x118244u: goto label_118244;
        case 0x118248u: goto label_118248;
        case 0x11824cu: goto label_11824c;
        case 0x118250u: goto label_118250;
        case 0x118254u: goto label_118254;
        case 0x118258u: goto label_118258;
        case 0x11825cu: goto label_11825c;
        case 0x118260u: goto label_118260;
        case 0x118264u: goto label_118264;
        case 0x118268u: goto label_118268;
        case 0x11826cu: goto label_11826c;
        case 0x118270u: goto label_118270;
        case 0x118274u: goto label_118274;
        case 0x118278u: goto label_118278;
        case 0x11827cu: goto label_11827c;
        case 0x118280u: goto label_118280;
        case 0x118284u: goto label_118284;
        case 0x118288u: goto label_118288;
        case 0x11828cu: goto label_11828c;
        default: break;
    }

    ctx->pc = 0x1181e0u;

label_1181e0:
    // 0x1181e0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1181e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_1181e4:
    // 0x1181e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1181e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1181e8:
    // 0x1181e8: 0x24a20300  addiu       $v0, $a1, 0x300
    ctx->pc = 0x1181e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
label_1181ec:
    // 0x1181ec: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1181ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1181f0:
    // 0x1181f0: 0xac620700  sw          $v0, 0x700($v1)
    ctx->pc = 0x1181f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1792), GPR_U32(ctx, 2));
label_1181f4:
    // 0x1181f4: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x1181f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_1181f8:
    // 0x1181f8: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x1181f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
label_1181fc:
    // 0x1181fc: 0x0  nop
    ctx->pc = 0x1181fcu;
    // NOP
label_118200:
    // 0x118200: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x118200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_118204:
    // 0x118204: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x118204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_118208:
    // 0x118208: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x118208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_11820c:
    // 0x11820c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x11820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_118210:
    // 0x118210: 0x0  nop
    ctx->pc = 0x118210u;
    // NOP
label_118214:
    // 0x118214: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_118218:
    if (ctx->pc == 0x118218u) {
        ctx->pc = 0x11821Cu;
        goto label_11821c;
    }
    ctx->pc = 0x118214u;
    {
        const bool branch_taken_0x118214 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x118214) {
            ctx->pc = 0x118200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_118200;
        }
    }
    ctx->pc = 0x11821Cu;
label_11821c:
    // 0x11821c: 0x24a30300  addiu       $v1, $a1, 0x300
    ctx->pc = 0x11821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
label_118220:
    // 0x118220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118224:
    // 0x118224: 0x3e00008  jr          $ra
label_118228:
    if (ctx->pc == 0x118228u) {
        ctx->pc = 0x118228u;
            // 0x118228: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->pc = 0x11822Cu;
        goto label_11822c;
    }
    ctx->pc = 0x118224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118224u;
            // 0x118228: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11822Cu;
label_11822c:
    // 0x11822c: 0x0  nop
    ctx->pc = 0x11822cu;
    // NOP
label_118230:
    // 0x118230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_118234:
    // 0x118234: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x118234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_118238:
    // 0x118238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11823c:
    // 0x11823c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x11823cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_118240:
    // 0x118240: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_118244:
    // 0x118244: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x118244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_118248:
    // 0x118248: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x118248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_11824c:
    // 0x11824c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_118250:
    // 0x118250: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x118250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_118254:
    // 0x118254: 0x40f809  jalr        $v0
label_118258:
    if (ctx->pc == 0x118258u) {
        ctx->pc = 0x118258u;
            // 0x118258: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->pc = 0x11825Cu;
        goto label_11825c;
    }
    ctx->pc = 0x118254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11825Cu);
        ctx->pc = 0x118258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118254u;
            // 0x118258: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11825Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11825Cu; }
            if (ctx->pc != 0x11825Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11825Cu;
label_11825c:
    // 0x11825c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_118260:
    if (ctx->pc == 0x118260u) {
        ctx->pc = 0x118260u;
            // 0x118260: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x118264u;
        goto label_118264;
    }
    ctx->pc = 0x11825Cu;
    {
        const bool branch_taken_0x11825c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11825Cu;
            // 0x118260: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11825c) {
            ctx->pc = 0x118280u;
            goto label_118280;
        }
    }
    ctx->pc = 0x118264u;
label_118264:
    // 0x118264: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x118264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_118268:
    // 0x118268: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11826c:
    // 0x11826c: 0x8c640700  lw          $a0, 0x700($v1)
    ctx->pc = 0x11826cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1792)));
label_118270:
    // 0x118270: 0xac700700  sw          $s0, 0x700($v1)
    ctx->pc = 0x118270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1792), GPR_U32(ctx, 16));
label_118274:
    // 0x118274: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x118274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_118278:
    // 0x118278: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x118278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_11827c:
    // 0x11827c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11827cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_118280:
    // 0x118280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_118284:
    // 0x118284: 0x3e00008  jr          $ra
label_118288:
    if (ctx->pc == 0x118288u) {
        ctx->pc = 0x118288u;
            // 0x118288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x11828Cu;
        goto label_11828c;
    }
    ctx->pc = 0x118284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118284u;
            // 0x118288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11828Cu;
label_11828c:
    // 0x11828c: 0x0  nop
    ctx->pc = 0x11828cu;
    // NOP
}
