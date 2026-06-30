#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E1D8
// Address: 0x17e1d8 - 0x17e360
void sub_0017E1D8_0x17e1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E1D8_0x17e1d8");
#endif

    switch (ctx->pc) {
        case 0x17e254u: goto label_17e254;
        case 0x17e25cu: goto label_17e25c;
        case 0x17e284u: goto label_17e284;
        case 0x17e2b0u: goto label_17e2b0;
        case 0x17e344u: goto label_17e344;
        case 0x17e34cu: goto label_17e34c;
        default: break;
    }

    ctx->pc = 0x17e1d8u;

    // 0x17e1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e1e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e1e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1ec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E1ECu;
    {
        const bool branch_taken_0x17e1ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1ECu;
            // 0x17e1f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1ec) {
            ctx->pc = 0x17E200u;
            goto label_17e200;
        }
    }
    ctx->pc = 0x17E1F4u;
    // 0x17e1f4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17e1f8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x17E1F8u;
    {
        const bool branch_taken_0x17e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1F8u;
            // 0x17e1fc: 0xa0406560  sb          $zero, 0x6560($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 25952), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1f8) {
            ctx->pc = 0x17E28Cu;
            goto label_17e28c;
        }
    }
    ctx->pc = 0x17E200u;
label_17e200:
    // 0x17e200: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x17e200u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e204: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x17e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17e208: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17E208u;
    {
        const bool branch_taken_0x17e208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17E20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E208u;
            // 0x17e20c: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e208) {
            ctx->pc = 0x17E240u;
            goto label_17e240;
        }
    }
    ctx->pc = 0x17E210u;
    // 0x17e210: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17E210u;
    {
        const bool branch_taken_0x17e210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17E214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E210u;
            // 0x17e214: 0x3c020063  lui         $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e210) {
            ctx->pc = 0x17E240u;
            goto label_17e240;
        }
    }
    ctx->pc = 0x17E218u;
    // 0x17e218: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17e218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x17e21c: 0x24486020  addiu       $t0, $v0, 0x6020
    ctx->pc = 0x17e21cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 24608));
    // 0x17e220: 0x24876560  addiu       $a3, $a0, 0x6560
    ctx->pc = 0x17e220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 25952));
    // 0x17e224: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x17e224u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17e228: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x17e228u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x17e22c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x17e22cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17e230: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x17e230u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x17e234: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17E234u;
    {
        const bool branch_taken_0x17e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E234u;
            // 0x17e238: 0x24916560  addiu       $s1, $a0, 0x6560 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 25952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e234) {
            ctx->pc = 0x17E24Cu;
            goto label_17e24c;
        }
    }
    ctx->pc = 0x17E23Cu;
    // 0x17e23c: 0x0  nop
    ctx->pc = 0x17e23cu;
    // NOP
label_17e240:
    // 0x17e240: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17e240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x17e244: 0xa0806560  sb          $zero, 0x6560($a0)
    ctx->pc = 0x17e244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25952), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e248: 0x24916560  addiu       $s1, $a0, 0x6560
    ctx->pc = 0x17e248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 25952));
label_17e24c:
    // 0x17e24c: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x17E24Cu;
    SET_GPR_U32(ctx, 31, 0x17E254u);
    ctx->pc = 0x17E250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E24Cu;
            // 0x17e250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E254u; }
        if (ctx->pc != 0x17E254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E254u; }
        if (ctx->pc != 0x17E254u) { return; }
    }
    ctx->pc = 0x17E254u;
label_17e254:
    // 0x17e254: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17E254u;
    SET_GPR_U32(ctx, 31, 0x17E25Cu);
    ctx->pc = 0x17E258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E254u;
            // 0x17e258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E25Cu; }
        if (ctx->pc != 0x17E25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E25Cu; }
        if (ctx->pc != 0x17E25Cu) { return; }
    }
    ctx->pc = 0x17E25Cu;
label_17e25c:
    // 0x17e25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e260: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17e260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17e264: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x17e264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17e268: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x17e268u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x17e26c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E26Cu;
    {
        const bool branch_taken_0x17e26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x17E270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E26Cu;
            // 0x17e270: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e26c) {
            ctx->pc = 0x17E27Cu;
            goto label_17e27c;
        }
    }
    ctx->pc = 0x17E274u;
    // 0x17e274: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E274u;
    {
        const bool branch_taken_0x17e274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17E278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E274u;
            // 0x17e278: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e274) {
            ctx->pc = 0x17E290u;
            goto label_17e290;
        }
    }
    ctx->pc = 0x17E27Cu;
label_17e27c:
    // 0x17e27c: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17E27Cu;
    SET_GPR_U32(ctx, 31, 0x17E284u);
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E284u; }
        if (ctx->pc != 0x17E284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E284u; }
        if (ctx->pc != 0x17E284u) { return; }
    }
    ctx->pc = 0x17E284u;
label_17e284:
    // 0x17e284: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17e288: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x17e288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_17e28c:
    // 0x17e28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e290:
    // 0x17e290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e298: 0x3e00008  jr          $ra
    ctx->pc = 0x17E298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E298u;
            // 0x17e29c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E2A0u;
    // 0x17e2a0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17e2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17E2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2A4u;
            // 0x17e2a8: 0x24426560  addiu       $v0, $v0, 0x6560 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25952));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E2ACu;
    // 0x17e2ac: 0x0  nop
    ctx->pc = 0x17e2acu;
    // NOP
label_17e2b0:
    // 0x17e2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e2b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e2b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e2bc: 0x805ed90  j           func_17B640
    ctx->pc = 0x17E2BCu;
    ctx->pc = 0x17E2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2BCu;
            // 0x17e2c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B640u;
    {
        auto targetFn = runtime->lookupFunction(0x17B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x17E2C4u;
    // 0x17e2c4: 0x0  nop
    ctx->pc = 0x17e2c4u;
    // NOP
    // 0x17e2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e2cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e2d4: 0x805ed46  j           func_17B518
    ctx->pc = 0x17E2D4u;
    ctx->pc = 0x17E2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2D4u;
            // 0x17e2d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B518u;
    {
        auto targetFn = runtime->lookupFunction(0x17B518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x17E2DCu;
    // 0x17e2dc: 0x0  nop
    ctx->pc = 0x17e2dcu;
    // NOP
    // 0x17e2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e2ec: 0x805ed56  j           func_17B558
    ctx->pc = 0x17E2ECu;
    ctx->pc = 0x17E2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2ECu;
            // 0x17e2f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B558u;
    {
        auto targetFn = runtime->lookupFunction(0x17B558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x17E2F4u;
    // 0x17e2f4: 0x0  nop
    ctx->pc = 0x17e2f4u;
    // NOP
    // 0x17e2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e2fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e304: 0x805ed5a  j           func_17B568
    ctx->pc = 0x17E304u;
    ctx->pc = 0x17E308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E304u;
            // 0x17e308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B568u;
    {
        auto targetFn = runtime->lookupFunction(0x17B568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x17E30Cu;
    // 0x17e30c: 0x0  nop
    ctx->pc = 0x17e30cu;
    // NOP
    // 0x17e310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e31c: 0x805ed70  j           func_17B5C0
    ctx->pc = 0x17E31Cu;
    ctx->pc = 0x17E320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E31Cu;
            // 0x17e320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B5C0u;
    {
        auto targetFn = runtime->lookupFunction(0x17B5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x17E324u;
    // 0x17e324: 0x0  nop
    ctx->pc = 0x17e324u;
    // NOP
    // 0x17e328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e32c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17e330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e334: 0x244266e8  addiu       $v0, $v0, 0x66E8
    ctx->pc = 0x17e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26344));
    // 0x17e338: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17e338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e33c: 0xc05ff50  jal         func_17FD40
    ctx->pc = 0x17E33Cu;
    SET_GPR_U32(ctx, 31, 0x17E344u);
    ctx->pc = 0x17E340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E33Cu;
            // 0x17e340: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FD40u;
    if (runtime->hasFunction(0x17FD40u)) {
        auto targetFn = runtime->lookupFunction(0x17FD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E344u; }
        if (ctx->pc != 0x17E344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FD40_0x17fd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E344u; }
        if (ctx->pc != 0x17E344u) { return; }
    }
    ctx->pc = 0x17E344u;
label_17e344:
    // 0x17e344: 0xc05ff74  jal         func_17FDD0
    ctx->pc = 0x17E344u;
    SET_GPR_U32(ctx, 31, 0x17E34Cu);
    ctx->pc = 0x17E348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E344u;
            // 0x17e348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FDD0u;
    if (runtime->hasFunction(0x17FDD0u)) {
        auto targetFn = runtime->lookupFunction(0x17FDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E34Cu; }
        if (ctx->pc != 0x17E34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FDD0_0x17fdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E34Cu; }
        if (ctx->pc != 0x17E34Cu) { return; }
    }
    ctx->pc = 0x17E34Cu;
label_17e34c:
    // 0x17e34c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17e350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e354: 0x244266f8  addiu       $v0, $v0, 0x66F8
    ctx->pc = 0x17e354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26360));
    // 0x17e358: 0x3e00008  jr          $ra
    ctx->pc = 0x17E358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E358u;
            // 0x17e35c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E360u;
}
