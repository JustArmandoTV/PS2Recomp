#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AB9A0
// Address: 0x4ab9a0 - 0x4abba0
void sub_004AB9A0_0x4ab9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB9A0_0x4ab9a0");
#endif

    switch (ctx->pc) {
        case 0x4ab9a0u: goto label_4ab9a0;
        case 0x4ab9a4u: goto label_4ab9a4;
        case 0x4ab9a8u: goto label_4ab9a8;
        case 0x4ab9acu: goto label_4ab9ac;
        case 0x4ab9b0u: goto label_4ab9b0;
        case 0x4ab9b4u: goto label_4ab9b4;
        case 0x4ab9b8u: goto label_4ab9b8;
        case 0x4ab9bcu: goto label_4ab9bc;
        case 0x4ab9c0u: goto label_4ab9c0;
        case 0x4ab9c4u: goto label_4ab9c4;
        case 0x4ab9c8u: goto label_4ab9c8;
        case 0x4ab9ccu: goto label_4ab9cc;
        case 0x4ab9d0u: goto label_4ab9d0;
        case 0x4ab9d4u: goto label_4ab9d4;
        case 0x4ab9d8u: goto label_4ab9d8;
        case 0x4ab9dcu: goto label_4ab9dc;
        case 0x4ab9e0u: goto label_4ab9e0;
        case 0x4ab9e4u: goto label_4ab9e4;
        case 0x4ab9e8u: goto label_4ab9e8;
        case 0x4ab9ecu: goto label_4ab9ec;
        case 0x4ab9f0u: goto label_4ab9f0;
        case 0x4ab9f4u: goto label_4ab9f4;
        case 0x4ab9f8u: goto label_4ab9f8;
        case 0x4ab9fcu: goto label_4ab9fc;
        case 0x4aba00u: goto label_4aba00;
        case 0x4aba04u: goto label_4aba04;
        case 0x4aba08u: goto label_4aba08;
        case 0x4aba0cu: goto label_4aba0c;
        case 0x4aba10u: goto label_4aba10;
        case 0x4aba14u: goto label_4aba14;
        case 0x4aba18u: goto label_4aba18;
        case 0x4aba1cu: goto label_4aba1c;
        case 0x4aba20u: goto label_4aba20;
        case 0x4aba24u: goto label_4aba24;
        case 0x4aba28u: goto label_4aba28;
        case 0x4aba2cu: goto label_4aba2c;
        case 0x4aba30u: goto label_4aba30;
        case 0x4aba34u: goto label_4aba34;
        case 0x4aba38u: goto label_4aba38;
        case 0x4aba3cu: goto label_4aba3c;
        case 0x4aba40u: goto label_4aba40;
        case 0x4aba44u: goto label_4aba44;
        case 0x4aba48u: goto label_4aba48;
        case 0x4aba4cu: goto label_4aba4c;
        case 0x4aba50u: goto label_4aba50;
        case 0x4aba54u: goto label_4aba54;
        case 0x4aba58u: goto label_4aba58;
        case 0x4aba5cu: goto label_4aba5c;
        case 0x4aba60u: goto label_4aba60;
        case 0x4aba64u: goto label_4aba64;
        case 0x4aba68u: goto label_4aba68;
        case 0x4aba6cu: goto label_4aba6c;
        case 0x4aba70u: goto label_4aba70;
        case 0x4aba74u: goto label_4aba74;
        case 0x4aba78u: goto label_4aba78;
        case 0x4aba7cu: goto label_4aba7c;
        case 0x4aba80u: goto label_4aba80;
        case 0x4aba84u: goto label_4aba84;
        case 0x4aba88u: goto label_4aba88;
        case 0x4aba8cu: goto label_4aba8c;
        case 0x4aba90u: goto label_4aba90;
        case 0x4aba94u: goto label_4aba94;
        case 0x4aba98u: goto label_4aba98;
        case 0x4aba9cu: goto label_4aba9c;
        case 0x4abaa0u: goto label_4abaa0;
        case 0x4abaa4u: goto label_4abaa4;
        case 0x4abaa8u: goto label_4abaa8;
        case 0x4abaacu: goto label_4abaac;
        case 0x4abab0u: goto label_4abab0;
        case 0x4abab4u: goto label_4abab4;
        case 0x4abab8u: goto label_4abab8;
        case 0x4ababcu: goto label_4ababc;
        case 0x4abac0u: goto label_4abac0;
        case 0x4abac4u: goto label_4abac4;
        case 0x4abac8u: goto label_4abac8;
        case 0x4abaccu: goto label_4abacc;
        case 0x4abad0u: goto label_4abad0;
        case 0x4abad4u: goto label_4abad4;
        case 0x4abad8u: goto label_4abad8;
        case 0x4abadcu: goto label_4abadc;
        case 0x4abae0u: goto label_4abae0;
        case 0x4abae4u: goto label_4abae4;
        case 0x4abae8u: goto label_4abae8;
        case 0x4abaecu: goto label_4abaec;
        case 0x4abaf0u: goto label_4abaf0;
        case 0x4abaf4u: goto label_4abaf4;
        case 0x4abaf8u: goto label_4abaf8;
        case 0x4abafcu: goto label_4abafc;
        case 0x4abb00u: goto label_4abb00;
        case 0x4abb04u: goto label_4abb04;
        case 0x4abb08u: goto label_4abb08;
        case 0x4abb0cu: goto label_4abb0c;
        case 0x4abb10u: goto label_4abb10;
        case 0x4abb14u: goto label_4abb14;
        case 0x4abb18u: goto label_4abb18;
        case 0x4abb1cu: goto label_4abb1c;
        case 0x4abb20u: goto label_4abb20;
        case 0x4abb24u: goto label_4abb24;
        case 0x4abb28u: goto label_4abb28;
        case 0x4abb2cu: goto label_4abb2c;
        case 0x4abb30u: goto label_4abb30;
        case 0x4abb34u: goto label_4abb34;
        case 0x4abb38u: goto label_4abb38;
        case 0x4abb3cu: goto label_4abb3c;
        case 0x4abb40u: goto label_4abb40;
        case 0x4abb44u: goto label_4abb44;
        case 0x4abb48u: goto label_4abb48;
        case 0x4abb4cu: goto label_4abb4c;
        case 0x4abb50u: goto label_4abb50;
        case 0x4abb54u: goto label_4abb54;
        case 0x4abb58u: goto label_4abb58;
        case 0x4abb5cu: goto label_4abb5c;
        case 0x4abb60u: goto label_4abb60;
        case 0x4abb64u: goto label_4abb64;
        case 0x4abb68u: goto label_4abb68;
        case 0x4abb6cu: goto label_4abb6c;
        case 0x4abb70u: goto label_4abb70;
        case 0x4abb74u: goto label_4abb74;
        case 0x4abb78u: goto label_4abb78;
        case 0x4abb7cu: goto label_4abb7c;
        case 0x4abb80u: goto label_4abb80;
        case 0x4abb84u: goto label_4abb84;
        case 0x4abb88u: goto label_4abb88;
        case 0x4abb8cu: goto label_4abb8c;
        case 0x4abb90u: goto label_4abb90;
        case 0x4abb94u: goto label_4abb94;
        case 0x4abb98u: goto label_4abb98;
        case 0x4abb9cu: goto label_4abb9c;
        default: break;
    }

    ctx->pc = 0x4ab9a0u;

label_4ab9a0:
    // 0x4ab9a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ab9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ab9a4:
    // 0x4ab9a4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4ab9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4ab9a8:
    // 0x4ab9a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ab9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ab9ac:
    // 0x4ab9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ab9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ab9b0:
    // 0x4ab9b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ab9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ab9b4:
    // 0x4ab9b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ab9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ab9b8:
    // 0x4ab9b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ab9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4ab9bc:
    // 0x4ab9bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ab9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ab9c0:
    // 0x4ab9c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4ab9c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4ab9c4:
    // 0x4ab9c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ab9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ab9c8:
    // 0x4ab9c8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4ab9c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_4ab9cc:
    // 0x4ab9cc: 0xc0ee760  jal         func_3B9D80
label_4ab9d0:
    if (ctx->pc == 0x4AB9D0u) {
        ctx->pc = 0x4AB9D0u;
            // 0x4ab9d0: 0x3445af28  ori         $a1, $v0, 0xAF28 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44840);
        ctx->pc = 0x4AB9D4u;
        goto label_4ab9d4;
    }
    ctx->pc = 0x4AB9CCu;
    SET_GPR_U32(ctx, 31, 0x4AB9D4u);
    ctx->pc = 0x4AB9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AB9CCu;
            // 0x4ab9d0: 0x3445af28  ori         $a1, $v0, 0xAF28 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44840);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB9D4u; }
        if (ctx->pc != 0x4AB9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AB9D4u; }
        if (ctx->pc != 0x4AB9D4u) { return; }
    }
    ctx->pc = 0x4AB9D4u;
label_4ab9d4:
    // 0x4ab9d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ab9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ab9d8:
    // 0x4ab9d8: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4ab9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4ab9dc:
    // 0x4ab9dc: 0x244203e0  addiu       $v0, $v0, 0x3E0
    ctx->pc = 0x4ab9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
label_4ab9e0:
    // 0x4ab9e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ab9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ab9e4:
    // 0x4ab9e4: 0xae110058  sw          $s1, 0x58($s0)
    ctx->pc = 0x4ab9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 17));
label_4ab9e8:
    // 0x4ab9e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ab9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ab9ec:
    // 0x4ab9ec: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x4ab9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_4ab9f0:
    // 0x4ab9f0: 0xe6140060  swc1        $f20, 0x60($s0)
    ctx->pc = 0x4ab9f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_4ab9f4:
    // 0x4ab9f4: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x4ab9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_4ab9f8:
    // 0x4ab9f8: 0xa600006a  sh          $zero, 0x6A($s0)
    ctx->pc = 0x4ab9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_4ab9fc:
    // 0x4ab9fc: 0xa600006c  sh          $zero, 0x6C($s0)
    ctx->pc = 0x4ab9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 0));
label_4aba00:
    // 0x4aba00: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x4aba00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_4aba04:
    // 0x4aba04: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x4aba04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_4aba08:
    // 0x4aba08: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x4aba08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_4aba0c:
    // 0x4aba0c: 0x8c63a988  lw          $v1, -0x5678($v1)
    ctx->pc = 0x4aba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945160)));
label_4aba10:
    // 0x4aba10: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4aba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4aba14:
    // 0x4aba14: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x4aba14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_4aba18:
    // 0x4aba18: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4aba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4aba1c:
    // 0x4aba1c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x4aba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4aba20:
    // 0x4aba20: 0x8c420780  lw          $v0, 0x780($v0)
    ctx->pc = 0x4aba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_4aba24:
    // 0x4aba24: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4aba24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4aba28:
    // 0x4aba28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4aba2c:
    if (ctx->pc == 0x4ABA2Cu) {
        ctx->pc = 0x4ABA30u;
        goto label_4aba30;
    }
    ctx->pc = 0x4ABA28u;
    {
        const bool branch_taken_0x4aba28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aba28) {
            ctx->pc = 0x4ABA4Cu;
            goto label_4aba4c;
        }
    }
    ctx->pc = 0x4ABA30u;
label_4aba30:
    // 0x4aba30: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4aba30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4aba34:
    // 0x4aba34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aba34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4aba38:
    // 0x4aba38: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4aba38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4aba3c:
    // 0x4aba3c: 0x320f809  jalr        $t9
label_4aba40:
    if (ctx->pc == 0x4ABA40u) {
        ctx->pc = 0x4ABA40u;
            // 0x4aba40: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4ABA44u;
        goto label_4aba44;
    }
    ctx->pc = 0x4ABA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ABA44u);
        ctx->pc = 0x4ABA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABA3Cu;
            // 0x4aba40: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ABA44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ABA44u; }
            if (ctx->pc != 0x4ABA44u) { return; }
        }
        }
    }
    ctx->pc = 0x4ABA44u;
label_4aba44:
    // 0x4aba44: 0x10000010  b           . + 4 + (0x10 << 2)
label_4aba48:
    if (ctx->pc == 0x4ABA48u) {
        ctx->pc = 0x4ABA48u;
            // 0x4aba48: 0xc6010060  lwc1        $f1, 0x60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4ABA4Cu;
        goto label_4aba4c;
    }
    ctx->pc = 0x4ABA44u;
    {
        const bool branch_taken_0x4aba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABA44u;
            // 0x4aba48: 0xc6010060  lwc1        $f1, 0x60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aba44) {
            ctx->pc = 0x4ABA88u;
            goto label_4aba88;
        }
    }
    ctx->pc = 0x4ABA4Cu;
label_4aba4c:
    // 0x4aba4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4aba50:
    // 0x4aba50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4aba50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4aba54:
    // 0x4aba54: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x4aba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4aba58:
    // 0x4aba58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4aba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4aba5c:
    // 0x4aba5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4aba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4aba60:
    // 0x4aba60: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x4aba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
label_4aba64:
    // 0x4aba64: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4aba64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4aba68:
    // 0x4aba68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4aba6c:
    if (ctx->pc == 0x4ABA6Cu) {
        ctx->pc = 0x4ABA70u;
        goto label_4aba70;
    }
    ctx->pc = 0x4ABA68u;
    {
        const bool branch_taken_0x4aba68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aba68) {
            ctx->pc = 0x4ABA84u;
            goto label_4aba84;
        }
    }
    ctx->pc = 0x4ABA70u;
label_4aba70:
    // 0x4aba70: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4aba70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4aba74:
    // 0x4aba74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4aba78:
    // 0x4aba78: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4aba78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4aba7c:
    // 0x4aba7c: 0x320f809  jalr        $t9
label_4aba80:
    if (ctx->pc == 0x4ABA80u) {
        ctx->pc = 0x4ABA80u;
            // 0x4aba80: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4ABA84u;
        goto label_4aba84;
    }
    ctx->pc = 0x4ABA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ABA84u);
        ctx->pc = 0x4ABA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABA7Cu;
            // 0x4aba80: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ABA84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ABA84u; }
            if (ctx->pc != 0x4ABA84u) { return; }
        }
        }
    }
    ctx->pc = 0x4ABA84u;
label_4aba84:
    // 0x4aba84: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x4aba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4aba88:
    // 0x4aba88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4aba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4aba8c:
    // 0x4aba8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4aba8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4aba90:
    // 0x4aba90: 0x0  nop
    ctx->pc = 0x4aba90u;
    // NOP
label_4aba94:
    // 0x4aba94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4aba94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4aba98:
    // 0x4aba98: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4aba9c:
    if (ctx->pc == 0x4ABA9Cu) {
        ctx->pc = 0x4ABAA0u;
        goto label_4abaa0;
    }
    ctx->pc = 0x4ABA98u;
    {
        const bool branch_taken_0x4aba98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4aba98) {
            ctx->pc = 0x4ABAB4u;
            goto label_4abab4;
        }
    }
    ctx->pc = 0x4ABAA0u;
label_4abaa0:
    // 0x4abaa0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4abaa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4abaa4:
    // 0x4abaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4abaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4abaa8:
    // 0x4abaa8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4abaa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4abaac:
    // 0x4abaac: 0x320f809  jalr        $t9
label_4abab0:
    if (ctx->pc == 0x4ABAB0u) {
        ctx->pc = 0x4ABAB0u;
            // 0x4abab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ABAB4u;
        goto label_4abab4;
    }
    ctx->pc = 0x4ABAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ABAB4u);
        ctx->pc = 0x4ABAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABAACu;
            // 0x4abab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ABAB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ABAB4u; }
            if (ctx->pc != 0x4ABAB4u) { return; }
        }
        }
    }
    ctx->pc = 0x4ABAB4u;
label_4abab4:
    // 0x4abab4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4abab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4abab8:
    // 0x4abab8: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4abab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4ababc:
    // 0x4ababc: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x4ababcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4abac0:
    // 0x4abac0: 0x2463a850  addiu       $v1, $v1, -0x57B0
    ctx->pc = 0x4abac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944848));
label_4abac4:
    // 0x4abac4: 0x8c51a988  lw          $s1, -0x5678($v0)
    ctx->pc = 0x4abac4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945160)));
label_4abac8:
    // 0x4abac8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4abac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4abacc:
    // 0x4abacc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x4abaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4abad0:
    // 0x4abad0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4abad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4abad4:
    // 0x4abad4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4abad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4abad8:
    // 0x4abad8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4abad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4abadc:
    // 0x4abadc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4abadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4abae0:
    // 0x4abae0: 0xc040180  jal         func_100600
label_4abae4:
    if (ctx->pc == 0x4ABAE4u) {
        ctx->pc = 0x4ABAE4u;
            // 0x4abae4: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4ABAE8u;
        goto label_4abae8;
    }
    ctx->pc = 0x4ABAE0u;
    SET_GPR_U32(ctx, 31, 0x4ABAE8u);
    ctx->pc = 0x4ABAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABAE0u;
            // 0x4abae4: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABAE8u; }
        if (ctx->pc != 0x4ABAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABAE8u; }
        if (ctx->pc != 0x4ABAE8u) { return; }
    }
    ctx->pc = 0x4ABAE8u;
label_4abae8:
    // 0x4abae8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4abaec:
    if (ctx->pc == 0x4ABAECu) {
        ctx->pc = 0x4ABAECu;
            // 0x4abaec: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x4ABAF0u;
        goto label_4abaf0;
    }
    ctx->pc = 0x4ABAE8u;
    {
        const bool branch_taken_0x4abae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abae8) {
            ctx->pc = 0x4ABAECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABAE8u;
            // 0x4abaec: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ABB1Cu;
            goto label_4abb1c;
        }
    }
    ctx->pc = 0x4ABAF0u;
label_4abaf0:
    // 0x4abaf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4abaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4abaf4:
    // 0x4abaf4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4abaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4abaf8:
    // 0x4abaf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4abaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4abafc:
    // 0x4abafc: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x4abafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4abb00:
    // 0x4abb00: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x4abb00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_4abb04:
    // 0x4abb04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4abb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4abb08:
    // 0x4abb08: 0x26070074  addiu       $a3, $s0, 0x74
    ctx->pc = 0x4abb08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_4abb0c:
    // 0x4abb0c: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x4abb0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_4abb10:
    // 0x4abb10: 0xc1109e0  jal         func_442780
label_4abb14:
    if (ctx->pc == 0x4ABB14u) {
        ctx->pc = 0x4ABB14u;
            // 0x4abb14: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4ABB18u;
        goto label_4abb18;
    }
    ctx->pc = 0x4ABB10u;
    SET_GPR_U32(ctx, 31, 0x4ABB18u);
    ctx->pc = 0x4ABB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABB10u;
            // 0x4abb14: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABB18u; }
        if (ctx->pc != 0x4ABB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABB18u; }
        if (ctx->pc != 0x4ABB18u) { return; }
    }
    ctx->pc = 0x4ABB18u;
label_4abb18:
    // 0x4abb18: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x4abb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_4abb1c:
    // 0x4abb1c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4abb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4abb20:
    // 0x4abb20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4abb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4abb24:
    // 0x4abb24: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x4abb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4abb28:
    // 0x4abb28: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4abb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_4abb2c:
    // 0x4abb2c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4abb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_4abb30:
    // 0x4abb30: 0xc040180  jal         func_100600
label_4abb34:
    if (ctx->pc == 0x4ABB34u) {
        ctx->pc = 0x4ABB34u;
            // 0x4abb34: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->pc = 0x4ABB38u;
        goto label_4abb38;
    }
    ctx->pc = 0x4ABB30u;
    SET_GPR_U32(ctx, 31, 0x4ABB38u);
    ctx->pc = 0x4ABB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABB30u;
            // 0x4abb34: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABB38u; }
        if (ctx->pc != 0x4ABB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABB38u; }
        if (ctx->pc != 0x4ABB38u) { return; }
    }
    ctx->pc = 0x4ABB38u;
label_4abb38:
    // 0x4abb38: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4abb3c:
    if (ctx->pc == 0x4ABB3Cu) {
        ctx->pc = 0x4ABB3Cu;
            // 0x4abb3c: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x4ABB40u;
        goto label_4abb40;
    }
    ctx->pc = 0x4ABB38u;
    {
        const bool branch_taken_0x4abb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abb38) {
            ctx->pc = 0x4ABB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABB38u;
            // 0x4abb3c: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ABB6Cu;
            goto label_4abb6c;
        }
    }
    ctx->pc = 0x4ABB40u;
label_4abb40:
    // 0x4abb40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4abb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4abb44:
    // 0x4abb44: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4abb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4abb48:
    // 0x4abb48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4abb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4abb4c:
    // 0x4abb4c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x4abb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4abb50:
    // 0x4abb50: 0xc62c002c  lwc1        $f12, 0x2C($s1)
    ctx->pc = 0x4abb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4abb54:
    // 0x4abb54: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x4abb54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_4abb58:
    // 0x4abb58: 0x26070078  addiu       $a3, $s0, 0x78
    ctx->pc = 0x4abb58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_4abb5c:
    // 0x4abb5c: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x4abb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_4abb60:
    // 0x4abb60: 0xc1109e0  jal         func_442780
label_4abb64:
    if (ctx->pc == 0x4ABB64u) {
        ctx->pc = 0x4ABB64u;
            // 0x4abb64: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4ABB68u;
        goto label_4abb68;
    }
    ctx->pc = 0x4ABB60u;
    SET_GPR_U32(ctx, 31, 0x4ABB68u);
    ctx->pc = 0x4ABB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABB60u;
            // 0x4abb64: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABB68u; }
        if (ctx->pc != 0x4ABB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABB68u; }
        if (ctx->pc != 0x4ABB68u) { return; }
    }
    ctx->pc = 0x4ABB68u;
label_4abb68:
    // 0x4abb68: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x4abb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_4abb6c:
    // 0x4abb6c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4abb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4abb70:
    // 0x4abb70: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4abb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_4abb74:
    // 0x4abb74: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4abb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_4abb78:
    // 0x4abb78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4abb78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4abb7c:
    // 0x4abb7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4abb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4abb80:
    // 0x4abb80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4abb80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4abb84:
    // 0x4abb84: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4abb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4abb88:
    // 0x4abb88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4abb88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4abb8c:
    // 0x4abb8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4abb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4abb90:
    // 0x4abb90: 0x3e00008  jr          $ra
label_4abb94:
    if (ctx->pc == 0x4ABB94u) {
        ctx->pc = 0x4ABB94u;
            // 0x4abb94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4ABB98u;
        goto label_4abb98;
    }
    ctx->pc = 0x4ABB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABB90u;
            // 0x4abb94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ABB98u;
label_4abb98:
    // 0x4abb98: 0x0  nop
    ctx->pc = 0x4abb98u;
    // NOP
label_4abb9c:
    // 0x4abb9c: 0x0  nop
    ctx->pc = 0x4abb9cu;
    // NOP
}
