#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00452EC0
// Address: 0x452ec0 - 0x453060
void sub_00452EC0_0x452ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452EC0_0x452ec0");
#endif

    switch (ctx->pc) {
        case 0x452ec0u: goto label_452ec0;
        case 0x452ec4u: goto label_452ec4;
        case 0x452ec8u: goto label_452ec8;
        case 0x452eccu: goto label_452ecc;
        case 0x452ed0u: goto label_452ed0;
        case 0x452ed4u: goto label_452ed4;
        case 0x452ed8u: goto label_452ed8;
        case 0x452edcu: goto label_452edc;
        case 0x452ee0u: goto label_452ee0;
        case 0x452ee4u: goto label_452ee4;
        case 0x452ee8u: goto label_452ee8;
        case 0x452eecu: goto label_452eec;
        case 0x452ef0u: goto label_452ef0;
        case 0x452ef4u: goto label_452ef4;
        case 0x452ef8u: goto label_452ef8;
        case 0x452efcu: goto label_452efc;
        case 0x452f00u: goto label_452f00;
        case 0x452f04u: goto label_452f04;
        case 0x452f08u: goto label_452f08;
        case 0x452f0cu: goto label_452f0c;
        case 0x452f10u: goto label_452f10;
        case 0x452f14u: goto label_452f14;
        case 0x452f18u: goto label_452f18;
        case 0x452f1cu: goto label_452f1c;
        case 0x452f20u: goto label_452f20;
        case 0x452f24u: goto label_452f24;
        case 0x452f28u: goto label_452f28;
        case 0x452f2cu: goto label_452f2c;
        case 0x452f30u: goto label_452f30;
        case 0x452f34u: goto label_452f34;
        case 0x452f38u: goto label_452f38;
        case 0x452f3cu: goto label_452f3c;
        case 0x452f40u: goto label_452f40;
        case 0x452f44u: goto label_452f44;
        case 0x452f48u: goto label_452f48;
        case 0x452f4cu: goto label_452f4c;
        case 0x452f50u: goto label_452f50;
        case 0x452f54u: goto label_452f54;
        case 0x452f58u: goto label_452f58;
        case 0x452f5cu: goto label_452f5c;
        case 0x452f60u: goto label_452f60;
        case 0x452f64u: goto label_452f64;
        case 0x452f68u: goto label_452f68;
        case 0x452f6cu: goto label_452f6c;
        case 0x452f70u: goto label_452f70;
        case 0x452f74u: goto label_452f74;
        case 0x452f78u: goto label_452f78;
        case 0x452f7cu: goto label_452f7c;
        case 0x452f80u: goto label_452f80;
        case 0x452f84u: goto label_452f84;
        case 0x452f88u: goto label_452f88;
        case 0x452f8cu: goto label_452f8c;
        case 0x452f90u: goto label_452f90;
        case 0x452f94u: goto label_452f94;
        case 0x452f98u: goto label_452f98;
        case 0x452f9cu: goto label_452f9c;
        case 0x452fa0u: goto label_452fa0;
        case 0x452fa4u: goto label_452fa4;
        case 0x452fa8u: goto label_452fa8;
        case 0x452facu: goto label_452fac;
        case 0x452fb0u: goto label_452fb0;
        case 0x452fb4u: goto label_452fb4;
        case 0x452fb8u: goto label_452fb8;
        case 0x452fbcu: goto label_452fbc;
        case 0x452fc0u: goto label_452fc0;
        case 0x452fc4u: goto label_452fc4;
        case 0x452fc8u: goto label_452fc8;
        case 0x452fccu: goto label_452fcc;
        case 0x452fd0u: goto label_452fd0;
        case 0x452fd4u: goto label_452fd4;
        case 0x452fd8u: goto label_452fd8;
        case 0x452fdcu: goto label_452fdc;
        case 0x452fe0u: goto label_452fe0;
        case 0x452fe4u: goto label_452fe4;
        case 0x452fe8u: goto label_452fe8;
        case 0x452fecu: goto label_452fec;
        case 0x452ff0u: goto label_452ff0;
        case 0x452ff4u: goto label_452ff4;
        case 0x452ff8u: goto label_452ff8;
        case 0x452ffcu: goto label_452ffc;
        case 0x453000u: goto label_453000;
        case 0x453004u: goto label_453004;
        case 0x453008u: goto label_453008;
        case 0x45300cu: goto label_45300c;
        case 0x453010u: goto label_453010;
        case 0x453014u: goto label_453014;
        case 0x453018u: goto label_453018;
        case 0x45301cu: goto label_45301c;
        case 0x453020u: goto label_453020;
        case 0x453024u: goto label_453024;
        case 0x453028u: goto label_453028;
        case 0x45302cu: goto label_45302c;
        case 0x453030u: goto label_453030;
        case 0x453034u: goto label_453034;
        case 0x453038u: goto label_453038;
        case 0x45303cu: goto label_45303c;
        case 0x453040u: goto label_453040;
        case 0x453044u: goto label_453044;
        case 0x453048u: goto label_453048;
        case 0x45304cu: goto label_45304c;
        case 0x453050u: goto label_453050;
        case 0x453054u: goto label_453054;
        case 0x453058u: goto label_453058;
        case 0x45305cu: goto label_45305c;
        default: break;
    }

    ctx->pc = 0x452ec0u;

label_452ec0:
    // 0x452ec0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x452ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_452ec4:
    // 0x452ec4: 0x3e00008  jr          $ra
label_452ec8:
    if (ctx->pc == 0x452EC8u) {
        ctx->pc = 0x452EC8u;
            // 0x452ec8: 0x8c4275a8  lw          $v0, 0x75A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30120)));
        ctx->pc = 0x452ECCu;
        goto label_452ecc;
    }
    ctx->pc = 0x452EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452EC4u;
            // 0x452ec8: 0x8c4275a8  lw          $v0, 0x75A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30120)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452ECCu;
label_452ecc:
    // 0x452ecc: 0x0  nop
    ctx->pc = 0x452eccu;
    // NOP
label_452ed0:
    // 0x452ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_452ed4:
    // 0x452ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x452ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_452ed8:
    // 0x452ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x452ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_452edc:
    // 0x452edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x452edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_452ee0:
    // 0x452ee0: 0x24910084  addiu       $s1, $a0, 0x84
    ctx->pc = 0x452ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_452ee4:
    // 0x452ee4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x452ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_452ee8:
    // 0x452ee8: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_452eec:
    if (ctx->pc == 0x452EECu) {
        ctx->pc = 0x452EECu;
            // 0x452eec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452EF0u;
        goto label_452ef0;
    }
    ctx->pc = 0x452EE8u;
    {
        const bool branch_taken_0x452ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x452EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452EE8u;
            // 0x452eec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452ee8) {
            ctx->pc = 0x452FD4u;
            goto label_452fd4;
        }
    }
    ctx->pc = 0x452EF0u;
label_452ef0:
    // 0x452ef0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x452ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_452ef4:
    // 0x452ef4: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x452ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_452ef8:
    // 0x452ef8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x452ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_452efc:
    // 0x452efc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x452efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_452f00:
    // 0x452f00: 0x320f809  jalr        $t9
label_452f04:
    if (ctx->pc == 0x452F04u) {
        ctx->pc = 0x452F08u;
        goto label_452f08;
    }
    ctx->pc = 0x452F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x452F08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x452F08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x452F08u; }
            if (ctx->pc != 0x452F08u) { return; }
        }
        }
    }
    ctx->pc = 0x452F08u;
label_452f08:
    // 0x452f08: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x452f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_452f0c:
    // 0x452f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x452f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_452f10:
    // 0x452f10: 0xc075128  jal         func_1D44A0
label_452f14:
    if (ctx->pc == 0x452F14u) {
        ctx->pc = 0x452F14u;
            // 0x452f14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x452F18u;
        goto label_452f18;
    }
    ctx->pc = 0x452F10u;
    SET_GPR_U32(ctx, 31, 0x452F18u);
    ctx->pc = 0x452F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452F10u;
            // 0x452f14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452F18u; }
        if (ctx->pc != 0x452F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452F18u; }
        if (ctx->pc != 0x452F18u) { return; }
    }
    ctx->pc = 0x452F18u;
label_452f18:
    // 0x452f18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x452f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_452f1c:
    // 0x452f1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x452f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_452f20:
    // 0x452f20: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x452f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_452f24:
    // 0x452f24: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x452f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_452f28:
    // 0x452f28: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x452f28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_452f2c:
    // 0x452f2c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_452f30:
    if (ctx->pc == 0x452F30u) {
        ctx->pc = 0x452F30u;
            // 0x452f30: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x452F34u;
        goto label_452f34;
    }
    ctx->pc = 0x452F2Cu;
    {
        const bool branch_taken_0x452f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x452f2c) {
            ctx->pc = 0x452F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x452F2Cu;
            // 0x452f30: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452F40u;
            goto label_452f40;
        }
    }
    ctx->pc = 0x452F34u;
label_452f34:
    // 0x452f34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x452f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_452f38:
    // 0x452f38: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x452f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_452f3c:
    // 0x452f3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x452f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_452f40:
    // 0x452f40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x452f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_452f44:
    // 0x452f44: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x452f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_452f48:
    // 0x452f48: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x452f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_452f4c:
    // 0x452f4c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x452f4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_452f50:
    // 0x452f50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_452f54:
    if (ctx->pc == 0x452F54u) {
        ctx->pc = 0x452F54u;
            // 0x452f54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x452F58u;
        goto label_452f58;
    }
    ctx->pc = 0x452F50u;
    {
        const bool branch_taken_0x452f50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x452f50) {
            ctx->pc = 0x452F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x452F50u;
            // 0x452f54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452F64u;
            goto label_452f64;
        }
    }
    ctx->pc = 0x452F58u;
label_452f58:
    // 0x452f58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x452f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_452f5c:
    // 0x452f5c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x452f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_452f60:
    // 0x452f60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x452f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_452f64:
    // 0x452f64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x452f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_452f68:
    // 0x452f68: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x452f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_452f6c:
    // 0x452f6c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x452f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_452f70:
    // 0x452f70: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x452f70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_452f74:
    // 0x452f74: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_452f78:
    if (ctx->pc == 0x452F78u) {
        ctx->pc = 0x452F78u;
            // 0x452f78: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x452F7Cu;
        goto label_452f7c;
    }
    ctx->pc = 0x452F74u;
    {
        const bool branch_taken_0x452f74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x452f74) {
            ctx->pc = 0x452F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x452F74u;
            // 0x452f78: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452F88u;
            goto label_452f88;
        }
    }
    ctx->pc = 0x452F7Cu;
label_452f7c:
    // 0x452f7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x452f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_452f80:
    // 0x452f80: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x452f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_452f84:
    // 0x452f84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x452f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_452f88:
    // 0x452f88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x452f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_452f8c:
    // 0x452f8c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x452f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_452f90:
    // 0x452f90: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x452f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_452f94:
    // 0x452f94: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x452f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_452f98:
    // 0x452f98: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x452f98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_452f9c:
    // 0x452f9c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_452fa0:
    if (ctx->pc == 0x452FA0u) {
        ctx->pc = 0x452FA0u;
            // 0x452fa0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x452FA4u;
        goto label_452fa4;
    }
    ctx->pc = 0x452F9Cu;
    {
        const bool branch_taken_0x452f9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x452f9c) {
            ctx->pc = 0x452FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x452F9Cu;
            // 0x452fa0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452FB0u;
            goto label_452fb0;
        }
    }
    ctx->pc = 0x452FA4u;
label_452fa4:
    // 0x452fa4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x452fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_452fa8:
    // 0x452fa8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x452fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_452fac:
    // 0x452fac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x452facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_452fb0:
    // 0x452fb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x452fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_452fb4:
    // 0x452fb4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x452fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_452fb8:
    // 0x452fb8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x452fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_452fbc:
    // 0x452fbc: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x452fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_452fc0:
    // 0x452fc0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x452fc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_452fc4:
    // 0x452fc4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_452fc8:
    if (ctx->pc == 0x452FC8u) {
        ctx->pc = 0x452FC8u;
            // 0x452fc8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x452FCCu;
        goto label_452fcc;
    }
    ctx->pc = 0x452FC4u;
    {
        const bool branch_taken_0x452fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x452fc4) {
            ctx->pc = 0x452FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x452FC4u;
            // 0x452fc8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452FD8u;
            goto label_452fd8;
        }
    }
    ctx->pc = 0x452FCCu;
label_452fcc:
    // 0x452fcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x452fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_452fd0:
    // 0x452fd0: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x452fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_452fd4:
    // 0x452fd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x452fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_452fd8:
    // 0x452fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x452fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_452fdc:
    // 0x452fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_452fe0:
    // 0x452fe0: 0x3e00008  jr          $ra
label_452fe4:
    if (ctx->pc == 0x452FE4u) {
        ctx->pc = 0x452FE4u;
            // 0x452fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x452FE8u;
        goto label_452fe8;
    }
    ctx->pc = 0x452FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452FE0u;
            // 0x452fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452FE8u;
label_452fe8:
    // 0x452fe8: 0x0  nop
    ctx->pc = 0x452fe8u;
    // NOP
label_452fec:
    // 0x452fec: 0x0  nop
    ctx->pc = 0x452fecu;
    // NOP
label_452ff0:
    // 0x452ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x452ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_452ff4:
    // 0x452ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x452ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_452ff8:
    // 0x452ff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x452ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_452ffc:
    // 0x452ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x452ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_453000:
    // 0x453000: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x453000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453004:
    // 0x453004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x453004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_453008:
    // 0x453008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x453008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45300c:
    // 0x45300c: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x45300cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_453010:
    // 0x453010: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_453014:
    if (ctx->pc == 0x453014u) {
        ctx->pc = 0x453014u;
            // 0x453014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453018u;
        goto label_453018;
    }
    ctx->pc = 0x453010u;
    {
        const bool branch_taken_0x453010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x453014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453010u;
            // 0x453014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453010) {
            ctx->pc = 0x453040u;
            goto label_453040;
        }
    }
    ctx->pc = 0x453018u;
label_453018:
    // 0x453018: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x453018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45301c:
    // 0x45301c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x45301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_453020:
    // 0x453020: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x453020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_453024:
    // 0x453024: 0xc114e98  jal         func_453A60
label_453028:
    if (ctx->pc == 0x453028u) {
        ctx->pc = 0x453028u;
            // 0x453028: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x45302Cu;
        goto label_45302c;
    }
    ctx->pc = 0x453024u;
    SET_GPR_U32(ctx, 31, 0x45302Cu);
    ctx->pc = 0x453028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453024u;
            // 0x453028: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x453A60u;
    if (runtime->hasFunction(0x453A60u)) {
        auto targetFn = runtime->lookupFunction(0x453A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45302Cu; }
        if (ctx->pc != 0x45302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00453A60_0x453a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45302Cu; }
        if (ctx->pc != 0x45302Cu) { return; }
    }
    ctx->pc = 0x45302Cu;
label_45302c:
    // 0x45302c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x45302cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_453030:
    // 0x453030: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x453030u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_453034:
    // 0x453034: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_453038:
    if (ctx->pc == 0x453038u) {
        ctx->pc = 0x453038u;
            // 0x453038: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x45303Cu;
        goto label_45303c;
    }
    ctx->pc = 0x453034u;
    {
        const bool branch_taken_0x453034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x453038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453034u;
            // 0x453038: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453034) {
            ctx->pc = 0x45301Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_45301c;
        }
    }
    ctx->pc = 0x45303Cu;
label_45303c:
    // 0x45303c: 0x0  nop
    ctx->pc = 0x45303cu;
    // NOP
label_453040:
    // 0x453040: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x453040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_453044:
    // 0x453044: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x453044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_453048:
    // 0x453048: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x453048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45304c:
    // 0x45304c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45304cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_453050:
    // 0x453050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x453050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_453054:
    // 0x453054: 0x3e00008  jr          $ra
label_453058:
    if (ctx->pc == 0x453058u) {
        ctx->pc = 0x453058u;
            // 0x453058: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x45305Cu;
        goto label_45305c;
    }
    ctx->pc = 0x453054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x453058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453054u;
            // 0x453058: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45305Cu;
label_45305c:
    // 0x45305c: 0x0  nop
    ctx->pc = 0x45305cu;
    // NOP
}
