#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00114910
// Address: 0x114910 - 0x114988
void sub_00114910_0x114910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114910_0x114910");
#endif

    switch (ctx->pc) {
        case 0x11496cu: goto label_11496c;
        default: break;
    }

    ctx->pc = 0x114910u;

    // 0x114910: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x114910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x114914: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114918: 0x8c62e458  lw          $v0, -0x1BA8($v1)
    ctx->pc = 0x114918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960216)));
    // 0x11491c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11491cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114920: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114924: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114924u;
    {
        const bool branch_taken_0x114924 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114924u;
            // 0x114928: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114924) {
            ctx->pc = 0x114934u;
            goto label_114934;
        }
    }
    ctx->pc = 0x11492Cu;
    // 0x11492c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11492Cu;
    {
        const bool branch_taken_0x11492c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11492Cu;
            // 0x114930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11492c) {
            ctx->pc = 0x114978u;
            goto label_114978;
        }
    }
    ctx->pc = 0x114934u;
label_114934:
    // 0x114934: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x114934u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x114938: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x114938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x11493c: 0xace5ccc0  sw          $a1, -0x3340($a3)
    ctx->pc = 0x11493cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954176), GPR_U32(ctx, 5));
    // 0x114940: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x114940u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x114944: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x114944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x114948: 0x24e7ccc0  addiu       $a3, $a3, -0x3340
    ctx->pc = 0x114948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954176));
    // 0x11494c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11494cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114950: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x114950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114958: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x114958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11495c: 0x2609cc80  addiu       $t1, $s0, -0x3380
    ctx->pc = 0x11495cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954112));
    // 0x114960: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114960u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114964: 0xc04410c  jal         func_110430
    ctx->pc = 0x114964u;
    SET_GPR_U32(ctx, 31, 0x11496Cu);
    ctx->pc = 0x114968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114964u;
            // 0x114968: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11496Cu; }
        if (ctx->pc != 0x11496Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11496Cu; }
        if (ctx->pc != 0x11496Cu) { return; }
    }
    ctx->pc = 0x11496Cu;
label_11496c:
    // 0x11496c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11496Cu;
    {
        const bool branch_taken_0x11496c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11496Cu;
            // 0x114970: 0x8e02cc80  lw          $v0, -0x3380($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11496c) {
            ctx->pc = 0x114978u;
            goto label_114978;
        }
    }
    ctx->pc = 0x114974u;
    // 0x114974: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x114974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114978:
    // 0x114978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11497c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11497cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114980: 0x3e00008  jr          $ra
    ctx->pc = 0x114980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114980u;
            // 0x114984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114988u;
}
