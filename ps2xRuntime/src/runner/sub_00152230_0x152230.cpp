#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152230
// Address: 0x152230 - 0x152380
void sub_00152230_0x152230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152230_0x152230");
#endif

    switch (ctx->pc) {
        case 0x1522f8u: goto label_1522f8;
        case 0x15230cu: goto label_15230c;
        case 0x152320u: goto label_152320;
        case 0x152334u: goto label_152334;
        default: break;
    }

    ctx->pc = 0x152230u;

    // 0x152230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152234: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x152234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x152238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15223c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152240: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x152240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152244: 0x50c30007  beql        $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x152244u;
    {
        const bool branch_taken_0x152244 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x152244) {
            ctx->pc = 0x152248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152244u;
            // 0x152248: 0x84a6000a  lh          $a2, 0xA($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152264u;
            goto label_152264;
        }
    }
    ctx->pc = 0x15224Cu;
    // 0x15224c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x15224cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x152250: 0x50c30046  beql        $a2, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x152250u;
    {
        const bool branch_taken_0x152250 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x152250) {
            ctx->pc = 0x152254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152250u;
            // 0x152254: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15236Cu;
            goto label_15236c;
        }
    }
    ctx->pc = 0x152258u;
    // 0x152258: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x152258u;
    {
        const bool branch_taken_0x152258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15225Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152258u;
            // 0x15225c: 0x8c870004  lw          $a3, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152258) {
            ctx->pc = 0x152288u;
            goto label_152288;
        }
    }
    ctx->pc = 0x152260u;
    // 0x152260: 0x84a6000a  lh          $a2, 0xA($a1)
    ctx->pc = 0x152260u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_152264:
    // 0x152264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152268: 0x14c3003f  bne         $a2, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x152268u;
    {
        const bool branch_taken_0x152268 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x15226Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152268u;
            // 0x15226c: 0x8c870004  lw          $a3, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152268) {
            ctx->pc = 0x152368u;
            goto label_152368;
        }
    }
    ctx->pc = 0x152270u;
    // 0x152270: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x152270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x152274: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x152274u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x152278: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x152278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15227c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15227cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x152280: 0x2470001c  addiu       $s0, $v1, 0x1C
    ctx->pc = 0x152280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x152284: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x152284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_152288:
    // 0x152288: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x152288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15228c: 0x8ce60040  lw          $a2, 0x40($a3)
    ctx->pc = 0x15228cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x152290: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x152290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x152294: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x152294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x152298: 0xace40040  sw          $a0, 0x40($a3)
    ctx->pc = 0x152298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 4));
    // 0x15229c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x15229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1522a0: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x1522a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1522a4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1522a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1522a8: 0x30a50e77  andi        $a1, $a1, 0xE77
    ctx->pc = 0x1522a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3703);
    // 0x1522ac: 0x50a3001f  beql        $a1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1522ACu;
    {
        const bool branch_taken_0x1522ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1522ac) {
            ctx->pc = 0x1522B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1522ACu;
            // 0x1522b0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15232Cu;
            goto label_15232c;
        }
    }
    ctx->pc = 0x1522B4u;
    // 0x1522b4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1522b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1522b8: 0x50a30017  beql        $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1522B8u;
    {
        const bool branch_taken_0x1522b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1522b8) {
            ctx->pc = 0x1522BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1522B8u;
            // 0x1522bc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152318u;
            goto label_152318;
        }
    }
    ctx->pc = 0x1522C0u;
    // 0x1522c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1522c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1522c4: 0x50a3000f  beql        $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1522C4u;
    {
        const bool branch_taken_0x1522c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1522c4) {
            ctx->pc = 0x1522C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1522C4u;
            // 0x1522c8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152304u;
            goto label_152304;
        }
    }
    ctx->pc = 0x1522CCu;
    // 0x1522cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1522ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1522d0: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1522D0u;
    {
        const bool branch_taken_0x1522d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1522d0) {
            ctx->pc = 0x1522D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1522D0u;
            // 0x1522d4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1522F0u;
            goto label_1522f0;
        }
    }
    ctx->pc = 0x1522D8u;
    // 0x1522d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1522d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1522dc: 0x50a30016  beql        $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1522DCu;
    {
        const bool branch_taken_0x1522dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1522dc) {
            ctx->pc = 0x1522E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1522DCu;
            // 0x1522e0: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x152338u;
            goto label_152338;
        }
    }
    ctx->pc = 0x1522E4u;
    // 0x1522e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1522E4u;
    {
        const bool branch_taken_0x1522e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522e4) {
            ctx->pc = 0x152334u;
            goto label_152334;
        }
    }
    ctx->pc = 0x1522ECu;
    // 0x1522ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1522ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1522f0:
    // 0x1522f0: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x1522F0u;
    SET_GPR_U32(ctx, 31, 0x1522F8u);
    ctx->pc = 0x1522F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1522F0u;
            // 0x1522f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1522F8u; }
        if (ctx->pc != 0x1522F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1522F8u; }
        if (ctx->pc != 0x1522F8u) { return; }
    }
    ctx->pc = 0x1522F8u;
label_1522f8:
    // 0x1522f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1522F8u;
    {
        const bool branch_taken_0x1522f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522f8) {
            ctx->pc = 0x152334u;
            goto label_152334;
        }
    }
    ctx->pc = 0x152300u;
    // 0x152300: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x152300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_152304:
    // 0x152304: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x152304u;
    SET_GPR_U32(ctx, 31, 0x15230Cu);
    ctx->pc = 0x152308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152304u;
            // 0x152308: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15230Cu; }
        if (ctx->pc != 0x15230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15230Cu; }
        if (ctx->pc != 0x15230Cu) { return; }
    }
    ctx->pc = 0x15230Cu;
label_15230c:
    // 0x15230c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15230Cu;
    {
        const bool branch_taken_0x15230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15230c) {
            ctx->pc = 0x152334u;
            goto label_152334;
        }
    }
    ctx->pc = 0x152314u;
    // 0x152314: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x152314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_152318:
    // 0x152318: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x152318u;
    SET_GPR_U32(ctx, 31, 0x152320u);
    ctx->pc = 0x15231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152318u;
            // 0x15231c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152320u; }
        if (ctx->pc != 0x152320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152320u; }
        if (ctx->pc != 0x152320u) { return; }
    }
    ctx->pc = 0x152320u;
label_152320:
    // 0x152320: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x152320u;
    {
        const bool branch_taken_0x152320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152320) {
            ctx->pc = 0x152334u;
            goto label_152334;
        }
    }
    ctx->pc = 0x152328u;
    // 0x152328: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x152328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15232c:
    // 0x15232c: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x15232Cu;
    SET_GPR_U32(ctx, 31, 0x152334u);
    ctx->pc = 0x152330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15232Cu;
            // 0x152330: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152334u; }
        if (ctx->pc != 0x152334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152334u; }
        if (ctx->pc != 0x152334u) { return; }
    }
    ctx->pc = 0x152334u;
label_152334:
    // 0x152334: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x152334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_152338:
    // 0x152338: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x152338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15233c: 0x0  nop
    ctx->pc = 0x15233cu;
    // NOP
    // 0x152340: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x152340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152344: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x152344u;
    {
        const bool branch_taken_0x152344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152344) {
            ctx->pc = 0x152348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152344u;
            // 0x152348: 0x3c034300  lui         $v1, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152358u;
            goto label_152358;
        }
    }
    ctx->pc = 0x15234Cu;
    // 0x15234c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15234Cu;
    {
        const bool branch_taken_0x15234c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15234Cu;
            // 0x152350: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15234c) {
            ctx->pc = 0x152360u;
            goto label_152360;
        }
    }
    ctx->pc = 0x152354u;
    // 0x152354: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x152354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_152358:
    // 0x152358: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x152358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15235c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x15235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_152360:
    // 0x152360: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x152360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x152364: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x152364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_152368:
    // 0x152368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15236c:
    // 0x15236c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15236cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152370: 0x3e00008  jr          $ra
    ctx->pc = 0x152370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152370u;
            // 0x152374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152378u;
    // 0x152378: 0x0  nop
    ctx->pc = 0x152378u;
    // NOP
    // 0x15237c: 0x0  nop
    ctx->pc = 0x15237cu;
    // NOP
}
