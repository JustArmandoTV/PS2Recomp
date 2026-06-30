#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005345E0
// Address: 0x5345e0 - 0x5346d0
void sub_005345E0_0x5345e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005345E0_0x5345e0");
#endif

    switch (ctx->pc) {
        case 0x534668u: goto label_534668;
        default: break;
    }

    ctx->pc = 0x5345e0u;

    // 0x5345e0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5345E0u;
    {
        const bool branch_taken_0x5345e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x5345E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5345E0u;
            // 0x5345e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5345e0) {
            ctx->pc = 0x5345F4u;
            goto label_5345f4;
        }
    }
    ctx->pc = 0x5345E8u;
    // 0x5345e8: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x5345e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x5345ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x5345ECu;
    {
        const bool branch_taken_0x5345ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5345F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5345ECu;
            // 0x5345f0: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5345ec) {
            ctx->pc = 0x534634u;
            goto label_534634;
        }
    }
    ctx->pc = 0x5345F4u;
label_5345f4:
    // 0x5345f4: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x5345f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x5345f8: 0x50a2000e  beql        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x5345F8u;
    {
        const bool branch_taken_0x5345f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5345f8) {
            ctx->pc = 0x5345FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5345F8u;
            // 0x5345fc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534634u;
            goto label_534634;
        }
    }
    ctx->pc = 0x534600u;
    // 0x534600: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x534600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x534604: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x534604u;
    {
        const bool branch_taken_0x534604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x534604) {
            ctx->pc = 0x534608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534604u;
            // 0x534608: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534634u;
            goto label_534634;
        }
    }
    ctx->pc = 0x53460Cu;
    // 0x53460c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x53460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x534610: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x534610u;
    {
        const bool branch_taken_0x534610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x534610) {
            ctx->pc = 0x534614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534610u;
            // 0x534614: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534634u;
            goto label_534634;
        }
    }
    ctx->pc = 0x534618u;
    // 0x534618: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x534618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x53461c: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x53461Cu;
    {
        const bool branch_taken_0x53461c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x53461c) {
            ctx->pc = 0x534620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53461Cu;
            // 0x534620: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534634u;
            goto label_534634;
        }
    }
    ctx->pc = 0x534624u;
    // 0x534624: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x534624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x534628: 0x50a20002  beql        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x534628u;
    {
        const bool branch_taken_0x534628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x534628) {
            ctx->pc = 0x53462Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534628u;
            // 0x53462c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534634u;
            goto label_534634;
        }
    }
    ctx->pc = 0x534630u;
    // 0x534630: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x534630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_534634:
    // 0x534634: 0x3e00008  jr          $ra
    ctx->pc = 0x534634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53463Cu;
    // 0x53463c: 0x0  nop
    ctx->pc = 0x53463cu;
    // NOP
    // 0x534640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x534640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x534644: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x534644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x534648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x53464c: 0x24070202  addiu       $a3, $zero, 0x202
    ctx->pc = 0x53464cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x534650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x534654: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x534654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x534658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x534658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53465c: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x53465cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x534660: 0xc04861a  jal         func_121868
    ctx->pc = 0x534660u;
    SET_GPR_U32(ctx, 31, 0x534668u);
    ctx->pc = 0x534664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534660u;
            // 0x534664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121868u;
    if (runtime->hasFunction(0x121868u)) {
        auto targetFn = runtime->lookupFunction(0x121868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534668u; }
        if (ctx->pc != 0x534668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121868_0x121868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534668u; }
        if (ctx->pc != 0x534668u) { return; }
    }
    ctx->pc = 0x534668u;
label_534668:
    // 0x534668: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x534668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x53466c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x53466Cu;
    {
        const bool branch_taken_0x53466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x534670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53466Cu;
            // 0x534670: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53466c) {
            ctx->pc = 0x5346A0u;
            goto label_5346a0;
        }
    }
    ctx->pc = 0x534674u;
    // 0x534674: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x534674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x534678: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x534678u;
    {
        const bool branch_taken_0x534678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534678) {
            ctx->pc = 0x53467Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534678u;
            // 0x53467c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5346A4u;
            goto label_5346a4;
        }
    }
    ctx->pc = 0x534680u;
    // 0x534680: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x534680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x534684: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x534684u;
    {
        const bool branch_taken_0x534684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534684) {
            ctx->pc = 0x5346A0u;
            goto label_5346a0;
        }
    }
    ctx->pc = 0x53468Cu;
    // 0x53468c: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x53468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x534690: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x534690u;
    {
        const bool branch_taken_0x534690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534690) {
            ctx->pc = 0x5346A0u;
            goto label_5346a0;
        }
    }
    ctx->pc = 0x534698u;
    // 0x534698: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x534698u;
    {
        const bool branch_taken_0x534698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x534698) {
            ctx->pc = 0x53469Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534698u;
            // 0x53469c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5346A4u;
            goto label_5346a4;
        }
    }
    ctx->pc = 0x5346A0u;
label_5346a0:
    // 0x5346a0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x5346a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5346a4:
    // 0x5346a4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x5346a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x5346a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5346a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5346ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5346acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5346b0: 0x3e00008  jr          $ra
    ctx->pc = 0x5346B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5346B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5346B0u;
            // 0x5346b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5346B8u;
    // 0x5346b8: 0x0  nop
    ctx->pc = 0x5346b8u;
    // NOP
    // 0x5346bc: 0x0  nop
    ctx->pc = 0x5346bcu;
    // NOP
    // 0x5346c0: 0x3e00008  jr          $ra
    ctx->pc = 0x5346C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5346C8u;
    // 0x5346c8: 0x0  nop
    ctx->pc = 0x5346c8u;
    // NOP
    // 0x5346cc: 0x0  nop
    ctx->pc = 0x5346ccu;
    // NOP
}
