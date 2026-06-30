#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00533380
// Address: 0x533380 - 0x533460
void sub_00533380_0x533380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00533380_0x533380");
#endif

    switch (ctx->pc) {
        case 0x5333fcu: goto label_5333fc;
        default: break;
    }

    ctx->pc = 0x533380u;

    // 0x533380: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x533380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x533384: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x533384u;
    {
        const bool branch_taken_0x533384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x533388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533384u;
            // 0x533388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533384) {
            ctx->pc = 0x5333BCu;
            goto label_5333bc;
        }
    }
    ctx->pc = 0x53338Cu;
    // 0x53338c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x53338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x533390: 0x50a3000b  beql        $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x533390u;
    {
        const bool branch_taken_0x533390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x533390) {
            ctx->pc = 0x533394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533390u;
            // 0x533394: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5333C0u;
            goto label_5333c0;
        }
    }
    ctx->pc = 0x533398u;
    // 0x533398: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x533398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x53339c: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x53339Cu;
    {
        const bool branch_taken_0x53339c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53339c) {
            ctx->pc = 0x5333A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53339Cu;
            // 0x5333a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5333C0u;
            goto label_5333c0;
        }
    }
    ctx->pc = 0x5333A4u;
    // 0x5333a4: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x5333A4u;
    {
        const bool branch_taken_0x5333a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5333a4) {
            ctx->pc = 0x5333A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5333A4u;
            // 0x5333a8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5333B4u;
            goto label_5333b4;
        }
    }
    ctx->pc = 0x5333ACu;
    // 0x5333ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x5333ACu;
    {
        const bool branch_taken_0x5333ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5333B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5333ACu;
            // 0x5333b0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5333ac) {
            ctx->pc = 0x5333C0u;
            goto label_5333c0;
        }
    }
    ctx->pc = 0x5333B4u;
label_5333b4:
    // 0x5333b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x5333B4u;
    {
        const bool branch_taken_0x5333b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5333B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5333B4u;
            // 0x5333b8: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5333b4) {
            ctx->pc = 0x5333C0u;
            goto label_5333c0;
        }
    }
    ctx->pc = 0x5333BCu;
label_5333bc:
    // 0x5333bc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x5333bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_5333c0:
    // 0x5333c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5333c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5333c4: 0x3e00008  jr          $ra
    ctx->pc = 0x5333C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5333C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5333C4u;
            // 0x5333c8: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5333CCu;
    // 0x5333cc: 0x0  nop
    ctx->pc = 0x5333ccu;
    // NOP
    // 0x5333d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5333d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x5333d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5333d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5333d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5333d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5333dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5333dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5333e0: 0xa0800025  sb          $zero, 0x25($a0)
    ctx->pc = 0x5333e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x5333e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5333e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5333e8: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x5333e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x5333ec: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x5333ECu;
    {
        const bool branch_taken_0x5333ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5333ec) {
            ctx->pc = 0x5333F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5333ECu;
            // 0x5333f0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533440u;
            goto label_533440;
        }
    }
    ctx->pc = 0x5333F4u;
    // 0x5333f4: 0xc048672  jal         func_1219C8
    ctx->pc = 0x5333F4u;
    SET_GPR_U32(ctx, 31, 0x5333FCu);
    ctx->pc = 0x1219C8u;
    if (runtime->hasFunction(0x1219C8u)) {
        auto targetFn = runtime->lookupFunction(0x1219C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5333FCu; }
        if (ctx->pc != 0x5333FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001219C8_0x1219c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5333FCu; }
        if (ctx->pc != 0x5333FCu) { return; }
    }
    ctx->pc = 0x5333FCu;
label_5333fc:
    // 0x5333fc: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x5333fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x533400: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x533400u;
    {
        const bool branch_taken_0x533400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x533404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533400u;
            // 0x533404: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533400) {
            ctx->pc = 0x533434u;
            goto label_533434;
        }
    }
    ctx->pc = 0x533408u;
    // 0x533408: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x533408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x53340c: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x53340Cu;
    {
        const bool branch_taken_0x53340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x53340c) {
            ctx->pc = 0x533410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53340Cu;
            // 0x533410: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533438u;
            goto label_533438;
        }
    }
    ctx->pc = 0x533414u;
    // 0x533414: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x533414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x533418: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x533418u;
    {
        const bool branch_taken_0x533418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x533418) {
            ctx->pc = 0x533434u;
            goto label_533434;
        }
    }
    ctx->pc = 0x533420u;
    // 0x533420: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x533420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x533424: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x533424u;
    {
        const bool branch_taken_0x533424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x533424) {
            ctx->pc = 0x533434u;
            goto label_533434;
        }
    }
    ctx->pc = 0x53342Cu;
    // 0x53342c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x53342Cu;
    {
        const bool branch_taken_0x53342c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53342c) {
            ctx->pc = 0x533430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53342Cu;
            // 0x533430: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533438u;
            goto label_533438;
        }
    }
    ctx->pc = 0x533434u;
label_533434:
    // 0x533434: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533438:
    // 0x533438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x533438u;
    {
        const bool branch_taken_0x533438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533438u;
            // 0x53343c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533438) {
            ctx->pc = 0x53344Cu;
            goto label_53344c;
        }
    }
    ctx->pc = 0x533440u;
label_533440:
    // 0x533440: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x533440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x533444: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x533444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x533448: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x533448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_53344c:
    // 0x53344c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x533450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x533450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x533454: 0x3e00008  jr          $ra
    ctx->pc = 0x533454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x533458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533454u;
            // 0x533458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53345Cu;
    // 0x53345c: 0x0  nop
    ctx->pc = 0x53345cu;
    // NOP
}
