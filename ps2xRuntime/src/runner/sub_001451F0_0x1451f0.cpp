#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001451F0
// Address: 0x1451f0 - 0x1453e0
void sub_001451F0_0x1451f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001451F0_0x1451f0");
#endif

    switch (ctx->pc) {
        case 0x14522cu: goto label_14522c;
        case 0x14525cu: goto label_14525c;
        case 0x145270u: goto label_145270;
        case 0x14527cu: goto label_14527c;
        case 0x145298u: goto label_145298;
        case 0x1452c8u: goto label_1452c8;
        case 0x1452e8u: goto label_1452e8;
        case 0x145308u: goto label_145308;
        case 0x145354u: goto label_145354;
        case 0x14536cu: goto label_14536c;
        case 0x145384u: goto label_145384;
        case 0x14539cu: goto label_14539c;
        case 0x1453c0u: goto label_1453c0;
        default: break;
    }

    ctx->pc = 0x1451f0u;

label_1451f0:
    // 0x1451f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1451f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1451f4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1451f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1451f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1451f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1451fc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1451fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x145200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145204: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x145204u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x145208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14520c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14520cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x145210: 0x8ca70030  lw          $a3, 0x30($a1)
    ctx->pc = 0x145210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x145214: 0xe68021  addu        $s0, $a3, $a2
    ctx->pc = 0x145214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x145218: 0x86060006  lh          $a2, 0x6($s0)
    ctx->pc = 0x145218u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x14521c: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14521Cu;
    {
        const bool branch_taken_0x14521c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x145220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14521Cu;
            // 0x145220: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14521c) {
            ctx->pc = 0x14522Cu;
            goto label_14522c;
        }
    }
    ctx->pc = 0x145224u;
    // 0x145224: 0xc05147c  jal         func_1451F0
    ctx->pc = 0x145224u;
    SET_GPR_U32(ctx, 31, 0x14522Cu);
    ctx->pc = 0x1451F0u;
    goto label_1451f0;
    ctx->pc = 0x14522Cu;
label_14522c:
    // 0x14522c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14522cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145230: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x145230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x145234: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x145234u;
    {
        const bool branch_taken_0x145234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x145234) {
            ctx->pc = 0x145238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145234u;
            // 0x145238: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145280u;
            goto label_145280;
        }
    }
    ctx->pc = 0x14523Cu;
    // 0x14523c: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x14523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x145240: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x145240u;
    {
        const bool branch_taken_0x145240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145240) {
            ctx->pc = 0x145244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145240u;
            // 0x145244: 0x8f8582e0  lw          $a1, -0x7D20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145264u;
            goto label_145264;
        }
    }
    ctx->pc = 0x145248u;
    // 0x145248: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x145248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14524c: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x14524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145250: 0xc60e0014  lwc1        $f14, 0x14($s0)
    ctx->pc = 0x145250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x145254: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x145254u;
    SET_GPR_U32(ctx, 31, 0x14525Cu);
    ctx->pc = 0x145258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145254u;
            // 0x145258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (runtime->hasFunction(0x1354B0u)) {
        auto targetFn = runtime->lookupFunction(0x1354B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14525Cu; }
        if (ctx->pc != 0x14525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001354B0_0x1354b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14525Cu; }
        if (ctx->pc != 0x14525Cu) { return; }
    }
    ctx->pc = 0x14525Cu;
label_14525c:
    // 0x14525c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14525Cu;
    {
        const bool branch_taken_0x14525c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14525c) {
            ctx->pc = 0x14527Cu;
            goto label_14527c;
        }
    }
    ctx->pc = 0x145264u;
label_145264:
    // 0x145264: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x145264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x145268: 0xc04cb9c  jal         func_132E70
    ctx->pc = 0x145268u;
    SET_GPR_U32(ctx, 31, 0x145270u);
    ctx->pc = 0x14526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145268u;
            // 0x14526c: 0x2606000c  addiu       $a2, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145270u; }
        if (ctx->pc != 0x145270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145270u; }
        if (ctx->pc != 0x145270u) { return; }
    }
    ctx->pc = 0x145270u;
label_145270:
    // 0x145270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145274: 0xc04ce78  jal         func_1339E0
    ctx->pc = 0x145274u;
    SET_GPR_U32(ctx, 31, 0x14527Cu);
    ctx->pc = 0x145278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145274u;
            // 0x145278: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1339E0u;
    if (runtime->hasFunction(0x1339E0u)) {
        auto targetFn = runtime->lookupFunction(0x1339E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14527Cu; }
        if (ctx->pc != 0x14527Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001339E0_0x1339e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14527Cu; }
        if (ctx->pc != 0x14527Cu) { return; }
    }
    ctx->pc = 0x14527Cu;
label_14527c:
    // 0x14527c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14527cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_145280:
    // 0x145280: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x145280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x145284: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x145284u;
    {
        const bool branch_taken_0x145284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145284) {
            ctx->pc = 0x145288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145284u;
            // 0x145288: 0x3c03001c  lui         $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1452A0u;
            goto label_1452a0;
        }
    }
    ctx->pc = 0x14528Cu;
    // 0x14528c: 0x8f8582e0  lw          $a1, -0x7D20($gp)
    ctx->pc = 0x14528cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x145290: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x145290u;
    SET_GPR_U32(ctx, 31, 0x145298u);
    ctx->pc = 0x145294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145290u;
            // 0x145294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145298u; }
        if (ctx->pc != 0x145298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145298u; }
        if (ctx->pc != 0x145298u) { return; }
    }
    ctx->pc = 0x145298u;
label_145298:
    // 0x145298: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x145298u;
    {
        const bool branch_taken_0x145298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145298u;
            // 0x14529c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145298) {
            ctx->pc = 0x14530Cu;
            goto label_14530c;
        }
    }
    ctx->pc = 0x1452A0u;
label_1452a0:
    // 0x1452a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1452a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1452a4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1452A4u;
    {
        const bool branch_taken_0x1452a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1452a4) {
            ctx->pc = 0x145308u;
            goto label_145308;
        }
    }
    ctx->pc = 0x1452ACu;
    // 0x1452ac: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1452acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1452b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1452b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1452b4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1452B4u;
    {
        const bool branch_taken_0x1452b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1452b4) {
            ctx->pc = 0x1452B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1452B4u;
            // 0x1452b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1452CCu;
            goto label_1452cc;
        }
    }
    ctx->pc = 0x1452BCu;
    // 0x1452bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1452bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452c0: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x1452C0u;
    SET_GPR_U32(ctx, 31, 0x1452C8u);
    ctx->pc = 0x1452C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1452C0u;
            // 0x1452c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452C8u; }
        if (ctx->pc != 0x1452C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452C8u; }
        if (ctx->pc != 0x1452C8u) { return; }
    }
    ctx->pc = 0x1452C8u;
label_1452c8:
    // 0x1452c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1452c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1452cc:
    // 0x1452cc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1452ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1452d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1452d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1452d4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1452D4u;
    {
        const bool branch_taken_0x1452d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1452d4) {
            ctx->pc = 0x1452D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1452D4u;
            // 0x1452d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1452ECu;
            goto label_1452ec;
        }
    }
    ctx->pc = 0x1452DCu;
    // 0x1452dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1452dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452e0: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x1452E0u;
    SET_GPR_U32(ctx, 31, 0x1452E8u);
    ctx->pc = 0x1452E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1452E0u;
            // 0x1452e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452E8u; }
        if (ctx->pc != 0x1452E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1452E8u; }
        if (ctx->pc != 0x1452E8u) { return; }
    }
    ctx->pc = 0x1452E8u;
label_1452e8:
    // 0x1452e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1452e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1452ec:
    // 0x1452ec: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1452ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1452f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1452f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1452f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1452F4u;
    {
        const bool branch_taken_0x1452f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1452f4) {
            ctx->pc = 0x145308u;
            goto label_145308;
        }
    }
    ctx->pc = 0x1452FCu;
    // 0x1452fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1452fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145300: 0xc04d78c  jal         func_135E30
    ctx->pc = 0x145300u;
    SET_GPR_U32(ctx, 31, 0x145308u);
    ctx->pc = 0x145304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145300u;
            // 0x145304: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135E30u;
    if (runtime->hasFunction(0x135E30u)) {
        auto targetFn = runtime->lookupFunction(0x135E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145308u; }
        if (ctx->pc != 0x145308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135E30_0x135e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145308u; }
        if (ctx->pc != 0x145308u) { return; }
    }
    ctx->pc = 0x145308u;
label_145308:
    // 0x145308: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x145308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14530c:
    // 0x14530c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x14530cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x145310: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x145310u;
    {
        const bool branch_taken_0x145310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x145310) {
            ctx->pc = 0x145314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145310u;
            // 0x145314: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1453A0u;
            goto label_1453a0;
        }
    }
    ctx->pc = 0x145318u;
    // 0x145318: 0x30830f00  andi        $v1, $a0, 0xF00
    ctx->pc = 0x145318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x14531c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x14531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x145320: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x145320u;
    {
        const bool branch_taken_0x145320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x145320) {
            ctx->pc = 0x145324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145320u;
            // 0x145324: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145374u;
            goto label_145374;
        }
    }
    ctx->pc = 0x145328u;
    // 0x145328: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x145328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14532c: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14532Cu;
    {
        const bool branch_taken_0x14532c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14532c) {
            ctx->pc = 0x145330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14532Cu;
            // 0x145330: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14535Cu;
            goto label_14535c;
        }
    }
    ctx->pc = 0x145334u;
    // 0x145334: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x145334u;
    {
        const bool branch_taken_0x145334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145334) {
            ctx->pc = 0x145338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145334u;
            // 0x145338: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145344u;
            goto label_145344;
        }
    }
    ctx->pc = 0x14533Cu;
    // 0x14533c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14533Cu;
    {
        const bool branch_taken_0x14533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14533Cu;
            // 0x145340: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14533c) {
            ctx->pc = 0x14538Cu;
            goto label_14538c;
        }
    }
    ctx->pc = 0x145344u;
label_145344:
    // 0x145344: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x145344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x145348: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x145348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14534c: 0xc04d384  jal         func_134E10
    ctx->pc = 0x14534Cu;
    SET_GPR_U32(ctx, 31, 0x145354u);
    ctx->pc = 0x145350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14534Cu;
            // 0x145350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134E10u;
    if (runtime->hasFunction(0x134E10u)) {
        auto targetFn = runtime->lookupFunction(0x134E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145354u; }
        if (ctx->pc != 0x145354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134E10_0x134e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145354u; }
        if (ctx->pc != 0x145354u) { return; }
    }
    ctx->pc = 0x145354u;
label_145354:
    // 0x145354: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x145354u;
    {
        const bool branch_taken_0x145354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145354) {
            ctx->pc = 0x14539Cu;
            goto label_14539c;
        }
    }
    ctx->pc = 0x14535Cu;
label_14535c:
    // 0x14535c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x14535cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x145360: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x145360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x145364: 0xc04d3f4  jal         func_134FD0
    ctx->pc = 0x145364u;
    SET_GPR_U32(ctx, 31, 0x14536Cu);
    ctx->pc = 0x145368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145364u;
            // 0x145368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FD0u;
    if (runtime->hasFunction(0x134FD0u)) {
        auto targetFn = runtime->lookupFunction(0x134FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14536Cu; }
        if (ctx->pc != 0x14536Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134FD0_0x134fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14536Cu; }
        if (ctx->pc != 0x14536Cu) { return; }
    }
    ctx->pc = 0x14536Cu;
label_14536c:
    // 0x14536c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14536Cu;
    {
        const bool branch_taken_0x14536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14536c) {
            ctx->pc = 0x14539Cu;
            goto label_14539c;
        }
    }
    ctx->pc = 0x145374u;
label_145374:
    // 0x145374: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x145374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x145378: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x145378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14537c: 0xc04d464  jal         func_135190
    ctx->pc = 0x14537Cu;
    SET_GPR_U32(ctx, 31, 0x145384u);
    ctx->pc = 0x145380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14537Cu;
            // 0x145380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135190u;
    if (runtime->hasFunction(0x135190u)) {
        auto targetFn = runtime->lookupFunction(0x135190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145384u; }
        if (ctx->pc != 0x145384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135190_0x135190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145384u; }
        if (ctx->pc != 0x145384u) { return; }
    }
    ctx->pc = 0x145384u;
label_145384:
    // 0x145384: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145384u;
    {
        const bool branch_taken_0x145384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145384) {
            ctx->pc = 0x14539Cu;
            goto label_14539c;
        }
    }
    ctx->pc = 0x14538Cu;
label_14538c:
    // 0x14538c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x14538cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x145390: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x145390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x145394: 0xc04d384  jal         func_134E10
    ctx->pc = 0x145394u;
    SET_GPR_U32(ctx, 31, 0x14539Cu);
    ctx->pc = 0x145398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145394u;
            // 0x145398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134E10u;
    if (runtime->hasFunction(0x134E10u)) {
        auto targetFn = runtime->lookupFunction(0x134E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14539Cu; }
        if (ctx->pc != 0x14539Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134E10_0x134e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14539Cu; }
        if (ctx->pc != 0x14539Cu) { return; }
    }
    ctx->pc = 0x14539Cu;
label_14539c:
    // 0x14539c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1453a0:
    // 0x1453a0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1453a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1453a4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1453A4u;
    {
        const bool branch_taken_0x1453a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1453a4) {
            ctx->pc = 0x1453A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1453A4u;
            // 0x1453a8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1453C4u;
            goto label_1453c4;
        }
    }
    ctx->pc = 0x1453ACu;
    // 0x1453ac: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x1453acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1453b0: 0xc60d0028  lwc1        $f13, 0x28($s0)
    ctx->pc = 0x1453b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1453b4: 0xc60e002c  lwc1        $f14, 0x2C($s0)
    ctx->pc = 0x1453b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1453b8: 0xc04d5a4  jal         func_135690
    ctx->pc = 0x1453B8u;
    SET_GPR_U32(ctx, 31, 0x1453C0u);
    ctx->pc = 0x1453BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1453B8u;
            // 0x1453bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135690u;
    if (runtime->hasFunction(0x135690u)) {
        auto targetFn = runtime->lookupFunction(0x135690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1453C0u; }
        if (ctx->pc != 0x1453C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135690_0x135690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1453C0u; }
        if (ctx->pc != 0x1453C0u) { return; }
    }
    ctx->pc = 0x1453C0u;
label_1453c0:
    // 0x1453c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1453c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1453c4:
    // 0x1453c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1453c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1453c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1453c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1453cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1453CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1453D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1453CCu;
            // 0x1453d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1453D4u;
    // 0x1453d4: 0x0  nop
    ctx->pc = 0x1453d4u;
    // NOP
    // 0x1453d8: 0x0  nop
    ctx->pc = 0x1453d8u;
    // NOP
    // 0x1453dc: 0x0  nop
    ctx->pc = 0x1453dcu;
    // NOP
}
