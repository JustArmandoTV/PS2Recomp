#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00414410
// Address: 0x414410 - 0x4145b0
void sub_00414410_0x414410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414410_0x414410");
#endif

    switch (ctx->pc) {
        case 0x414494u: goto label_414494;
        case 0x4144a0u: goto label_4144a0;
        case 0x4144e0u: goto label_4144e0;
        case 0x41454cu: goto label_41454c;
        case 0x41457cu: goto label_41457c;
        case 0x414594u: goto label_414594;
        default: break;
    }

    ctx->pc = 0x414410u;

    // 0x414410: 0x3e00008  jr          $ra
    ctx->pc = 0x414410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414410u;
            // 0x414414: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414418u;
    // 0x414418: 0x0  nop
    ctx->pc = 0x414418u;
    // NOP
    // 0x41441c: 0x0  nop
    ctx->pc = 0x41441cu;
    // NOP
    // 0x414420: 0x3e00008  jr          $ra
    ctx->pc = 0x414420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414420u;
            // 0x414424: 0x24025208  addiu       $v0, $zero, 0x5208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414428u;
    // 0x414428: 0x0  nop
    ctx->pc = 0x414428u;
    // NOP
    // 0x41442c: 0x0  nop
    ctx->pc = 0x41442cu;
    // NOP
    // 0x414430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x414430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x414434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x414434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x414438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x414438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41443c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x41443cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x414440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x414440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x414444: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x414444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x414448: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x414448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41444c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x41444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x414450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x414450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x414454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x414454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x414458: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x414458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x41445c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x41445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414460: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x414460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x414464: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x414464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x414468: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x414468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x41446c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x41446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x414470: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x414470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x414474: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x414474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x414478: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x414478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x41447c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x41447cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x414480: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x414480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x414484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x414484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x414488: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x414488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x41448c: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x41448Cu;
    SET_GPR_U32(ctx, 31, 0x414494u);
    ctx->pc = 0x414490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41448Cu;
            // 0x414490: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414494u; }
        if (ctx->pc != 0x414494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414494u; }
        if (ctx->pc != 0x414494u) { return; }
    }
    ctx->pc = 0x414494u;
label_414494:
    // 0x414494: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x414494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x414498: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x414498u;
    SET_GPR_U32(ctx, 31, 0x4144A0u);
    ctx->pc = 0x41449Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414498u;
            // 0x41449c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4144A0u; }
        if (ctx->pc != 0x4144A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4144A0u; }
        if (ctx->pc != 0x4144A0u) { return; }
    }
    ctx->pc = 0x4144A0u;
label_4144a0:
    // 0x4144a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4144a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4144a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4144a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4144a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4144A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4144ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4144A8u;
            // 0x4144ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4144B0u;
    // 0x4144b0: 0x81046a0  j           func_411A80
    ctx->pc = 0x4144B0u;
    ctx->pc = 0x4144B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4144B0u;
            // 0x4144b4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x411A80u;
    {
        auto targetFn = runtime->lookupFunction(0x411A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4144B8u;
    // 0x4144b8: 0x0  nop
    ctx->pc = 0x4144b8u;
    // NOP
    // 0x4144bc: 0x0  nop
    ctx->pc = 0x4144bcu;
    // NOP
    // 0x4144c0: 0x8104bbc  j           func_412EF0
    ctx->pc = 0x4144C0u;
    ctx->pc = 0x4144C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4144C0u;
            // 0x4144c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x412EF0u;
    {
        auto targetFn = runtime->lookupFunction(0x412EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4144C8u;
    // 0x4144c8: 0x0  nop
    ctx->pc = 0x4144c8u;
    // NOP
    // 0x4144cc: 0x0  nop
    ctx->pc = 0x4144ccu;
    // NOP
    // 0x4144d0: 0x8104588  j           func_411620
    ctx->pc = 0x4144D0u;
    ctx->pc = 0x4144D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4144D0u;
            // 0x4144d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x411620u;
    {
        auto targetFn = runtime->lookupFunction(0x411620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4144D8u;
    // 0x4144d8: 0x0  nop
    ctx->pc = 0x4144d8u;
    // NOP
    // 0x4144dc: 0x0  nop
    ctx->pc = 0x4144dcu;
    // NOP
label_4144e0:
    // 0x4144e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4144e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4144e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4144e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4144e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4144e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4144ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4144ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4144f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4144f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4144f4: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x4144F4u;
    {
        const bool branch_taken_0x4144f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4144F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4144F4u;
            // 0x4144f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4144f4) {
            ctx->pc = 0x414594u;
            goto label_414594;
        }
    }
    ctx->pc = 0x4144FCu;
    // 0x4144fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4144fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x414500: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x414500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x414504: 0x2463b090  addiu       $v1, $v1, -0x4F70
    ctx->pc = 0x414504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946960));
    // 0x414508: 0x2442b0c8  addiu       $v0, $v0, -0x4F38
    ctx->pc = 0x414508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947016));
    // 0x41450c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41450cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x414510: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x414510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x414514: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x414514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x414518: 0x2463b0d8  addiu       $v1, $v1, -0x4F28
    ctx->pc = 0x414518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947032));
    // 0x41451c: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x41451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x414520: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x414520u;
    {
        const bool branch_taken_0x414520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414520u;
            // 0x414524: 0xae230090  sw          $v1, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414520) {
            ctx->pc = 0x414550u;
            goto label_414550;
        }
    }
    ctx->pc = 0x414528u;
    // 0x414528: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x414528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x41452c: 0x24422720  addiu       $v0, $v0, 0x2720
    ctx->pc = 0x41452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10016));
    // 0x414530: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x414530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x414534: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x414534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x414538: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x414538u;
    {
        const bool branch_taken_0x414538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x414538) {
            ctx->pc = 0x414550u;
            goto label_414550;
        }
    }
    ctx->pc = 0x414540u;
    // 0x414540: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x414540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x414544: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x414544u;
    SET_GPR_U32(ctx, 31, 0x41454Cu);
    ctx->pc = 0x414548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414544u;
            // 0x414548: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41454Cu; }
        if (ctx->pc != 0x41454Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41454Cu; }
        if (ctx->pc != 0x41454Cu) { return; }
    }
    ctx->pc = 0x41454Cu;
label_41454c:
    // 0x41454c: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x41454cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_414550:
    // 0x414550: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x414550u;
    {
        const bool branch_taken_0x414550 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x414550) {
            ctx->pc = 0x414554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414550u;
            // 0x414554: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414580u;
            goto label_414580;
        }
    }
    ctx->pc = 0x414558u;
    // 0x414558: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x414558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41455c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x414560: 0x2463b170  addiu       $v1, $v1, -0x4E90
    ctx->pc = 0x414560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947184));
    // 0x414564: 0x2442b1a8  addiu       $v0, $v0, -0x4E58
    ctx->pc = 0x414564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947240));
    // 0x414568: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x414568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x41456c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414570: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x414570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x414574: 0xc10516c  jal         func_4145B0
    ctx->pc = 0x414574u;
    SET_GPR_U32(ctx, 31, 0x41457Cu);
    ctx->pc = 0x414578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414574u;
            // 0x414578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4145B0u;
    if (runtime->hasFunction(0x4145B0u)) {
        auto targetFn = runtime->lookupFunction(0x4145B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41457Cu; }
        if (ctx->pc != 0x41457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004145B0_0x4145b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41457Cu; }
        if (ctx->pc != 0x41457Cu) { return; }
    }
    ctx->pc = 0x41457Cu;
label_41457c:
    // 0x41457c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41457cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_414580:
    // 0x414580: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x414580u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x414584: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x414584u;
    {
        const bool branch_taken_0x414584 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x414584) {
            ctx->pc = 0x414588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414584u;
            // 0x414588: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414598u;
            goto label_414598;
        }
    }
    ctx->pc = 0x41458Cu;
    // 0x41458c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41458Cu;
    SET_GPR_U32(ctx, 31, 0x414594u);
    ctx->pc = 0x414590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41458Cu;
            // 0x414590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414594u; }
        if (ctx->pc != 0x414594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414594u; }
        if (ctx->pc != 0x414594u) { return; }
    }
    ctx->pc = 0x414594u;
label_414594:
    // 0x414594: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x414594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414598:
    // 0x414598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x414598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41459c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41459cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4145a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4145a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4145a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4145A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4145A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4145A4u;
            // 0x4145a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4145ACu;
    // 0x4145ac: 0x0  nop
    ctx->pc = 0x4145acu;
    // NOP
}
