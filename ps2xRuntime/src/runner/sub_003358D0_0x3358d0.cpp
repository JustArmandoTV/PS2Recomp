#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003358D0
// Address: 0x3358d0 - 0x3359c0
void sub_003358D0_0x3358d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003358D0_0x3358d0");
#endif

    switch (ctx->pc) {
        case 0x335968u: goto label_335968;
        case 0x335984u: goto label_335984;
        case 0x3359a0u: goto label_3359a0;
        case 0x3359acu: goto label_3359ac;
        default: break;
    }

    ctx->pc = 0x3358d0u;

    // 0x3358d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3358d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3358d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3358d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3358d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3358d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3358dc: 0x9083005a  lbu         $v1, 0x5A($a0)
    ctx->pc = 0x3358dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x3358e0: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3358E0u;
    {
        const bool branch_taken_0x3358e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3358E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3358E0u;
            // 0x3358e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3358e0) {
            ctx->pc = 0x3359ACu;
            goto label_3359ac;
        }
    }
    ctx->pc = 0x3358E8u;
    // 0x3358e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3358e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3358ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3358ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3358f0: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3358f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3358f4: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3358f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x3358f8: 0x8c84095c  lw          $a0, 0x95C($a0)
    ctx->pc = 0x3358f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2396)));
    // 0x3358fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3358fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x335900: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x335900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x335904: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x335904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x335908: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x335908u;
    {
        const bool branch_taken_0x335908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x33590Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335908u;
            // 0x33590c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335908) {
            ctx->pc = 0x335918u;
            goto label_335918;
        }
    }
    ctx->pc = 0x335910u;
    // 0x335910: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x335910u;
    {
        const bool branch_taken_0x335910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335910u;
            // 0x335914: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335910) {
            ctx->pc = 0x33598Cu;
            goto label_33598c;
        }
    }
    ctx->pc = 0x335918u;
label_335918:
    // 0x335918: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x335918u;
    {
        const bool branch_taken_0x335918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x335918) {
            ctx->pc = 0x33591Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335918u;
            // 0x33591c: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335970u;
            goto label_335970;
        }
    }
    ctx->pc = 0x335920u;
    // 0x335920: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x335920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x335924: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x335924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x335928: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x335928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33592c: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33592Cu;
    {
        const bool branch_taken_0x33592c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33592c) {
            ctx->pc = 0x335930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33592Cu;
            // 0x335930: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335958u;
            goto label_335958;
        }
    }
    ctx->pc = 0x335934u;
    // 0x335934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x335934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335938: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x335938u;
    {
        const bool branch_taken_0x335938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x335938) {
            ctx->pc = 0x33593Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335938u;
            // 0x33593c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335958u;
            goto label_335958;
        }
    }
    ctx->pc = 0x335940u;
    // 0x335940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335944: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335944u;
    {
        const bool branch_taken_0x335944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x335944) {
            ctx->pc = 0x335954u;
            goto label_335954;
        }
    }
    ctx->pc = 0x33594Cu;
    // 0x33594c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33594Cu;
    {
        const bool branch_taken_0x33594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33594c) {
            ctx->pc = 0x335958u;
            goto label_335958;
        }
    }
    ctx->pc = 0x335954u;
label_335954:
    // 0x335954: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_335958:
    // 0x335958: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x335958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33595c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33595cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335960: 0xc0bc8b4  jal         func_2F22D0
    ctx->pc = 0x335960u;
    SET_GPR_U32(ctx, 31, 0x335968u);
    ctx->pc = 0x335964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335960u;
            // 0x335964: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335968u; }
        if (ctx->pc != 0x335968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335968u; }
        if (ctx->pc != 0x335968u) { return; }
    }
    ctx->pc = 0x335968u;
label_335968:
    // 0x335968: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x335968u;
    {
        const bool branch_taken_0x335968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33596Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335968u;
            // 0x33596c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335968) {
            ctx->pc = 0x3359A4u;
            goto label_3359a4;
        }
    }
    ctx->pc = 0x335970u;
label_335970:
    // 0x335970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x335974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335978: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x335978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33597c: 0xc0bc8b4  jal         func_2F22D0
    ctx->pc = 0x33597Cu;
    SET_GPR_U32(ctx, 31, 0x335984u);
    ctx->pc = 0x335980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33597Cu;
            // 0x335980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335984u; }
        if (ctx->pc != 0x335984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335984u; }
        if (ctx->pc != 0x335984u) { return; }
    }
    ctx->pc = 0x335984u;
label_335984:
    // 0x335984: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x335984u;
    {
        const bool branch_taken_0x335984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335984) {
            ctx->pc = 0x3359A0u;
            goto label_3359a0;
        }
    }
    ctx->pc = 0x33598Cu;
label_33598c:
    // 0x33598c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33598cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x335990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335994: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x335994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335998: 0xc0bc8b4  jal         func_2F22D0
    ctx->pc = 0x335998u;
    SET_GPR_U32(ctx, 31, 0x3359A0u);
    ctx->pc = 0x33599Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335998u;
            // 0x33599c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3359A0u; }
        if (ctx->pc != 0x3359A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3359A0u; }
        if (ctx->pc != 0x3359A0u) { return; }
    }
    ctx->pc = 0x3359A0u;
label_3359a0:
    // 0x3359a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3359a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3359a4:
    // 0x3359a4: 0xc0cd670  jal         func_3359C0
    ctx->pc = 0x3359A4u;
    SET_GPR_U32(ctx, 31, 0x3359ACu);
    ctx->pc = 0x3359C0u;
    if (runtime->hasFunction(0x3359C0u)) {
        auto targetFn = runtime->lookupFunction(0x3359C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3359ACu; }
        if (ctx->pc != 0x3359ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003359C0_0x3359c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3359ACu; }
        if (ctx->pc != 0x3359ACu) { return; }
    }
    ctx->pc = 0x3359ACu;
label_3359ac:
    // 0x3359ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3359acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3359b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3359b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3359b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3359B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3359B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3359B4u;
            // 0x3359b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3359BCu;
    // 0x3359bc: 0x0  nop
    ctx->pc = 0x3359bcu;
    // NOP
}
