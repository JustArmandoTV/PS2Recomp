#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00491490
// Address: 0x491490 - 0x4916d0
void sub_00491490_0x491490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491490_0x491490");
#endif

    switch (ctx->pc) {
        case 0x491510u: goto label_491510;
        case 0x491594u: goto label_491594;
        case 0x49161cu: goto label_49161c;
        case 0x4916a4u: goto label_4916a4;
        case 0x4916c0u: goto label_4916c0;
        default: break;
    }

    ctx->pc = 0x491490u;

label_491490:
    // 0x491490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x491490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x491494: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x491494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x491498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x491498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49149c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x49149cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4914a0: 0x5067001d  beql        $v1, $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x4914A0u;
    {
        const bool branch_taken_0x4914a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x4914a0) {
            ctx->pc = 0x4914A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4914A0u;
            // 0x4914a4: 0x90a20008  lbu         $v0, 0x8($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491518u;
            goto label_491518;
        }
    }
    ctx->pc = 0x4914A8u;
    // 0x4914a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4914a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4914ac: 0x50620084  beql        $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x4914ACu;
    {
        const bool branch_taken_0x4914ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4914ac) {
            ctx->pc = 0x4914B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4914ACu;
            // 0x4914b0: 0xc4a00008  lwc1        $f0, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x4914B4u;
    // 0x4914b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4914b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4914b8: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4914B8u;
    {
        const bool branch_taken_0x4914b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4914b8) {
            ctx->pc = 0x4914BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4914B8u;
            // 0x4914bc: 0xdca40008  ld          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491508u;
            goto label_491508;
        }
    }
    ctx->pc = 0x4914C0u;
    // 0x4914c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4914c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4914c4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4914C4u;
    {
        const bool branch_taken_0x4914c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4914c4) {
            ctx->pc = 0x4914C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4914C4u;
            // 0x4914c8: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4914D4u;
            goto label_4914d4;
        }
    }
    ctx->pc = 0x4914CCu;
    // 0x4914cc: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x4914CCu;
    {
        const bool branch_taken_0x4914cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4914D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4914CCu;
            // 0x4914d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4914cc) {
            ctx->pc = 0x4916C4u;
            goto label_4916c4;
        }
    }
    ctx->pc = 0x4914D4u;
label_4914d4:
    // 0x4914d4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4914D4u;
    {
        const bool branch_taken_0x4914d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4914d4) {
            ctx->pc = 0x4914D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4914D4u;
            // 0x4914d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4914E8u;
            goto label_4914e8;
        }
    }
    ctx->pc = 0x4914DCu;
    // 0x4914dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4914dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4914e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4914E0u;
    {
        const bool branch_taken_0x4914e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4914E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4914E0u;
            // 0x4914e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4914e0) {
            ctx->pc = 0x491500u;
            goto label_491500;
        }
    }
    ctx->pc = 0x4914E8u;
label_4914e8:
    // 0x4914e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4914e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4914ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4914ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4914f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4914f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4914f4: 0x0  nop
    ctx->pc = 0x4914f4u;
    // NOP
    // 0x4914f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4914f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4914fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4914fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_491500:
    // 0x491500: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x491500u;
    {
        const bool branch_taken_0x491500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491500) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x491508u;
label_491508:
    // 0x491508: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x491508u;
    SET_GPR_U32(ctx, 31, 0x491510u);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491510u; }
        if (ctx->pc != 0x491510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491510u; }
        if (ctx->pc != 0x491510u) { return; }
    }
    ctx->pc = 0x491510u;
label_491510:
    // 0x491510: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x491510u;
    {
        const bool branch_taken_0x491510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491510) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x491518u;
label_491518:
    // 0x491518: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x491518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x49151c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x49151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x491520: 0x90430058  lbu         $v1, 0x58($v0)
    ctx->pc = 0x491520u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x491524: 0x1067001d  beq         $v1, $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x491524u;
    {
        const bool branch_taken_0x491524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x491528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491524u;
            // 0x491528: 0x24460058  addiu       $a2, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491524) {
            ctx->pc = 0x49159Cu;
            goto label_49159c;
        }
    }
    ctx->pc = 0x49152Cu;
    // 0x49152c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x491530: 0x50620063  beql        $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x491530u;
    {
        const bool branch_taken_0x491530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491530) {
            ctx->pc = 0x491534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491530u;
            // 0x491534: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x491538u;
    // 0x491538: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x491538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49153c: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x49153Cu;
    {
        const bool branch_taken_0x49153c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49153c) {
            ctx->pc = 0x491540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49153Cu;
            // 0x491540: 0xdcc40008  ld          $a0, 0x8($a2) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49158Cu;
            goto label_49158c;
        }
    }
    ctx->pc = 0x491544u;
    // 0x491544: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x491544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x491548: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x491548u;
    {
        const bool branch_taken_0x491548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491548) {
            ctx->pc = 0x49154Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491548u;
            // 0x49154c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491558u;
            goto label_491558;
        }
    }
    ctx->pc = 0x491550u;
    // 0x491550: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x491550u;
    {
        const bool branch_taken_0x491550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491550) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x491558u;
label_491558:
    // 0x491558: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x491558u;
    {
        const bool branch_taken_0x491558 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x491558) {
            ctx->pc = 0x49155Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491558u;
            // 0x49155c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49156Cu;
            goto label_49156c;
        }
    }
    ctx->pc = 0x491560u;
    // 0x491560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x491560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x491564: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x491564u;
    {
        const bool branch_taken_0x491564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491564u;
            // 0x491568: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x491564) {
            ctx->pc = 0x491584u;
            goto label_491584;
        }
    }
    ctx->pc = 0x49156Cu;
label_49156c:
    // 0x49156c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x491570: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x491574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x491574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x491578: 0x0  nop
    ctx->pc = 0x491578u;
    // NOP
    // 0x49157c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x49157cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x491580: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x491580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_491584:
    // 0x491584: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x491584u;
    {
        const bool branch_taken_0x491584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491584) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x49158Cu;
label_49158c:
    // 0x49158c: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x49158Cu;
    SET_GPR_U32(ctx, 31, 0x491594u);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491594u; }
        if (ctx->pc != 0x491594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x491594u; }
        if (ctx->pc != 0x491594u) { return; }
    }
    ctx->pc = 0x491594u;
label_491594:
    // 0x491594: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x491594u;
    {
        const bool branch_taken_0x491594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491594) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x49159Cu;
label_49159c:
    // 0x49159c: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x49159cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4915a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4915a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4915a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4915a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4915a8: 0x90430058  lbu         $v1, 0x58($v0)
    ctx->pc = 0x4915a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x4915ac: 0x1067001d  beq         $v1, $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x4915ACu;
    {
        const bool branch_taken_0x4915ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x4915B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4915ACu;
            // 0x4915b0: 0x24460058  addiu       $a2, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4915ac) {
            ctx->pc = 0x491624u;
            goto label_491624;
        }
    }
    ctx->pc = 0x4915B4u;
    // 0x4915b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4915b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4915b8: 0x50620041  beql        $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4915B8u;
    {
        const bool branch_taken_0x4915b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4915b8) {
            ctx->pc = 0x4915BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4915B8u;
            // 0x4915bc: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x4915C0u;
    // 0x4915c0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4915c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4915c4: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4915C4u;
    {
        const bool branch_taken_0x4915c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4915c4) {
            ctx->pc = 0x4915C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4915C4u;
            // 0x4915c8: 0xdcc40008  ld          $a0, 0x8($a2) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491614u;
            goto label_491614;
        }
    }
    ctx->pc = 0x4915CCu;
    // 0x4915cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4915ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4915d0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4915D0u;
    {
        const bool branch_taken_0x4915d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4915d0) {
            ctx->pc = 0x4915D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4915D0u;
            // 0x4915d4: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4915E0u;
            goto label_4915e0;
        }
    }
    ctx->pc = 0x4915D8u;
    // 0x4915d8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x4915D8u;
    {
        const bool branch_taken_0x4915d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4915d8) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x4915E0u;
label_4915e0:
    // 0x4915e0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4915E0u;
    {
        const bool branch_taken_0x4915e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4915e0) {
            ctx->pc = 0x4915E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4915E0u;
            // 0x4915e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4915F4u;
            goto label_4915f4;
        }
    }
    ctx->pc = 0x4915E8u;
    // 0x4915e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4915e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4915ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4915ECu;
    {
        const bool branch_taken_0x4915ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4915F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4915ECu;
            // 0x4915f0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4915ec) {
            ctx->pc = 0x49160Cu;
            goto label_49160c;
        }
    }
    ctx->pc = 0x4915F4u;
label_4915f4:
    // 0x4915f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4915f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4915f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4915f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4915fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4915fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x491600: 0x0  nop
    ctx->pc = 0x491600u;
    // NOP
    // 0x491604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x491604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x491608: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x491608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_49160c:
    // 0x49160c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x49160Cu;
    {
        const bool branch_taken_0x49160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49160c) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x491614u;
label_491614:
    // 0x491614: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x491614u;
    SET_GPR_U32(ctx, 31, 0x49161Cu);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49161Cu; }
        if (ctx->pc != 0x49161Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49161Cu; }
        if (ctx->pc != 0x49161Cu) { return; }
    }
    ctx->pc = 0x49161Cu;
label_49161c:
    // 0x49161c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x49161Cu;
    {
        const bool branch_taken_0x49161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49161c) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x491624u;
label_491624:
    // 0x491624: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x491624u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x491628: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x491628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x49162c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x49162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x491630: 0x90430058  lbu         $v1, 0x58($v0)
    ctx->pc = 0x491630u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x491634: 0x1067001d  beq         $v1, $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x491634u;
    {
        const bool branch_taken_0x491634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x491638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491634u;
            // 0x491638: 0x24460058  addiu       $a2, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491634) {
            ctx->pc = 0x4916ACu;
            goto label_4916ac;
        }
    }
    ctx->pc = 0x49163Cu;
    // 0x49163c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x491640: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x491640u;
    {
        const bool branch_taken_0x491640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491640) {
            ctx->pc = 0x491644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491640u;
            // 0x491644: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x491648u;
    // 0x491648: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x491648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49164c: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x49164Cu;
    {
        const bool branch_taken_0x49164c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49164c) {
            ctx->pc = 0x491650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49164Cu;
            // 0x491650: 0xdcc40008  ld          $a0, 0x8($a2) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49169Cu;
            goto label_49169c;
        }
    }
    ctx->pc = 0x491654u;
    // 0x491654: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x491654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x491658: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x491658u;
    {
        const bool branch_taken_0x491658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x491658) {
            ctx->pc = 0x49165Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491658u;
            // 0x49165c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x491668u;
            goto label_491668;
        }
    }
    ctx->pc = 0x491660u;
    // 0x491660: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x491660u;
    {
        const bool branch_taken_0x491660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491660) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x491668u;
label_491668:
    // 0x491668: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x491668u;
    {
        const bool branch_taken_0x491668 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x491668) {
            ctx->pc = 0x49166Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x491668u;
            // 0x49166c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49167Cu;
            goto label_49167c;
        }
    }
    ctx->pc = 0x491670u;
    // 0x491670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x491670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x491674: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x491674u;
    {
        const bool branch_taken_0x491674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x491678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x491674u;
            // 0x491678: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x491674) {
            ctx->pc = 0x491694u;
            goto label_491694;
        }
    }
    ctx->pc = 0x49167Cu;
label_49167c:
    // 0x49167c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49167cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x491680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x491680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x491684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x491684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x491688: 0x0  nop
    ctx->pc = 0x491688u;
    // NOP
    // 0x49168c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x49168cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x491690: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x491690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_491694:
    // 0x491694: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x491694u;
    {
        const bool branch_taken_0x491694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491694) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x49169Cu;
label_49169c:
    // 0x49169c: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x49169Cu;
    SET_GPR_U32(ctx, 31, 0x4916A4u);
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4916A4u; }
        if (ctx->pc != 0x4916A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4916A4u; }
        if (ctx->pc != 0x4916A4u) { return; }
    }
    ctx->pc = 0x4916A4u;
label_4916a4:
    // 0x4916a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4916A4u;
    {
        const bool branch_taken_0x4916a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4916a4) {
            ctx->pc = 0x4916C0u;
            goto label_4916c0;
        }
    }
    ctx->pc = 0x4916ACu;
label_4916ac:
    // 0x4916ac: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x4916acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4916b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4916b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4916b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4916b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4916b8: 0xc124524  jal         func_491490
    ctx->pc = 0x4916B8u;
    SET_GPR_U32(ctx, 31, 0x4916C0u);
    ctx->pc = 0x4916BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4916B8u;
            // 0x4916bc: 0x24450058  addiu       $a1, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x491490u;
    goto label_491490;
    ctx->pc = 0x4916C0u;
label_4916c0:
    // 0x4916c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4916c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4916c4:
    // 0x4916c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4916C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4916C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4916C4u;
            // 0x4916c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4916CCu;
    // 0x4916cc: 0x0  nop
    ctx->pc = 0x4916ccu;
    // NOP
}
