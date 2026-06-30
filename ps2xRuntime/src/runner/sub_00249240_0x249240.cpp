#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00249240
// Address: 0x249240 - 0x2493b0
void sub_00249240_0x249240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249240_0x249240");
#endif

    switch (ctx->pc) {
        case 0x249268u: goto label_249268;
        case 0x249294u: goto label_249294;
        case 0x2492dcu: goto label_2492dc;
        case 0x24933cu: goto label_24933c;
        case 0x24937cu: goto label_24937c;
        default: break;
    }

    ctx->pc = 0x249240u;

    // 0x249240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x249240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x249244: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x249244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x249248: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x249248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24924c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x249250: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x249250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x249254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x249258: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x249258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24925c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x24925Cu;
    {
        const bool branch_taken_0x24925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24925Cu;
            // 0x249260: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24925c) {
            ctx->pc = 0x249340u;
            goto label_249340;
        }
    }
    ctx->pc = 0x249264u;
    // 0x249264: 0x0  nop
    ctx->pc = 0x249264u;
    // NOP
label_249268:
    // 0x249268: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x249268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24926c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x24926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x249270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249274: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x249274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x249278: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x249278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x24927c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24927cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x249280: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x249280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x249284: 0x2443ff80  addiu       $v1, $v0, -0x80
    ctx->pc = 0x249284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x249288: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x249288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24928c: 0xc0924ec  jal         func_2493B0
    ctx->pc = 0x24928Cu;
    SET_GPR_U32(ctx, 31, 0x249294u);
    ctx->pc = 0x249290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24928Cu;
            // 0x249290: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2493B0u;
    if (runtime->hasFunction(0x2493B0u)) {
        auto targetFn = runtime->lookupFunction(0x2493B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249294u; }
        if (ctx->pc != 0x249294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002493B0_0x2493b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249294u; }
        if (ctx->pc != 0x249294u) { return; }
    }
    ctx->pc = 0x249294u;
label_249294:
    // 0x249294: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x249294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x249298: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x249298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x24929c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x24929cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2492a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2492a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2492a4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2492A4u;
    {
        const bool branch_taken_0x2492a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2492a4) {
            ctx->pc = 0x2492E8u;
            goto label_2492e8;
        }
    }
    ctx->pc = 0x2492ACu;
    // 0x2492ac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2492acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2492b0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2492b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2492b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2492b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2492b8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2492b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2492bc: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2492bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2492c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2492c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2492c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2492c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2492c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2492c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2492cc: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2492ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x2492d0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2492d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2492d4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2492D4u;
    SET_GPR_U32(ctx, 31, 0x2492DCu);
    ctx->pc = 0x2492D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2492D4u;
            // 0x2492d8: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2492DCu; }
        if (ctx->pc != 0x2492DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2492DCu; }
        if (ctx->pc != 0x2492DCu) { return; }
    }
    ctx->pc = 0x2492DCu;
label_2492dc:
    // 0x2492dc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2492dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2492e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2492e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2492e4: 0x0  nop
    ctx->pc = 0x2492e4u;
    // NOP
label_2492e8:
    // 0x2492e8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2492e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2492ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2492ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2492f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2492f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2492f4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2492F4u;
    {
        const bool branch_taken_0x2492f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2492f4) {
            ctx->pc = 0x249340u;
            goto label_249340;
        }
    }
    ctx->pc = 0x2492FCu;
    // 0x2492fc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2492fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x249300: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x249300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x249304: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x249304u;
    {
        const bool branch_taken_0x249304 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x249308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249304u;
            // 0x249308: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249304) {
            ctx->pc = 0x249328u;
            goto label_249328;
        }
    }
    ctx->pc = 0x24930Cu;
    // 0x24930c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x24930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x249310: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x249310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x249314: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x249314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x249318: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x249318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24931c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x24931Cu;
    {
        const bool branch_taken_0x24931c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24931c) {
            ctx->pc = 0x249340u;
            goto label_249340;
        }
    }
    ctx->pc = 0x249324u;
    // 0x249324: 0x0  nop
    ctx->pc = 0x249324u;
    // NOP
label_249328:
    // 0x249328: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x249328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x24932c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x24932cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x249330: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x249330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249334: 0xc0a72c0  jal         func_29CB00
    ctx->pc = 0x249334u;
    SET_GPR_U32(ctx, 31, 0x24933Cu);
    ctx->pc = 0x249338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249334u;
            // 0x249338: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CB00u;
    if (runtime->hasFunction(0x29CB00u)) {
        auto targetFn = runtime->lookupFunction(0x29CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24933Cu; }
        if (ctx->pc != 0x24933Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CB00_0x29cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24933Cu; }
        if (ctx->pc != 0x24933Cu) { return; }
    }
    ctx->pc = 0x24933Cu;
label_24933c:
    // 0x24933c: 0x0  nop
    ctx->pc = 0x24933cu;
    // NOP
label_249340:
    // 0x249340: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x249340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x249344: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x249344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x249348: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249348u;
    {
        const bool branch_taken_0x249348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x249348) {
            ctx->pc = 0x249360u;
            goto label_249360;
        }
    }
    ctx->pc = 0x249350u;
    // 0x249350: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x249350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x249354: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x249354u;
    {
        const bool branch_taken_0x249354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x249354) {
            ctx->pc = 0x249268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249268;
        }
    }
    ctx->pc = 0x24935Cu;
    // 0x24935c: 0x0  nop
    ctx->pc = 0x24935cu;
    // NOP
label_249360:
    // 0x249360: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x249364: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x249364u;
    {
        const bool branch_taken_0x249364 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x249364) {
            ctx->pc = 0x249390u;
            goto label_249390;
        }
    }
    ctx->pc = 0x24936Cu;
    // 0x24936c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x24936cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x249370: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x249370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x249374: 0xc0928dc  jal         func_24A370
    ctx->pc = 0x249374u;
    SET_GPR_U32(ctx, 31, 0x24937Cu);
    ctx->pc = 0x249378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249374u;
            // 0x249378: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A370u;
    if (runtime->hasFunction(0x24A370u)) {
        auto targetFn = runtime->lookupFunction(0x24A370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24937Cu; }
        if (ctx->pc != 0x24937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A370_0x24a370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24937Cu; }
        if (ctx->pc != 0x24937Cu) { return; }
    }
    ctx->pc = 0x24937Cu;
label_24937c:
    // 0x24937c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x24937cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x249380: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x249380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x249384: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x249384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x249388: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x249388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x24938c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x24938cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_249390:
    // 0x249390: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x249390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x249394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x249398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24939c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24939cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2493a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2493A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2493A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2493A0u;
            // 0x2493a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2493A8u;
    // 0x2493a8: 0x0  nop
    ctx->pc = 0x2493a8u;
    // NOP
    // 0x2493ac: 0x0  nop
    ctx->pc = 0x2493acu;
    // NOP
}
