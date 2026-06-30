#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305130
// Address: 0x305130 - 0x305330
void sub_00305130_0x305130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305130_0x305130");
#endif

    switch (ctx->pc) {
        case 0x3051c0u: goto label_3051c0;
        case 0x3051dcu: goto label_3051dc;
        case 0x305260u: goto label_305260;
        case 0x305304u: goto label_305304;
        case 0x305320u: goto label_305320;
        default: break;
    }

    ctx->pc = 0x305130u;

    // 0x305130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x305134: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x305134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x305138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x305138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30513c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30513cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x305140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305144: 0x8c840d60  lw          $a0, 0xD60($a0)
    ctx->pc = 0x305144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x305148: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x305148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30514c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x305150: 0x50600074  beql        $v1, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x305150u;
    {
        const bool branch_taken_0x305150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305150) {
            ctx->pc = 0x305154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305150u;
            // 0x305154: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305324u;
            goto label_305324;
        }
    }
    ctx->pc = 0x305158u;
    // 0x305158: 0xc6010a94  lwc1        $f1, 0xA94($s0)
    ctx->pc = 0x305158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30515c: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x30515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
    // 0x305160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x305160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305164: 0x0  nop
    ctx->pc = 0x305164u;
    // NOP
    // 0x305168: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x305168u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30516c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x30516Cu;
    {
        const bool branch_taken_0x30516c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x305170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30516Cu;
            // 0x305170: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30516c) {
            ctx->pc = 0x305178u;
            goto label_305178;
        }
    }
    ctx->pc = 0x305174u;
    // 0x305174: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x305174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305178:
    // 0x305178: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x305178u;
    {
        const bool branch_taken_0x305178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305178) {
            ctx->pc = 0x305188u;
            goto label_305188;
        }
    }
    ctx->pc = 0x305180u;
    // 0x305180: 0x90830050  lbu         $v1, 0x50($a0)
    ctx->pc = 0x305180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x305184: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x305184u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_305188:
    // 0x305188: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x305188u;
    {
        const bool branch_taken_0x305188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305188) {
            ctx->pc = 0x305320u;
            goto label_305320;
        }
    }
    ctx->pc = 0x305190u;
    // 0x305190: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x305190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x305194: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x305194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x305198: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x305198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x30519c: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x30519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x3051a0: 0x1064005f  beq         $v1, $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x3051A0u;
    {
        const bool branch_taken_0x3051a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3051a0) {
            ctx->pc = 0x305320u;
            goto label_305320;
        }
    }
    ctx->pc = 0x3051A8u;
    // 0x3051a8: 0x8e020a78  lw          $v0, 0xA78($s0)
    ctx->pc = 0x3051a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2680)));
    // 0x3051ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3051acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3051b0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3051B0u;
    {
        const bool branch_taken_0x3051b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3051b0) {
            ctx->pc = 0x3051B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3051B0u;
            // 0x3051b4: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3051D4u;
            goto label_3051d4;
        }
    }
    ctx->pc = 0x3051B8u;
    // 0x3051b8: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3051B8u;
    SET_GPR_U32(ctx, 31, 0x3051C0u);
    ctx->pc = 0x3051BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3051B8u;
            // 0x3051bc: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3051C0u; }
        if (ctx->pc != 0x3051C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3051C0u; }
        if (ctx->pc != 0x3051C0u) { return; }
    }
    ctx->pc = 0x3051C0u;
label_3051c0:
    // 0x3051c0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x3051c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3051c4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x3051c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3051c8: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x3051C8u;
    {
        const bool branch_taken_0x3051c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3051c8) {
            ctx->pc = 0x305320u;
            goto label_305320;
        }
    }
    ctx->pc = 0x3051D0u;
    // 0x3051d0: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x3051d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_3051d4:
    // 0x3051d4: 0xc0bd780  jal         func_2F5E00
    ctx->pc = 0x3051D4u;
    SET_GPR_U32(ctx, 31, 0x3051DCu);
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3051DCu; }
        if (ctx->pc != 0x3051DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3051DCu; }
        if (ctx->pc != 0x3051DCu) { return; }
    }
    ctx->pc = 0x3051DCu;
label_3051dc:
    // 0x3051dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3051dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3051e0: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3051E0u;
    {
        const bool branch_taken_0x3051e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3051e0) {
            ctx->pc = 0x3051E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3051E0u;
            // 0x3051e4: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305200u;
            goto label_305200;
        }
    }
    ctx->pc = 0x3051E8u;
    // 0x3051e8: 0x8e030518  lw          $v1, 0x518($s0)
    ctx->pc = 0x3051e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x3051ec: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3051ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3051f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3051f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3051f4: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3051F4u;
    {
        const bool branch_taken_0x3051f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3051f4) {
            ctx->pc = 0x3051F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3051F4u;
            // 0x3051f8: 0x8e040d74  lw          $a0, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30526Cu;
            goto label_30526c;
        }
    }
    ctx->pc = 0x3051FCu;
    // 0x3051fc: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x3051fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_305200:
    // 0x305200: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x305200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305204: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x305204u;
    {
        const bool branch_taken_0x305204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305204) {
            ctx->pc = 0x305268u;
            goto label_305268;
        }
    }
    ctx->pc = 0x30520Cu;
    // 0x30520c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x30520cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x305210: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x305210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x305214: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x305214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x305218: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x305218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x30521c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x30521Cu;
    {
        const bool branch_taken_0x30521c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30521c) {
            ctx->pc = 0x305268u;
            goto label_305268;
        }
    }
    ctx->pc = 0x305224u;
    // 0x305224: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x305224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x305228: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x305228u;
    {
        const bool branch_taken_0x305228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x305228) {
            ctx->pc = 0x305268u;
            goto label_305268;
        }
    }
    ctx->pc = 0x305230u;
    // 0x305230: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x305230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x305234: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x305234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x305238: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x305238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x30523c: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x30523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x305240: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x305240u;
    {
        const bool branch_taken_0x305240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x305240) {
            ctx->pc = 0x305268u;
            goto label_305268;
        }
    }
    ctx->pc = 0x305248u;
    // 0x305248: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x305248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
    // 0x30524c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x30524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x305250: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x305254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305258: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x305258u;
    SET_GPR_U32(ctx, 31, 0x305260u);
    ctx->pc = 0x30525Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305258u;
            // 0x30525c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305260u; }
        if (ctx->pc != 0x305260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305260u; }
        if (ctx->pc != 0x305260u) { return; }
    }
    ctx->pc = 0x305260u;
label_305260:
    // 0x305260: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x305260u;
    {
        const bool branch_taken_0x305260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305260) {
            ctx->pc = 0x305320u;
            goto label_305320;
        }
    }
    ctx->pc = 0x305268u;
label_305268:
    // 0x305268: 0x8e040d74  lw          $a0, 0xD74($s0)
    ctx->pc = 0x305268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_30526c:
    // 0x30526c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x305270: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x305270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
    // 0x305274: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x305274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x305278: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x305278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30527c: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x30527cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
    // 0x305280: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x305280u;
    {
        const bool branch_taken_0x305280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305280) {
            ctx->pc = 0x305284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305280u;
            // 0x305284: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30530Cu;
            goto label_30530c;
        }
    }
    ctx->pc = 0x305288u;
    // 0x305288: 0x3c023ebd  lui         $v0, 0x3EBD
    ctx->pc = 0x305288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16061 << 16));
    // 0x30528c: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x30528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
    // 0x305290: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x305290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305294: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x305294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x305298: 0x0  nop
    ctx->pc = 0x305298u;
    // NOP
    // 0x30529c: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x30529cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3052a0: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x3052A0u;
    {
        const bool branch_taken_0x3052a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3052a0) {
            ctx->pc = 0x3052A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3052A0u;
            // 0x3052a4: 0x3c023dbd  lui         $v0, 0x3DBD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15805 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3052D0u;
            goto label_3052d0;
        }
    }
    ctx->pc = 0x3052A8u;
    // 0x3052a8: 0x46030881  sub.s       $f2, $f1, $f3
    ctx->pc = 0x3052a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3052ac: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3052acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3052b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3052b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3052b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3052b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3052b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3052b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3052bc: 0x0  nop
    ctx->pc = 0x3052bcu;
    // NOP
    // 0x3052c0: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3052c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3052c4: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x3052c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x3052c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3052C8u;
    {
        const bool branch_taken_0x3052c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3052CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3052C8u;
            // 0x3052cc: 0xe6000de4  swc1        $f0, 0xDE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052c8) {
            ctx->pc = 0x3052ECu;
            goto label_3052ec;
        }
    }
    ctx->pc = 0x3052D0u;
label_3052d0:
    // 0x3052d0: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x3052d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
    // 0x3052d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3052d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3052d8: 0x0  nop
    ctx->pc = 0x3052d8u;
    // NOP
    // 0x3052dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3052dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3052e0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3052E0u;
    {
        const bool branch_taken_0x3052e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3052e0) {
            ctx->pc = 0x3052E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3052E0u;
            // 0x3052e4: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3052F0u;
            goto label_3052f0;
        }
    }
    ctx->pc = 0x3052E8u;
    // 0x3052e8: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x3052e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
label_3052ec:
    // 0x3052ec: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x3052ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_3052f0:
    // 0x3052f0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3052f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x3052f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3052f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3052f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3052f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3052fc: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x3052FCu;
    SET_GPR_U32(ctx, 31, 0x305304u);
    ctx->pc = 0x305300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3052FCu;
            // 0x305300: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305304u; }
        if (ctx->pc != 0x305304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305304u; }
        if (ctx->pc != 0x305304u) { return; }
    }
    ctx->pc = 0x305304u;
label_305304:
    // 0x305304: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x305304u;
    {
        const bool branch_taken_0x305304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305304) {
            ctx->pc = 0x305320u;
            goto label_305320;
        }
    }
    ctx->pc = 0x30530Cu;
label_30530c:
    // 0x30530c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x30530cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x305310: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305314: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x305314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305318: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x305318u;
    SET_GPR_U32(ctx, 31, 0x305320u);
    ctx->pc = 0x30531Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305318u;
            // 0x30531c: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305320u; }
        if (ctx->pc != 0x305320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305320u; }
        if (ctx->pc != 0x305320u) { return; }
    }
    ctx->pc = 0x305320u;
label_305320:
    // 0x305320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x305320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_305324:
    // 0x305324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305328: 0x3e00008  jr          $ra
    ctx->pc = 0x305328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305328u;
            // 0x30532c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305330u;
}
